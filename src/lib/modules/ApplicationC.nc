#include <string.h>
#include <stdio.h>
#include "../../packet.h"
#include "../../socket.h"
#include "../../users.h"
#include "../../TCP.h"
#include "../../sendInfo.h"

module ApplicationC
{
	provides interface Application;
	
	uses interface Transport;
	uses interface Hashmap<socket_storage_t> as Sockets;
	uses interface Hashmap<User> as Users;
	uses interface Hashmap<socket_t> as FDs;
	uses interface Timer<TMilli> as TryWritingTimer;
	uses interface Timer<TMilli> as ReadTimer;
}

implementation
{
	socket_t fd, sock;
	socket_addr_t addr;
	socket_storage_t sockSt;
	User user, user2;
	uint8_t readBuffer[READ_BUFFER_MAX];
	uint16_t readBuffSize;
	uint8_t messageToSend[150];
	uint8_t messageToSendSize;
	uint16_t i;
	
	command error_t Application.initializeServer(uint8_t server_port)
	{
		fd = call Transport.socket();
		addr.srcAddr = TOS_NODE_ID;
		addr.srcPort = server_port;
		
		call FDs.insert(addr.srcPort, fd);
		call Transport.bind(fd, &addr);
		call Transport.setNodeSocket(fd);
		call Transport.listen(fd);
		
		readBuffSize = 0;
				
		call Application.serverReady();
		call Application.clientReady();
		
		return SUCCESS;
	}
	
	command error_t Application.initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer)
	{
		uint16_t index;
		index = 0;
		messageToSendSize = 0;
		fd = call Transport.socket();
		addr.srcAddr = TOS_NODE_ID;
		addr.srcPort = client_port;
		addr.destAddr = dest_addr;
		addr.destPort = dest_port;
		call FDs.insert(addr.destPort, fd);

		if (call Transport.bind(fd, &addr) == SUCCESS)
		{
			call Transport.setNodeSocket(fd);
			call Transport.connect(fd, &addr);
			sockSt = call Sockets.get(fd);
				
			// Initializations
			sockSt.dataToSendSize = 0;
			sockSt.messageToQuerySize = 0;
			sockSt.sendBuffSize = 0;
			sockSt.recBuffSize = 0;
			sockSt.lastByteSent = 0;
			sockSt.lastByteWritten = 0;
			sockSt.lastByteAck = 0;
	
			sockSt.messageToQuerySize = 0;
			sockSt.sendBuffSize = 0;
			sockSt.recBuffSize = 0;
			sockSt.lastByteRec = 65535;
			sockSt.lastByteRead = 65535;
			sockSt.nextByteExpected = 0;
			sockSt.nextExpectedSeq = 65535;
			sockSt.recBuffSize = 0;
			readBuffSize = 0;
	
			call Sockets.remove(fd);
			call Sockets.insert(fd, sockSt);
		}
		
		return SUCCESS;
	}
	
	command error_t Application.messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t* message)
	{
		sock = call FDs.get(dest_port);
		sockSt = call Sockets.get(sock);
			
		// Store until received entire message
		for (i = messageToSendSize; i < messageToSendSize+size; i++)
		{
			messageToSend[i] = message[i-messageToSendSize];
		}
		messageToSendSize += size;
		
		//Received end of message
		if (messageToSend[messageToSendSize-1] == '\n')
		{
			// Copy the message to be eventually written to the send buffer
			for (i = 0; i < messageToSendSize; i++)
			{
				sockSt.dataToSend[i] = messageToSend[i];
			}
			
			sockSt.dataToSendSize = messageToSendSize;
			messageToSendSize = 0;
		}

		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
		
		return SUCCESS;
	}
	
	command error_t Application.query(socket_t qfd, uint8_t* buff, uint16_t bufflen)
	{
		socket_t tmpFD;
		socket_storage_t tmpSockSt;
		uint8_t copy[200];
		uint8_t username[200];
		uint8_t target[200];
		uint8_t* msg[200];
		uint8_t chr, size;
		char* split;
		char* broadcast = "bc ";
		char* list = "list ";
		char* private = "priv ";
		char* space = " ";
		char* comma = ", ";
		char* nl = "\n";
		char* rc = "\r";
		uint32_t* keys;
		uint32_t key;
		
		sockSt = call Sockets.get(qfd);
		
		// Store until received entire message
		for (i = sockSt.messageToQuerySize; i < sockSt.messageToQuerySize+bufflen; i++)
		{
			sockSt.messageToQuery[i] = buff[i-sockSt.messageToQuerySize];
		}

		sockSt.messageToQuerySize += readBuffSize;
		call Sockets.remove(qfd);
		call Sockets.insert(qfd, sockSt);
	
		//Received end of message
		if (sockSt.messageToQuery[sockSt.messageToQuerySize-1] == '\n')
		{
			// Make a copy of the message in order to split it
			strcpy(copy,sockSt.messageToQuery);
			split = strtok(copy, " \r");
			
			// Server protocols
			if(!strcmp(split, "hello"))
			{
				dbg("Project4Gen", "\"Connect to Server\" Command Detected!\n");
								
				// Get name
				split = strtok(NULL, " ");
				user.namesize = (uint8_t)strlen(split);
				strcpy(user.name, split);
			
				// Get port
				split = strtok(NULL, "\r");
				user.port = (uint8_t)atoi(split);
				dbg("Project4Clean", "<Server> Registered %s at port: %d\n", user.name, user.port);
				
				// Save the user information
				call Users.insert(user.port, user);
			}
			else if(!strcmp(split, "msg"))
			{
				dbg("Project4Gen", "\"Broadcast a Message\" Command Detected!\n");
				user = call Users.get(sockSt.sockAddr.destPort);
				
				// Get Message
				split = strtok(NULL, "\r");
				size = (uint8_t)strlen(split);
				
				// Broadcast to other users
				keys = call Users.getKeys();
				for (i = 0; i < call Users.size(); i++)
				{
					key = keys[i];
					user2 = call Users.get(key);
					
					tmpFD = call FDs.get(user2.port);
					tmpSockSt = call Sockets.get(tmpFD);
	
					// Add data to message to send
					strcpy(tmpSockSt.dataToSend, broadcast); //protocol
					tmpSockSt.dataToSendSize = (uint8_t)strlen(broadcast);
					strcat(tmpSockSt.dataToSend, user.name); //username
					tmpSockSt.dataToSendSize += user.namesize;
					strcat(tmpSockSt.dataToSend, space); //space
					tmpSockSt.dataToSendSize++;
					strcat(tmpSockSt.dataToSend, split); //message
					tmpSockSt.dataToSendSize += size;
					strcat(tmpSockSt.dataToSend, nl); //newline char
					tmpSockSt.dataToSendSize++;
					
					call Sockets.remove(tmpFD);
					call Sockets.insert(tmpFD, tmpSockSt);
				}
				  
				// Send to the user that sent the message
				strcpy(sockSt.dataToSend, broadcast); // protocol
				sockSt.dataToSendSize = (uint8_t)strlen(broadcast);
				strcat(sockSt.dataToSend, user.name); //username
				sockSt.dataToSendSize += user.namesize;
				strcat(sockSt.dataToSend, space); //space
				sockSt.dataToSendSize++;
				strcat(sockSt.dataToSend, split); //message
				sockSt.dataToSendSize += size;
				strcat(sockSt.dataToSend, nl); //newline char
				sockSt.dataToSendSize++;
			}
			else if(!strcmp(split, "whisper"))
			{
				dbg("Project4Gen", "\"Unicast a Message\" Command Detected!\n");
				
				user = call Users.get(sockSt.sockAddr.destPort);
				
				// Get User
				split = strtok(NULL, " ");
				size = (uint8_t)strlen(split);
				
				// Find user
				keys = call Users.getKeys();
				for (i = 0; i < call Users.size(); i++)
				{
					key = keys[i];
					user2 = call Users.get(key);
					
					if (!strcmp(user2.name, split))
					{
						// Send PM to this specified user
						split = strtok(NULL, "\r");
						size = (uint8_t)strlen(split);
				
						tmpFD = call FDs.get(user2.port);
						tmpSockSt = call Sockets.get(tmpFD);
	
						strcpy(tmpSockSt.dataToSend, private); //protocol
						tmpSockSt.dataToSendSize = (uint8_t)strlen(private);
						strcat(tmpSockSt.dataToSend, user.name); //username
						tmpSockSt.dataToSendSize += user.namesize;
						strcat(tmpSockSt.dataToSend, space); //space
						tmpSockSt.dataToSendSize++;
						strcat(tmpSockSt.dataToSend, user2.name); //target user
						tmpSockSt.dataToSendSize += user2.namesize;
						strcat(tmpSockSt.dataToSend, space); //space
						tmpSockSt.dataToSendSize++;
						strcat(tmpSockSt.dataToSend, split); //message
						tmpSockSt.dataToSendSize += size;
						strcat(tmpSockSt.dataToSend, nl); //newline char
						tmpSockSt.dataToSendSize++;
	
						call Sockets.remove(tmpFD);
						call Sockets.insert(tmpFD, tmpSockSt);
					}
				}
			}
			else if(!strcmp(split, "listusr"))
			{
				dbg("Project4Gen", "\"Print Users\" Command Detected!\n");
				strcpy(msg, list);
				
				keys = call Users.getKeys();
				
				// Get names of all the users
				for (i = 0; i < call Users.size(); i++)
				{
					key = keys[i];
					user = call Users.get(key);
					
					strcat(msg, user.name); //username
					strcat(msg, comma); //comma
				}
				strcat(msg, nl); //newline char

				strcpy(sockSt.dataToSend, msg);
				sockSt.dataToSendSize = strlen(msg);
			}
			
			// Client protocols
			else if(!strcmp(split, "bc"))
			{
				// Print the broadcasted message
				split = strtok(NULL, " ");
				strcpy(username, split);
				split = strtok(NULL, "\n");
				strcpy(msg, split);
				
				dbg("Project4Clean", "<%s> %s\n", username, msg);
			}
			else if(!strcmp(split, "priv"))
			{
				// Print the whispered message
				split = strtok(NULL, " ");
				strcpy(username, split);
				split = strtok(NULL, " ");
				strcpy(target, split);
				split = strtok(NULL, "\n");
				strcpy(msg, split);
				
				dbg("Project4Clean", "<%s @ %s> %s\n", username, target, msg);
			}
			else if(!strcmp(split, "list"))
			{
				// Print the user list
				split = strtok(NULL, "\n");
				strcpy(msg, split);
				
				dbg("Project4Clean", "<Chat> UserList: %s\n", msg);
			}
			else
			{
				dbg("Project4Gen", "Unknown protocol: %s\n", sockSt.messageToQuery);
			}
			
			sockSt.messageToQuerySize = 0;
			
			call Sockets.remove(qfd);
			call Sockets.insert(qfd, sockSt);
		}
	
		return SUCCESS;
	}
	
	command error_t Application.clientReady()
	{
		call TryWritingTimer.startOneShot(40000);
		
		return SUCCESS;
	}
	
	command error_t Application.serverReady()
	{
		call ReadTimer.startOneShot(37707);
		
		return SUCCESS;
	}

	event void TryWritingTimer.fired()
	{
		uint32_t* keys;
		
		keys = call Sockets.getKeys();
		
		for (i = 0; i < call Sockets.size(); i++)
		{
			sockSt = call Sockets.get(keys[i]);
			
			if (sockSt.dataToSendSize > 0)
			{
				call Transport.write(keys[i]);
			}
		}
		
		call TryWritingTimer.startOneShot(90000);
	}
	
	event void ReadTimer.fired()
	{
		uint16_t tmp1, tmp2, j;
		uint32_t* keys;
		uint32_t key;
		
		keys = call Sockets.getKeys();
		
		for (i = 0; i < call Sockets.size(); i++)
		{
			key = keys[i];
			sockSt = call Sockets.get(key);
	
			tmp1 = sockSt.lastByteRec + 1;
			tmp2 = sockSt.lastByteRead + 1;
			if ((tmp1 > tmp2) && (sockSt.state == SOCK_ESTABLISHED))
			{
				readBuffSize = call Transport.read(key, readBuffer, (READ_BUFFER_MAX - readBuffSize));
				
				// Process the message received
				call Application.query(key, readBuffer, readBuffSize);
				readBuffSize = 0;
			}
		}
		
		call ReadTimer.startOneShot(37707);
	}
	
	


	
}