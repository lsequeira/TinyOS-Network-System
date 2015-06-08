#include <Timer.h>
#include <stdlib.h>
#include "../../packet.h"
#include "../../sendInfo.h"
#include "../../neighbortuple.h"
#include "../../linkstate.h"

module NeighborC
{
	provides interface Neighbor;
	
	uses
	{
		interface SimpleSend as Sender;
		interface PacketInfo;
		interface List<NeighborTuple> as Neighbors;
		interface List<LinkState> as NeighborLS;
		interface Flooding;
	}
}

implementation
{
	uint8_t payday[PACKET_MAX_PAYLOAD_SIZE];
	
	pack sendPackage;
	NeighborTuple newtuple;
	LinkState* newls;
	LinkState newls2;
	static uint16_t Seq = 0;
	int i, j, updated;
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t* payload, uint8_t length);

	command error_t Neighbor.receive(pack *myMsg)
	{
		Seq = call PacketInfo.getSeq();

		makePack(&sendPackage, TOS_NODE_ID, myMsg->src, 1, PROTOCOL_PINGREPLY, Seq++, "NEIGHBOR_REPLY", PACKET_MAX_PAYLOAD_SIZE);
		call PacketInfo.incSeq();

        call Sender.send(sendPackage, myMsg->src);
        
        return SUCCESS;
	}
	
	command uint16_t Neighbor.reply(pack *myMsg)
	{				
		for (i = 0; i < call Neighbors.size(); i++)
        {	
        	newtuple = call Neighbors.get(i);
        
       		if (newtuple.mote == myMsg->src)
       		{
       			newtuple.age = 0;
       			call Neighbors.set(i, newtuple);
       			return FALSE;
   			}
       	}

		newtuple.mote = myMsg->src;
		newtuple.age = 0;
        call Neighbors.pushback(newtuple);

		return TRUE;
	}
	
	command error_t Neighbor.startDisc(pack* msg)
	{		
		updated = FALSE;

		for (i = 0; i < call Neighbors.size(); i++)
		{
			newtuple = call Neighbors.get(i);
			newtuple.age = newtuple.age + 1;
			call Neighbors.set(i, newtuple);
		}
		
		for (i = 0; i < call Neighbors.size(); i++)
        {	
        	newtuple = call Neighbors.get(i);
        
       		if (newtuple.age >= 5)
       		{
       			call Neighbors.delete(i);
       			updated = TRUE;
       			i--;
   			}
       	}
       	
       	if (updated == TRUE)
		{
        	call Neighbor.sendNeighbors();
        }
		
   		call Sender.send(*msg, AM_BROADCAST_ADDR);
   		
   		return SUCCESS;
	}
	

	command error_t Neighbor.print()
	{
		dbg("Project1N", "Neighbors:\n");
   		for (i = 0; i < call Neighbors.size(); i++)
   		{
   			newtuple = call Neighbors.get(i);
   			dbg("Project1N", "Node %d\n", (uint16_t)newtuple.mote);
  		}

		return SUCCESS;
	}
	
	command error_t Neighbor.sendNeighbors()
	{
		Seq = call PacketInfo.getSeq();
		
		newls = (LinkState*)payday;
		newls->size = (uint8_t)call Neighbors.size();
		newls->node = (uint8_t)TOS_NODE_ID;
		newls->seq = (uint8_t)(Seq);
		
		for (i = 0; i < call Neighbors.size(); i++)
		{
			newtuple = call Neighbors.get(i);
			newls->neighbors[i] = (uint8_t)newtuple.mote;
			newls->cost[i] = 1;
		}
		
		if (call NeighborLS.isEmpty() == TRUE)
		{
			call NeighborLS.pushback(*newls);
		}
		else
		{
			for (i = 0; i < call NeighborLS.size(); i++)
			{	
				newls2 = call NeighborLS.get(i);
 
				if (newls->node == newls2.node)
				{
					call NeighborLS.set(i, *newls);
					break;
				}
			}
		}
	
		makePack(&sendPackage, TOS_NODE_ID, 99, 15, PROTOCOL_LINKSTATE, Seq, payday, PACKET_MAX_PAYLOAD_SIZE);
		call PacketInfo.incSeq();
		
		call Flooding.start(&sendPackage);

		return SUCCESS;
	}
	
	command error_t Neighbor.addLS(pack* msg)
	{
		newls = (LinkState*)msg->payload;
		
		if (call NeighborLS.isEmpty() == TRUE)
		{
			call NeighborLS.pushback(*newls);
			return SUCCESS;
		}

		for (i = 0; i < call NeighborLS.size(); i++)
		{	
			newls2 = call NeighborLS.get(i);
 
			if (newls->node == newls2.node)
			{
				call NeighborLS.set(i, *newls);
					
				return SUCCESS;
			}
		}
	
		call NeighborLS.pushback(*newls);

		return SUCCESS;
	}
	
	command error_t Neighbor.printLS()
	{
		dbg("Project2", "------ LinkStates------\n");
  		for (i = 0; i < call NeighborLS.size(); i++)
  		{
  			newls2 = call NeighborLS.get(i);

  			dbg("Project2", "%d's Neighbors:\n", (uint8_t)newls2.node, (uint8_t)newls2.size);
  			for (j = 0; j < newls2.size; j++)
			{
				dbg("Project2", "Node: %d\n", (uint8_t)newls2.neighbors[j]);
			}
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