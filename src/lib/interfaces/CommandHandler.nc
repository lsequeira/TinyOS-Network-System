#include "../../packet.h"

interface CommandHandler{
   command error_t receive(pack *msg);

   // Events
   event void ping(uint8_t destination, uint8_t *payload);
   event void printNeighbors();
   event void printRouteTable();
   event void printLinkState();
   event void printDistanceVector();
   event void setTestServer(uint8_t server_port);
   event void setTestClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint16_t transfer);
   event void setChatClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port, uint8_t size, uint8_t* message);
   event void closeClient(uint8_t client_port, uint8_t dest_addr, uint8_t dest_port);
   event void setAppServer();
   event void setAppClient();
}