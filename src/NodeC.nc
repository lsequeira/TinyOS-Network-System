/**
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 * 
 */ 

#include <Timer.h>
#include "packetid.h"
#include "neighbortuple.h"
#include "senttuple.h"
#include "route.h"
#include "socket.h"
#include "users.h"

configuration NodeC
{
}

implementation
{
	// General
	components MainC;
	components Node;
	components new TimerMilliC() as CheckNeighborTimer;
	components new TimerMilliC() as SendNeighborsTimer;
	components new TimerMilliC() as BuildRoutingTableTimer;
	components new TimerMilliC() as AttemptConnectionTimer;
	components new TimerMilliC() as ClientWriteTimer;
	
	Node.Boot -> MainC;
	Node.CheckNeighborTimer -> CheckNeighborTimer;
	Node.SendNeighborsTimer -> SendNeighborsTimer;
	Node.BuildRoutingTableTimer -> BuildRoutingTableTimer;
	Node.AttemptConnectionTimer -> AttemptConnectionTimer;
	Node.ClientWriteTimer -> ClientWriteTimer;

	// Messenger
	components ActiveMessageC;
	components SimpleSendC;
	components new AMReceiverC(6);
	components CommandHandlerC;
	components PacketInfoC;
	
	Node.AMControl -> ActiveMessageC;
	Node.Sender -> SimpleSendC;
	Node.Receive -> AMReceiverC;
	Node.CommandHandler -> CommandHandlerC;
	Node.PacketInfo -> PacketInfoC;

	// Neighbors
	components NeighborC;
	components new ListC(NeighborTuple, 16) as Neighbors;
	components new ListC(LinkState, 16) as NeighborLS;
	components new TimerMilliC() as UpdateNeighborsTimer;
	components new TimerMilliC() as NoUpdatesTimer;
	Node.Neighbor -> NeighborC;
	NeighborC.Sender -> SimpleSendC;
	NeighborC.Neighbors -> Neighbors;
	NeighborC.NeighborLS -> NeighborLS;
	NeighborC.Flooding -> FloodingC;
	NeighborC.PacketInfo -> PacketInfoC;
	
	// Flooding
	components FloodingC;
	components new ListC(PacketID, 99) as recPackets;
	components new ListC(SentTuple, 99) as sentPackets;
	
	Node.Flooding -> FloodingC;
	FloodingC.Sender -> SimpleSendC;
	FloodingC.recPackets -> recPackets;
	FloodingC.Neighbors -> Neighbors;
	FloodingC.sentPackets -> sentPackets;
	FloodingC.PacketInfo -> PacketInfoC;
	
	// Shortest Path
	components ShortestPathC;
	components new HashmapC(Route, 16) as Tentative;
	components new HashmapC(Route, 16) as ConfirmedNodes;
	Node.ShortestPath -> ShortestPathC;
	ShortestPathC.Sender -> SimpleSendC;
	ShortestPathC.recPackets -> recPackets;
	ShortestPathC.Tentative -> Tentative;
	ShortestPathC.ConfirmedNodes -> ConfirmedNodes;
	ShortestPathC.NeighborLS -> NeighborLS;
	ShortestPathC.PacketInfo -> PacketInfoC;
	
	// Transport
	components TransportC;
	components new TimerMilliC() as TimeoutTimer;
	components new TimerMilliC() as HandShakeTimer;
	components new TimerMilliC() as AckTimer;
	components new HashmapC(socket_storage_t, 15) as Sockets;
	components new HashmapC(socket_t, 15) as FDs;
	Node.Transport -> TransportC;
	Node.Sockets -> Sockets;
	Node.FDs -> FDs;
	TransportC.TimeoutTimer -> TimeoutTimer;
	TransportC.HandShakeTimer -> HandShakeTimer;
	TransportC.AckTimer -> AckTimer;
	TransportC.Sockets -> Sockets;
	TransportC.FDs -> FDs;
	TransportC.Sender -> SimpleSendC;
	TransportC.PacketInfo -> PacketInfoC;
	TransportC.ShortestPath -> ShortestPathC;
	TransportC.Application -> ApplicationC;
		
	// Application
	components ApplicationC;
	components new TimerMilliC() as TryWritingTimer;
	components new TimerMilliC() as ReadTimer;
	components new HashmapC(User, 15) as Users;
	Node.Application -> ApplicationC;
	ApplicationC.TryWritingTimer -> TryWritingTimer;
	ApplicationC.ReadTimer -> ReadTimer;
	ApplicationC.Sockets -> Sockets;
	ApplicationC.FDs -> FDs;
	ApplicationC.Transport -> TransportC;
	ApplicationC.Users -> Users;
	
	
}