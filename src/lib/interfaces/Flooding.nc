#include "../../packet.h"

interface Flooding
{	
	command uint16_t receive(pack* msg);
	
	command error_t start(pack* msg);
	
	command error_t CheckSent();
}