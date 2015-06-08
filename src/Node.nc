/*
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 * 
 */ 
#include <Timer.h>
#include <stdlib.h>
#include "command.h"
#include "packet.h"
#include "sendInfo.h"
#include "socket.h"
#include "TCP.h"

module Node
{	
	// General
	uses
	{
		interface Boot;
		interface Timer<TMilli> as CheckNeighborTimer;
		interface Timer<TMilli> as SendNeighborsTimer;
		interface Timer<TMilli> as BuildRoutingTableTimer;
		interface Timer<TMilli> as AttemptConnectionTimer;
		interface Timer<TMilli> as ClientWriteTimer;
		interface Hashmap<socket_storage_t> as Sockets;
		interface Hashmap<socket_t> as FDs;
	}
	
	// Messenger
	uses
	{
		interface SplitControl as AMControl;
		interface SimpleSend as Sender;
		interface Receive;
		interface CommandHandler;
		interface PacketInfo;
	}
	
	uses interface Flooding;
	uses interface Neighbor;
	uses interface ShortestPath;
	uses interface Transport;
	uses interface Application;
}

implementation
{
	uint8_t payday[PACKET_MAX_PAYLOAD_SIZE];
	pack sendPackage;
	int checkedNeighbors;
	static uint16_t Seq = 0;
	socket_t fd;
	socket_addr_t addr;
	socket_storage_t sockSt;
	static socketState state = SOCK_ESTABLISHED;
	TCP* tcp;
	int i;

	// Prototypes
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);
	
	
	
	event void Boot.booted()
	{
		call AMControl.start();

		dbg("genDebug", "Booted\n");
	
		call CheckNeighborTimer.startPeriodic(55777);	
		call SendNeighborsTimer.startOneShot(75777);
		call Transport.startTimer();
	}

	event void AMControl.startDone(error_t err)
	{
		if (err == SUCCESS)
		{
			dbg("genDebug", "Radio On\n");
		}
		else
		{
			//Retry until successful
			call AMControl.start();
		}
	}

	event void AMControl.stopDone(error_t err){}

	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
	{
		if (len == sizeof(pack))
		{
			pack* myMsg = (pack*) payload;
 
			if (myMsg->TTL <= 0)
			{
				dbg("genDebug", "Packet Dropped! (TTL)\n");
				return msg;
			}
	
			myMsg->TTL = myMsg->TTL - 1;
 
			if (myMsg->protocol == PROTOCOL_CMD)
			{
				call CommandHandler.receive(myMsg);
			}
			else if (myMsg->protocol == PROTOCOL_PING)
			{      
				// Neighbor Discovery
				if (!strcmp((char*)myMsg->payload, "NEIGHBOR_DISCOVERY"))
				{
					call Neighbor.receive(myMsg);
					return msg;
				}
	
				// Flooding
				//call Flooding.receive(myMsg);
	
				// Routing
				call ShortestPath.RoutePack(myMsg);
			}
			else if (myMsg->protocol == PROTOCOL_PINGREPLY)
			{
				// Neighbor Discovery
				if (!strcmp((char*)myMsg->payload, "NEIGHBOR_REPLY"))
				{
					if (call Neighbor.reply(myMsg) == TRUE)
					{	
						if (call SendNeighborsTimer.isRunning() == FALSE)
						{
							call SendNeighborsTimer.startOneShot(76777);
						}
					}
	
					return msg;
				}
			}
			else if (myMsg->protocol == PROTOCOL_LINKSTATE)
			{
				if (myMsg->dest == TOS_NODE_ID)
				{
					dbg("genDebug", "Packet Payload: %s\n", myMsg->payload);
				}
	
				if (call BuildRoutingTableTimer.isRunning() == FALSE)
				{
					call BuildRoutingTableTimer.startOneShot(34070);
				}
	
				call Neighbor.addLS(myMsg);
				call Flooding.receive(myMsg);       		
			}
			else if (myMsg->protocol == PROTOCOL_TCP)
			{    	
				if (myMsg->dest == TOS_NODE_ID)
				{
					call Transport.receive(myMsg);
				}    		
				
				call ShortestPath.RoutePack(myMsg);
			}
			else
			{
				dbg("genDebug", "else...\n");
			}
	
			return msg;
		}
	
		dbg("genDebug", "Unknown Packet Type %d\n", len);
	
		return msg;
	}

	event void CommandHandler.ping(uint8_t destination, uint8_t *payload)
	{	
		Seq = call PacketInfo.getSeq();
		// pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length
		makePack(&sendPackage, TOS_NODE_ID, destination, 15, PROTOCOL_PING, Seq, payload, PACKET_MAX_PAYLOAD_SIZE);
		call PacketInfo.incSeq();
	
		// Flooding
		//call Flooding.start(&sendPackage);
	
		// Routing
		call ShortestPath.SendPack(&sendPackage);
	}

	event void CommandHandler.printNeighbors()
	{
		call Neighbor.print();
	}

	event void CommandHandler.printRouteTable()
	{
		call ShortestPath.PrintRoutingTable();
	}

	event void CommandHandler.printLinkState()
	{
		call Neighbor.printLS();
	}

	event void CommandHandler.printDistanceVector(){}

	event void CommandHandler.setTestServer(uint8_t server_port)
	{
		call Application.initializeServer(server_port);
	}

	event void CommandHandler.setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer)
	{
		call Application.initializeClient(client_port, dest_addr, dest_port, transfer);	
	}
	
	event void CommandHandler.setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t *message)
	{
		call Application.messageClient(client_port, dest_addr, dest_port, size, message);
	}

	event void CommandHandler.closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port)
	{
		//fd = call Transport.getNodeSocket();
		fd = call FDs.get(dest_port);
		call Transport.close(fd);
	}

	event void CommandHandler.setAppServer(){}

	event void CommandHandler.setAppClient(){}
	
	event void AttemptConnectionTimer.fired()
	{
		//socket_t newfd = call Transport.accept(fd);
	}
	
	event void ClientWriteTimer.fired()
	{
		
	}
	
	event void CheckNeighborTimer.fired()
	{
		Seq = call PacketInfo.getSeq();
		makePack(&sendPackage, TOS_NODE_ID, TOS_NODE_ID, 1, PROTOCOL_PING, Seq, "NEIGHBOR_DISCOVERY", PACKET_MAX_PAYLOAD_SIZE);
		call PacketInfo.incSeq();
	
		call Neighbor.startDisc(&sendPackage);
	}
	
	event void SendNeighborsTimer.fired()
	{
		call Neighbor.sendNeighbors();
	
		call SendNeighborsTimer.startOneShot(75777);
	}
	
	event void BuildRoutingTableTimer.fired()
	{
		call ShortestPath.Dijkstra();
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