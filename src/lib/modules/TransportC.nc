#include "../../packet.h"
#include "../../socket.h"
#include "../../TCP.h"
#include "../../sendInfo.h"

module TransportC
{
	provides interface Transport;
	
	uses
	{
		interface SimpleSend as Sender;
		interface PacketInfo;
		interface ShortestPath;
		interface Application;
		interface Timer<TMilli> as TimeoutTimer;
		interface Timer<TMilli> as HandShakeTimer;
		interface Timer<TMilli> as AckTimer;
		interface Hashmap<socket_storage_t> as Sockets;
		interface Hashmap<socket_t> as FDs;
	}
}

implementation
{
	uint8_t payday[PACKET_MAX_PAYLOAD_SIZE];
	pack sendPackage;
	socket_storage_t nodeSocket;
	socket_addr_t nodeAddr;
	socket_t nodeFD;
	socket_t sock;
	socket_addr_t addrTMP;
	socket_storage_t sockSt;
	static uint16_t Seq = 0;
	static uint8_t TCP_Seq = 0;
	uint16_t i;
	TCP* recTCP;
	uint8_t dataToSend[128];
	uint8_t dataToSendSize;
	
	void sendSignal(socket_t fd);
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length);
	
	command void Transport.startTimer()
	{
		call TimeoutTimer.startPeriodic(4500);
		call HandShakeTimer.startOneShot(4500);
		call AckTimer.startOneShot(4500);
	}
	
	command socket_t Transport.socket()
	{		
		socket_storage_t sockStTMP;
		
		// Get first available socket
		for (sock = 0; sock <= 15; sock++)
		{
			if (!call Sockets.contains(sock))
			{
				sockStTMP.state = SOCK_LISTEN;
				sockStTMP.inTimeOut = FALSE;
				sockStTMP.inAckTimeOut = FALSE;
				sockStTMP.inHSTimeOut = FALSE;
				sockStTMP.neverSent = TRUE;
				sockStTMP.sending = FALSE;
				sockStTMP.seq = 0;
				
				call Sockets.insert(sock, sockStTMP);
	
				return sock;
			}
		}
	
		dbg("Project3TGen", "No available sockets...\n");
		return -1;
	}

	command error_t Transport.bind(socket_t fd, socket_addr_t *addr)
	{
		if (!call Sockets.contains(fd))
		{
			return FAIL;
		}
	
		// Bind the socket with address
		sockSt = call Sockets.get(fd);
		sockSt.sockAddr = *addr;
		sockSt.lastByteWritten = 65535;
	
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
	
		return SUCCESS;
	}
 
	command socket_t Transport.accept(socket_t fd)
	{
		if (!call Sockets.contains(fd))
		{
			return FAIL;
		}
	
		// Adds the server info to the socket
		nodeSocket = call Sockets.get(nodeFD);
		sockSt = call Sockets.get(fd);
		sockSt.sockAddr.srcPort = nodeSocket.sockAddr.srcPort;
		sockSt.sockAddr.srcAddr = nodeSocket.sockAddr.srcAddr;
	
		sockSt.messageToQuerySize = 0;
		sockSt.sendBuffSize = 0;
		sockSt.recBuffSize = 0;
		sockSt.lastByteRec = 65535;
		sockSt.lastByteRead = 65535;
		sockSt.nextByteExpected = 0;
		sockSt.nextExpectedSeq = 65535;
		sockSt.recBuffSize = 0;
		
		sockSt.dataToSendSize = 0;
		sockSt.messageToQuerySize = 0;
		sockSt.sendBuffSize = 0;
		sockSt.recBuffSize = 0;
		sockSt.lastByteSent = 0;
		sockSt.lastByteWritten = 0;
		sockSt.lastByteAck = 0;
	
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
		
		// Adds FD to a hashmap; can be gotten using the port number
		if (call FDs.contains(sockSt.sockAddr.destPort))
		{
			call FDs.remove(sockSt.sockAddr.destPort);
		}
	
		call FDs.insert(sockSt.sockAddr.destPort, fd);
		
		return SUCCESS;
	}
	
	command uint16_t Transport.write(socket_t fd)
	{
		uint16_t min, j, stopped, LBW_LBA, tmp;
		TCP tmpTCP;
		j = 0;
	
		sockSt = call Sockets.get(fd);
		if (sockSt.inTimeOut == TRUE)
		{
			return 0;
		}
		
		if (sockSt.neverSent == TRUE)
		{
			sockSt.lastByteWritten = 65535;
			sockSt.lastByteAck = 65535;
			sockSt.lastByteSent = 65535;
			sockSt.advWin = 2;
		}
		
		// Find where to stop
		LBW_LBA = sockSt.lastByteWritten - sockSt.lastByteAck;
		LBW_LBA = LBW_LBA % 128;
		
		if ((SOCKET_SEND_BUFFER_SIZE-LBW_LBA) < sockSt.dataToSendSize)
		{
			min = SOCKET_SEND_BUFFER_SIZE-LBW_LBA;
		}
		else
		{
			min = sockSt.dataToSendSize;
		}
		
		// Copy onto send buffer
		tmp = sockSt.lastByteWritten;
		tmp++;
		for (i = tmp; i < tmp+min; i++)
		{
			sockSt.sendBuff[i%128] = sockSt.dataToSend[j];
			sockSt.lastByteWritten++;
			stopped = j;
			j++;
		}
		
		LBW_LBA = sockSt.lastByteWritten - sockSt.lastByteAck;
		LBW_LBA = LBW_LBA % 128;
		sockSt.sendBuffSize = LBW_LBA;
		
		// Move all values to the left
		for(i = 0; i < sockSt.dataToSendSize-stopped-1; i++)
		{
			sockSt.dataToSend[i] = sockSt.dataToSend[i+stopped+1];
		}
		sockSt.dataToSendSize = sockSt.dataToSendSize - stopped-1;
		
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
	
		// Pass a dummy TCP in order to 'probe' with 2 bytes
		tmpTCP.ack = sockSt.seq;
		tmpTCP.adv_win = 2;
		tmpTCP.src_port = sockSt.sockAddr.destPort;
		call Transport.send(tmpTCP);

		return j;
	}
	
	command error_t Transport.receive(pack* package)
	{
		TCP* sendTCP;
		recTCP = (TCP*)package->payload;
		sendTCP = (TCP*)payday;
		
		// If the port received is not open, don't do anything
		if (recTCP->dest_port != nodeAddr.srcPort)
		{
			dbg("Project3TGen", "Port not open\n");
			return FAIL;
		}

		// If server receives a SYN, allocate a socket for the connection
		if (recTCP->flag == SYN)
		{
			dbg("Project3TGen", "Received SYN from node %d at port %d\n", package->src, recTCP->dest_port);
			
			if (call FDs.contains(recTCP->src_port) == FALSE)
			{
				addrTMP.destAddr = package->src;
				addrTMP.destPort = recTCP->src_port;

				sock = call Transport.socket();
	
				if (sock == 0)
				{
					return FAIL;
				}	
	
				call Transport.bind(sock, &addrTMP);
				call Transport.accept(sock);
			}
		}
		
		// If server hasn't created a socket for the connection, don't do anything
		if (call FDs.contains(recTCP->src_port) == FALSE)
		{
			return FAIL;
		}
		
		sock = call FDs.get(recTCP->src_port);
		sockSt = call Sockets.get(sock);
	
		sendTCP->src_port = sockSt.sockAddr.srcPort;
		sendTCP->dest_port = sockSt.sockAddr.destPort;
		sendTCP->seq = sockSt.seq;
		sendTCP->ack = recTCP->seq + 1;
		
		switch (recTCP->flag)
		{
			
		case SYN:
			if (sockSt.state == SOCK_LISTEN)
			{
				sendTCP->flag = SYN_ACK;
				sockSt.state = SOCK_SYN_RCVD;
	
				sendSignal(sock);
				sockSt.packet = sendPackage;
	
				sockSt.inHSTimeOut = TRUE;
				sockSt.HStimeOut = 9000;
				
				dbg("Project3TGen", "Sent SYN_ACK\n");
				sockSt.seq++;
				
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);
			}
			break;
			
		case SYN_ACK:
			dbg("Project3TGen", "Received SYN_ACK from node %d at port %d\n", package->src, recTCP->dest_port);

			if (sockSt.state == SOCK_SYN_SENT)
			{
				sendTCP->flag = ACK;
				sockSt.state = SOCK_ESTABLISHED;
				dbg("Project3TGen", "Connection Established\n");
	
				sendSignal(sock);
				sockSt.packet = sendPackage;
				dbg("Project3TGen", "Sent ACK\n");
				
				sockSt.ackseq = sockSt.seq;
				sockSt.seq++;

				// Turn off HS Timer
				sockSt.inHSTimeOut = FALSE;
				sockSt.HStimeOut = 0;
	
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);

				call Application.clientReady();
				call Application.serverReady();
			}
			else if (sockSt.state == SOCK_ESTABLISHED)
			{
				sendTCP->flag = ACK;
				sendTCP->seq = sockSt.ackseq;
				sockSt.seq = sockSt.ackseq + 1;
				
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);
				
				call ShortestPath.SendPack(&sockSt.packet);
				dbg("Project3TGen", "Sent ACK\n");
			}
			break;

		case ACK:
			dbg("Project3TGen", "Received ACK from node %d at port %d\n", package->src, recTCP->dest_port);
			
			if (sockSt.state == SOCK_FIN_WAIT)
			{
				sockSt.state = SOCK_FIN_WAIT2;
			}
			else if (sockSt.state == SOCK_SYN_RCVD)
			{
				sockSt.state = SOCK_ESTABLISHED;
				// Turn off HS Timer
				sockSt.inHSTimeOut = FALSE;
				sockSt.HStimeOut = 0;
				sockSt.nextExpectedSeq = recTCP->seq + 1;
				
				dbg("Project3TGen", "Connection Established, seq: %d\n", recTCP->seq);
			}
			else if (sockSt.state == SOCK_LAST_ACK)
			{
				sockSt.state = SOCK_CLOSED;
				sockSt.inHSTimeOut = FALSE;
				sockSt.HStimeOut = 0;
				
				call FDs.remove(sockSt.sockAddr.destPort);
				call Sockets.remove(sock);
				
				dbg("Project3TGen", "Connection Closed\n");
			}
			break;

		case FIN:
			dbg("Project3TGen", "Received FIN from node %d at port %d\n", package->src, recTCP->dest_port);
			
			if (sockSt.state == SOCK_ESTABLISHED)
			{
				sendTCP->flag = FIN;
				sockSt.state = SOCK_LAST_ACK;
	
				sendSignal(sock);
				sockSt.packet = sendPackage;
				
				// Turn on HS Timer
				sockSt.inHSTimeOut = TRUE;
				sockSt.HStimeOut = 9000;
				
				dbg("Project3TGen", "Sent FIN\n");
				sockSt.seq++;
				
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);
			}
			else if (sockSt.state == SOCK_FIN_WAIT)
			{	
				sendTCP->flag = ACK;
				sockSt.state = SOCK_TIME_WAIT;
	
				sendSignal(sock);
				sockSt.packet = sendPackage;
				
				// Turn on HS Timer
				sockSt.inHSTimeOut = TRUE;
				sockSt.HStimeOut = 9000;
				
				// Turn on Ack HS Timer
				sockSt.inAckTimeOut = TRUE;
				sockSt.acktimeOut = 18000;
				
				dbg("Project3TGen", "Sent ACK\n");
				sockSt.seq++;
				
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);
			}
			else if (sockSt.state == SOCK_TIME_WAIT)
			{						
				// Turn on Ack HS Timer				
				sockSt.inAckTimeOut = TRUE;
				sockSt.acktimeOut = 18707;
				
				call Sockets.remove(sock);
				call Sockets.insert(sock, sockSt);
			}
			break;
			
		case DATA:
			//dbg("Project3TGen", "Received DATA\n");
			
			if (sockSt.state == SOCK_ESTABLISHED)
			{
				call Transport.incoming(*recTCP);
			}
			break;
			
		case DATA_ACK:
			//dbg("Project3TGen", "Received DATA_ACK\n");
			
			if (sockSt.state == SOCK_ESTABLISHED)
			{
				call Transport.send(*recTCP);
			}
			break;
		
		default:
			dbg("Project3TGen", "Received Other: %c from node %d at port %d\n", recTCP->flag, package->src, recTCP->dest_port);
			break;
		}
		
		if (call Sockets.contains(sock))
		{
			call Sockets.remove(sock);
			call Sockets.insert(sock, sockSt);
		}
	
		return SUCCESS;
	}
	
	command uint16_t Transport.read(socket_t fd, uint8_t *buff, uint16_t bufflen)
	{
		uint16_t j, readStart;
		j = 0;
		
		sockSt = call Sockets.get(fd);
		
		// Find where to start reading
		readStart = sockSt.lastByteRead + 1;
		for (i = readStart; i < sockSt.nextByteExpected; i++)
		{
			if (j >= bufflen)
			{
				break;
			}
			
			buff[j] = sockSt.recBuff[i%128];
			sockSt.lastByteRead++;
			j++;
		}
		
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
	
		return j;
	}
	
	command error_t Transport.connect(socket_t fd, socket_addr_t* addr)
	{
		TCP* sendTCP;
		sendTCP = (TCP*)payday;
	
		sockSt = call Sockets.get(fd);
		
		sendTCP->src_port = addr->srcPort;
		sendTCP->dest_port = addr->destPort;
		sendTCP->seq = sockSt.seq;
		sendTCP->ack = 0;
		sendTCP->flag = SYN;

		sockSt.state = SOCK_SYN_SENT;
		sendSignal(fd);
		sockSt.packet = sendPackage;
		dbg("Project3TGen", "Sent SYN\n");
		
		sockSt.inHSTimeOut = TRUE;
		sockSt.HStimeOut = 9000;
		
		sockSt.seq++;
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
	
		return SUCCESS;
	}
	
	command error_t Transport.close(socket_t fd)
	{
		TCP* sendTCP;
		sendTCP = (TCP*)payday;
	
		sockSt = call Sockets.get(fd);
		
		if (sockSt.state != SOCK_ESTABLISHED)
		{
			dbg("Project3TGen", "Nothing to close\n");
			return FAIL;
		}
	
		sendTCP->src_port = sockSt.sockAddr.srcPort;
		sendTCP->dest_port = sockSt.sockAddr.destPort;
		sendTCP->seq = sockSt.seq;
		sendTCP->ack = 0;
		sendTCP->flag = FIN;

		sockSt.state = SOCK_FIN_WAIT;
		sendSignal(fd);
		sockSt.packet = sendPackage;
		dbg("Project3TGen", "Sent FIN\n");
		
		sockSt.inHSTimeOut = TRUE;
		sockSt.HStimeOut = 9000;
		
		sockSt.seq++;
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);
	
		return SUCCESS;
	}
	
	command error_t Transport.release(socket_t fd)
	{
		return SUCCESS;
	}
	
	command error_t Transport.listen(socket_t fd)
	{
		if (!call Sockets.contains(fd))
		{
			return FAIL;
		}

		sockSt = call Sockets.get(fd);
		sockSt.state = SOCK_LISTEN;
	
		call Sockets.remove(fd);
		call Sockets.insert(fd, sockSt);

		return SUCCESS;
	}
	
	command error_t Transport.setNodeSocket(socket_t fd)
	{
		nodeFD = fd;
		nodeSocket = call Sockets.get(fd);
		nodeAddr = nodeSocket.sockAddr;
	
		return SUCCESS;
	}
	
	command socket_t Transport.getNodeSocket()
	{		
		return nodeFD;
	}
	
	command error_t Transport.incoming(TCP data_TCP)
	{
		uint16_t window_size, send_size, LBRc_RBRe, tmp;
		TCP* sendTCP;
		uint16_t j;
		sendTCP = (TCP*)payday;
		j = 0;
		
		sock = call FDs.get(data_TCP.src_port);
		sockSt = call Sockets.get(sock);
		
		if (sockSt.nextExpectedSeq < data_TCP.seq)
		{
			//dbg("Project3TGen", "Received OUT OF ORDER packet\n");
			return FAIL;
		}
		
		tmp = sockSt.nextByteExpected - (sockSt.nextExpectedSeq - data_TCP.seq);
		if (tmp < sockSt.nextByteExpected)
		{
			sendTCP->adv_win = (uint8_t)(SOCKET_RECEIVE_BUFFER_SIZE - sockSt.recBuffSize);
			sendTCP->dest_port = sockSt.sockAddr.destPort;
			sendTCP->src_port = sockSt.sockAddr.srcPort;
			sendTCP->seq = sockSt.seq - data_TCP.seq;
			sendTCP->flag = DATA_ACK;
			sendTCP->ack = data_TCP.seq + data_TCP.dataSize;
			
			sendSignal(sock);
			return SUCCESS;
		}
		
		sendTCP->ack = data_TCP.seq;
			
		// Find how big the window of bytes that can be acked is
		if ((SOCKET_RECEIVE_BUFFER_SIZE - (sockSt.lastByteRec - sockSt.lastByteRead)) < data_TCP.dataSize)
		{
			window_size = (SOCKET_RECEIVE_BUFFER_SIZE - (sockSt.lastByteRec - sockSt.lastByteRead));
		}
		else
		{
			window_size = data_TCP.dataSize;
		}
		
		// Ack all received bytes up to the limit
		for (i = sockSt.nextByteExpected; i < sockSt.nextByteExpected + window_size; i++)
		{			
			// If counter is passed the number of received bytes
			if (j >= data_TCP.dataSize)
			{
				break;
			}

			sockSt.recBuff[i%128] = data_TCP.data[j];
			sockSt.lastByteRec++;
			j++;
		}
		
		sockSt.nextByteExpected = sockSt.lastByteRec + 1;
		sockSt.recBuffSize = sockSt.lastByteRec - sockSt.lastByteRead;

		// Ack last byte in packet + 1
		sendTCP->ack = data_TCP.seq + j;
		sockSt.nextExpectedSeq = sendTCP->ack;

		sendTCP->adv_win = (uint8_t)(SOCKET_RECEIVE_BUFFER_SIZE - sockSt.recBuffSize);
		sendTCP->dest_port = sockSt.sockAddr.destPort;
		sendTCP->src_port = sockSt.sockAddr.srcPort;
		sendTCP->seq = sockSt.seq - send_size;
		sendTCP->flag = DATA_ACK;
		
		//tmp = sockSt.lastByteRec-j+1;
		//dbg("Project3TGen", "Ack'ed bytes: %d-%d\n", tmp, sockSt.lastByteRec);
		sendSignal(sock);

		call Sockets.remove(sock);
		call Sockets.insert(sock, sockSt);
	
		return SUCCESS;
	}
	
	command error_t Transport.send(TCP ack_TCP)
	{
		uint16_t window_size, send_size, send_size2, LBW_LBA, LBW_LBS;
		TCP* sendTCP;
		uint16_t j, tmp;
		sendTCP = (TCP*)payday;
		
		sock = call FDs.get(ack_TCP.src_port);
		sockSt = call Sockets.get(sock);
		
		if (sockSt.neverSent == TRUE)
		{
			sockSt.lastByteSent = 65535;
			sockSt.lastByteAck = 65535;
		}
		else
		{
			sockSt.lastByteAck = sockSt.lastByteSent - (sockSt.seq - ack_TCP.ack);
		}
		sockSt.advWin = ack_TCP.adv_win;

		// If ack received is not lastByteSent, wait
		if ((sockSt.lastByteSent != sockSt.lastByteAck) && sockSt.inTimeOut == TRUE)
		{
			//dbg("Pro;ject3TGen", "Waiting for rest of ACKs\n");
			return FAIL;
		}
		
		// Turn off timeout
		sockSt.seq = ack_TCP.ack;
		sockSt.neverSent = FALSE;
		sockSt.inTimeOut = FALSE;
		call Sockets.remove(sock);
		call Sockets.insert(sock, sockSt);
		
		// Find max number of bytes to send
		LBW_LBA = sockSt.lastByteWritten - sockSt.lastByteAck;
		if (ack_TCP.adv_win < LBW_LBA)
		{
			window_size = ack_TCP.adv_win;
		}
		else
		{
			window_size = LBW_LBA;
		}

		if (LBW_LBA == 0)
		{
			if (sockSt.dataToSendSize > 0)
			{
				//dbg("Project3TGen", "Emptied current SendBuffer!\n");
			}
			else
			{
				//dbg("Project3TGen", "Finished sending!\n");
			}

			call Sockets.remove(sock);
			call Sockets.insert(sock, sockSt);
			return SUCCESS;
		}
		
		if (ack_TCP.adv_win == 0)
		{
			//dbg("Project3TGen", "Advertised Window = 0\n");
			return FAIL;
		}
		
		// Send packets containing at most 10 bytes until reached end of window
		sockSt.lastByteSent = sockSt.lastByteAck;
		tmp = sockSt.lastByteAck + 1;
		for (i = tmp; i < tmp + window_size; i++)
		{		
			// Find max number of bytes to send
			if (ack_TCP.adv_win < MAX_TRANSPORT_SIZE)
			{
				send_size2 = ack_TCP.adv_win;
			}
			else
			{
				send_size2 = MAX_TRANSPORT_SIZE;
			}
		
			LBW_LBA = sockSt.lastByteWritten - sockSt.lastByteAck;
			if (send_size2 < LBW_LBA)
			{
				send_size = send_size2;
			}
			else
			{
				send_size = LBW_LBA;
			}
	
			// Place 10 or less bytes into packet array
			for (j = 0; j < send_size; j++)
			{
				if (i >= tmp + window_size)
				{
					break;
				}
				sendTCP->data[j] = sockSt.sendBuff[i%128];
				
				sockSt.lastByteSent++;
				sockSt.seq++;
				i++;
			}
			i--;
			
			sendTCP->dataSize = (uint8_t)j;
			sendTCP->ack = 0;
			sendTCP->dest_port = sockSt.sockAddr.destPort;
			sendTCP->src_port = sockSt.sockAddr.srcPort;
			sendTCP->seq = sockSt.seq - j;
			sendTCP->flag = DATA;
			
			//dbg("Project3TGen", "BYTES SENT: %d\n", sendTCP->dataSize);
			
			sendSignal(sock);
		}		
				
		// Start timeout for window sent
		sockSt.inTimeOut = TRUE;
		sockSt.timeOut = 18000;	
		
		call Sockets.remove(sock);
		call Sockets.insert(sock, sockSt);
		
		return SUCCESS;
	}
	
	event void TimeoutTimer.fired()
	{
		TCP tmpTCP;
		uint32_t key;
		uint32_t* keys;
		keys = call Sockets.getKeys();
		
		// Go through all connection sockets
		for (i = 0; i < call Sockets.size(); i++)
		{
			key = keys[i];
			sockSt = call Sockets.get(key);
			
			if (sockSt.inTimeOut == TRUE)
			{
				// Decrement the timeout
				sockSt.timeOut -= 4500;
				
				if (sockSt.timeOut == 0 || sockSt.timeOut > 60000)
				{
					// Retransmit by passing dummy ack in Send
					sockSt.inTimeOut = FALSE;
					tmpTCP.ack = sockSt.seq - (sockSt.lastByteSent - sockSt.lastByteAck);
					tmpTCP.adv_win = sockSt.advWin;
					tmpTCP.src_port = sockSt.sockAddr.destPort;
					
					call Sockets.remove(key);
					call Sockets.insert(key, sockSt);
					call Transport.send(tmpTCP);
				}

				call Sockets.remove(key);
				call Sockets.insert(key, sockSt);
			}
		}	
	}
	
	event void HandShakeTimer.fired()
	{
		uint32_t key;
		uint32_t* keys;
		TCP* tmpTCP;
		keys = call Sockets.getKeys();
		
		for (i = 0; i < call Sockets.size(); i++)
		{
			key = keys[i];
			sockSt = call Sockets.get(key);
			
			if (sockSt.inHSTimeOut == TRUE)
			{
				sockSt.HStimeOut -= 4500;

				if (sockSt.HStimeOut == 0 || sockSt.HStimeOut > 60000)
				{
					tmpTCP = (TCP*)sockSt.packet.payload;
					call ShortestPath.SendPack(&sockSt.packet);
					sockSt.HStimeOut = 9000;
				}
				
				call Sockets.remove(key);
				call Sockets.insert(key, sockSt);
			}
		}
		
		call HandShakeTimer.startOneShot(4500);
	}
	
	event void AckTimer.fired()
	{
		uint32_t key;
		uint32_t* keys;
		keys = call Sockets.getKeys();
		
		for (i = 0; i < call Sockets.size(); i++)
		{
			key = keys[i];
			sockSt = call Sockets.get(key);
			
			// Wait to make sure the server as closed the connection
			if ((sockSt.state == SOCK_TIME_WAIT)&& (sockSt.inAckTimeOut == TRUE))
			{
				sockSt.acktimeOut -= 4500;
	
				if (sockSt.state == SOCK_TIME_WAIT && (sockSt.acktimeOut == 0 || sockSt.acktimeOut > 60000))
				{
					dbg("Project3TGen", "Connection Closed\n");
					sockSt.acktimeOut = 0;
					sockSt.inAckTimeOut = FALSE;
					sockSt.HStimeOut = 0;
					sockSt.inHSTimeOut = FALSE;
	
					sockSt.state = SOCK_CLOSED;
					call FDs.remove(sockSt.sockAddr.destPort);
				}
				
				call Sockets.remove(key);
				if (sockSt.state != SOCK_CLOSED)
				{
					call Sockets.insert(key, sockSt);
				}
			}
		}
		
		call AckTimer.startOneShot(4500);
	}
	
	void sendSignal(socket_t fd)
	{
		socket_storage_t sendSockSt;
		sendSockSt = call Sockets.get(fd);
		
		Seq = call PacketInfo.getSeq();
		makePack(&sendPackage, TOS_NODE_ID, sendSockSt.sockAddr.destAddr, 15, PROTOCOL_TCP, Seq, payday, PACKET_MAX_PAYLOAD_SIZE);
		call PacketInfo.incSeq();
		
		call ShortestPath.SendPack(&sendPackage);
	}
		
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length)
	{
		Package->src = src;
		Package->dest = dest;
		Package->TTL = TTL;
		Package->seq = seq;
		Package->protocol = protocol;
		memcpy(Package->payload, payload, length);
	}

	
}