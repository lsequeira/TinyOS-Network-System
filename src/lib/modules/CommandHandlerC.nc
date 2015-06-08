/**
 * @author UCM ANDES Lab
 * $Author: abeltran2 $
 * $LastChangedDate: 2014-08-31 16:06:26 -0700 (Sun, 31 Aug 2014) $
 * 
 */ 


#include "../../packet.h"
#include "../../command.h"

module CommandHandlerC{
   provides interface CommandHandler;
}

implementation{

   command error_t CommandHandler.receive(pack *msg){
      uint8_t commandID;
      uint8_t* buff;
      uint16_t combined;

      buff = (uint8_t*) msg->payload;
      commandID = buff[0];

      dbg("cmdDebug", "A Command has been Issued.\n");
      //Find out which command was called and call related command
      if(commandID == CMD_PING){
         dbg("cmdDebug", "Command Type: Ping\n");
         signal CommandHandler.ping(buff[1], &buff[2]);
         return SUCCESS;
      }else if(commandID == CMD_NEIGHBOR_DUMP){
         dbg("cmdDebug", "Command Type: Neighbor Dump\n");
         signal CommandHandler.printNeighbors();
         return SUCCESS;
      }else if(commandID == CMD_LINKSTATE_DUMP){
         dbg("cmdDebug", "Command Type: Link State Dump\n");
         signal CommandHandler.printLinkState();
         return SUCCESS;
      }else if(commandID == CMD_ROUTETABLE_DUMP){
         dbg("cmdDebug", "Command Type: Route Table Dump\n");
         signal CommandHandler.printRouteTable();
         return SUCCESS;
      }else if(commandID == CMD_TEST_CLIENT){
         dbg("cmdDebug", "Command Type: Test Client\n");
         signal CommandHandler.setTestClient(buff[1], buff[2], buff[3], (buff[4]<<8)|buff[5]);
         return SUCCESS;
      }else if(commandID == CMD_MESSAGE){
         dbg("cmdDebug", "Command Type: Chat Client\n");
         signal CommandHandler.setChatClient(buff[1], buff[2], buff[3], buff[4], &buff[5]);
         return SUCCESS;
      }else if(commandID == CMD_TEST_SERVER){
         dbg("cmdDebug", "Command Type: Test Server\n");
         signal CommandHandler.setTestServer(buff[1]);
         return SUCCESS;
      }else if(commandID == CMD_KILL){
         dbg("cmdDebug", "Command Type: Close Client\n");
         signal CommandHandler.closeClient(buff[1], buff[2], buff[3]);
         return SUCCESS;
      }else{
         dbg("cmdDebug", "CMD_ERROR: \"%s\" does not match any known commands.\n", commandID);
         return FAIL;
      }
   }
}
