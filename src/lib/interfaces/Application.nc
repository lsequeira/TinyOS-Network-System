#include "../../packet.h"
#include "../../socket.h"
#include "../../TCP.h"

interface Application
{
	command error_t initializeServer(uint8_t server_port);
	
	command error_t initializeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
	
	command error_t messageClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t* message);
	
	command error_t query(socket_t qfd, uint8_t* buff, uint16_t bufflen);
	
	command error_t clientReady();
	
	command error_t serverReady();
}