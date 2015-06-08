#include "../../packet.h"

interface ShortestPath
{	
	command error_t Dijkstra();
	
	command error_t PrintRoutingTable();
	
	command error_t RoutePack(pack *myMsg);
	
	command error_t SendPack(pack *myMsg);
}