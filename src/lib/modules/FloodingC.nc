#include <Timer.h>
#include <stdlib.h>
#include "../../packet.h"
#include "../../sendInfo.h"
#include "../../packetid.h"
#include "../../neighbortuple.h"
#include "../../senttuple.h"

module FloodingC
{
	provides interface Flooding;
	
	uses
	{
		interface SimpleSend as Sender;
		interface PacketInfo;
		interface List<PacketID> as recPackets;
		interface List<SentTuple> as sentPackets;
		interface List<NeighborTuple> as Neighbors;	
	}
}

implementation
{
	pack sendPackage;
	PacketID newpackid;
	SentTuple newsent;
	NeighborTuple newneigh;
	//static uint16_t Seq = 0;
	int i;
	
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t* payload, uint8_t length);
		
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
		dbg("Project1F", "Delivered from node: %d\n", (uint16_t)msg->src);
        dbg("genDebug", "Packet Payload: %s\n", msg->payload);
	}
	
	void broadcastMsg(pack *msg)
	{
		dbg("Project1F", "Broadcasting...\n");

       	call Sender.send(*msg, AM_BROADCAST_ADDR);

	}

	command error_t Flooding.start(pack *myMsg)
	{
		// Make a tuple and push it to the list
		newpackid.sequence = myMsg->seq;
		newpackid.moteID = myMsg->src;
		
        call recPackets.pushback(newpackid);
        
        /*
        for (i = 0; i < call Neighbors.size(); i++)
        {
	        newneigh = call Neighbors.get(i);
		
	        newsent.packet = *myMsg;
	        newsent.age = (uint16_t)0;

	        call sentPackets.pushback(newsent);
        }*/
        
        // Broadcast to all neighbors
      	broadcastMsg(myMsg);
	
		return SUCCESS;
	}

	command uint16_t Flooding.receive(pack *myMsg)
	{	        
		dbg("Project1F", "Packet Received\n");
	
		// Check if it's already in the list
        if (checkSequences(myMsg->seq, myMsg->src) == TRUE)
        {
        	return FALSE;
        }
        
        // Make a tuple and push it to the list
        newpackid.sequence = myMsg->seq;
		newpackid.moteID = myMsg->src;
		
		// If the list is near full, delete the first 70 and leave the 20 newest ones
		if (call recPackets.size() >= 90)
		{
			for (i = 0; i < 70; i++)
			{
				call recPackets.popfront();
			}
		}
		
        call recPackets.pushback(newpackid);
        	
        // If this is the destination, print the payload
        if (myMsg->dest == TOS_NODE_ID)
       	{
       		printMsg(myMsg);
       	}
        else // Otherwise, rebroadcast it
     	{
      	 	broadcastMsg(myMsg);
       	}
	
		return TRUE;
	}
	
	command error_t Flooding.CheckSent()
	{
		for (i = 0; i < call sentPackets.size(); i++)
		{
			newsent = call sentPackets.get(i);
			
			if (newsent.age >= 5)
			{
				broadcastMsg(&newsent.packet);
				newsent.age = 0;
			}
			
			newsent.age = newsent.age + 1;
			call sentPackets.set(i, newsent);
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