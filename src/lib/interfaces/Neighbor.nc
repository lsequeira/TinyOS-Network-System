#include "../../packet.h"

interface Neighbor
{	
	command error_t receive(pack* msg);
	
	command uint16_t reply(pack* msg);
	
	command error_t startDisc(pack* msg);
	
	command error_t print();
	
	command error_t sendNeighbors();
	
	command error_t addLS(pack* msg);
	
	command error_t printLS();
}