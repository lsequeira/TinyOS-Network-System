#include <Timer.h>
#include <stdlib.h>
#include "../../packet.h"
#include "../../sendInfo.h"
#include "../../packetid.h"
#include "../../senttuple.h"
#include "../../neighbortuple.h"
#include "../../linkstate.h"
#include "../../route.h"

module ShortestPathC
{
	provides interface ShortestPath;
	
	uses
	{
		interface SimpleSend as Sender;
		interface PacketInfo;
		interface List<PacketID> as recPackets;
		interface Hashmap<Route> as Tentative;
		interface Hashmap<Route> as ConfirmedNodes;
		interface List<LinkState> as NeighborLS;
	}
}

implementation
{
	uint16_t i;
	LinkState newls;
	Route next;
	Route route;
	Route route2;
	uint8_t neighbor;
	uint32_t* keys;
	uint32_t key;
	uint16_t cost;
	PacketID newpackid;
	SentTuple newsent;
	
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);
	
	int checkSequences(uint16_t seq, uint16_t src)
	{	
		for (i = 0; i < call recPackets.size(); i++)
        {
        	newpackid = call recPackets.get(i);
        	
       		if (seq == newpackid.sequence && src == newpackid.moteID)
       		{
       			dbg("Project1F", "Already received packet!\n");
       			return TRUE;
   			}
       	}

       	return FALSE;
	}
	
	void printMsg(pack *msg)
	{
		dbg("Project2", "Delivered from node: %d\n", (uint16_t)msg->src);
        dbg("Project2", "Packet Payload: %s\n", msg->payload);
	}
	
	command error_t ShortestPath.Dijkstra()
	{				
		call ConfirmedNodes.clear();
				
		route.node = TOS_NODE_ID;
		route.cost = 0;
		route.nextHop = TOS_NODE_ID;

		call ConfirmedNodes.insert(TOS_NODE_ID, route);
		
		next = route;
		
		for (i = 0; i < call NeighborLS.size(); i++)
		{
			newls = call NeighborLS.get(i);
			
			if (newls.node == TOS_NODE_ID)
			{
				break;
			}
		}

		while(1)
		{
			route = call ConfirmedNodes.get(next.node);
			
			for (i = 0; i < newls.size; i++)
			{
				neighbor = newls.neighbors[i];
				
				cost = route.cost + newls.cost[i];
				
				if (!call ConfirmedNodes.contains(neighbor) && !call Tentative.contains(neighbor))
				{
					route2.node = neighbor;
					route2.cost = cost;
					if (route.node == TOS_NODE_ID)
					{
						route2.nextHop = route2.node;
					}
					else
					{
						route2.nextHop = route.nextHop;
					}
					
					call Tentative.insert(neighbor, route2);
				}
				else if (call Tentative.contains(neighbor))
				{
					route2 = call Tentative.get(neighbor);
					
					if (cost < route2.cost)
					{
						call Tentative.remove(neighbor);
						
						route2.node = neighbor;
						route2.cost = cost;
						route2.nextHop = route.nextHop;
	
						call Tentative.insert(neighbor, route2);
					}
				}
			}
			
			if (call Tentative.isEmpty())
			{
				return SUCCESS;
			}
			
			keys = call Tentative.getKeys();
			route = call Tentative.get(keys[0]);
			cost = route.cost;
			
			for (i = 1; i < call Tentative.size(); i++)
			{
				route2 = call Tentative.get(keys[i]);
				
				if (route2.cost < cost)
				{
					route = route2;
					cost = route.cost;
				}
			}
			
			call Tentative.remove(route.node);
			call ConfirmedNodes.insert(route.node, route);
			
			route2 = call ConfirmedNodes.get(route.node);
			
			next = route;
			
			for (i = 0; i < call NeighborLS.size(); i++)
			{
				newls = call NeighborLS.get(i);
	
				if (newls.node == next.node)
				{
					break;
				}
			}
		}
				
		return SUCCESS;
	}
	
	command error_t ShortestPath.PrintRoutingTable()
	{
		keys = call ConfirmedNodes.getKeys();
		
		dbg("Project2", "---- %d's Routing Table ----\n", (uint16_t)TOS_NODE_ID);
		dbg("Project2", "(node, cost, next-hop)\n");
		for (i = 0; i < call ConfirmedNodes.size(); i++)
		{
			key = keys[i];
			route = call ConfirmedNodes.get(key);

			dbg("Project2", "(%d,%d,%d)\n", route.node, route.cost, route.nextHop);
		}
		dbg("Project2", "----------- End -----------\n");
		
		return SUCCESS;
	}	

	command error_t ShortestPath.RoutePack(pack *myMsg)
	{
		if (myMsg->dest == TOS_NODE_ID)
       	{
       		if (checkSequences(myMsg->seq, myMsg->src) == FALSE)
       		{
       			pack rep = *myMsg;
       			
       			newpackid.sequence = myMsg->seq;
				newpackid.moteID = myMsg->src;
				
				if (call recPackets.size() >= 90)
				{
					for (i = 0; i < 70; i++)
					{
						call recPackets.popfront();
					}
				}
       			
       			call recPackets.pushback(newpackid);
       			
			    printMsg(myMsg);
			    
			    // Send ACK
				//route = call ConfirmedNodes.get(myMsg->src);
			    //makePack(&rep, myMsg->src, myMsg->src, 15, PROTOCOL_PING, myMsg->seq, "ACKNOWLEDGEMENT", PACKET_MAX_PAYLOAD_SIZE);
			    
			    //dbg("Project2", "Sending ACK to: %d, Next Hop: %d\n", myMsg->src, route.nextHop);
				//call Sender.send(rep, route.nextHop);
			    
			    return SUCCESS;
       		}
       		else if (checkSequences(myMsg->seq, myMsg->src) == TRUE)
       		{
       			if (!strcmp((char*)myMsg->payload, "ACKNOWLEDGEMENT"))
       			{
       				dbg("Project2", "Received ACK\n");
       				return SUCCESS;
       			}
       			
       			printMsg(myMsg);
       			return SUCCESS;
       		}
       	}

		key = myMsg->dest;
		route = call ConfirmedNodes.get(key);
		
		dbg("Project2", "Sending to: %d, Next Hop: %d\n", myMsg->dest, route.nextHop);
		call Sender.send(*myMsg, route.nextHop);
		
		return SUCCESS;
	}

	command error_t ShortestPath.SendPack(pack *myMsg)
	{
		key = myMsg->dest;
		route = call ConfirmedNodes.get(key);
	
		if (key == TOS_NODE_ID)
		{
			call ShortestPath.RoutePack(myMsg);
		}
		else
		{
			newpackid.sequence = myMsg->seq;
			newpackid.moteID = myMsg->src;
	
			if (call recPackets.size() >= 90)
			{
				for (i = 0; i < 70; i++)
				{
					call recPackets.popfront();
				}
			}
	
			call recPackets.pushback(newpackid);
			
			dbg("Project2", "Sending to: %d, Next Hop: %d\n", myMsg->dest, route.nextHop);
			call Sender.send(*myMsg, route.nextHop);
		}
		
		return SUCCESS;
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