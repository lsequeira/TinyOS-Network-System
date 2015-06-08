#ifndef __STRUCT_H__
#define __STRUCT_H__

#include "../../packet.h"

typedef enum socketState{
   SOCK_ESTABLISHED  = 0,
   SOCK_LISTEN       = 1,
   SOCK_CLOSED       = 2,
   SOCK_SYN_SENT     = 3,
   SOCK_CLOSE_WAIT   = 4,
   SOCK_FIN_WAIT     = 5,
   SOCK_SYN_RCVD     = 6,
   SOCK_FIN_WAIT2    = 7,
   SOCK_TIME_WAIT    = 8,
   SOCK_LAST_ACK     = 9
}socketState;

enum{
   SOCKET_SEND_BUFFER_SIZE = 128,
   SOCKET_RECEIVE_BUFFER_SIZE = 128,
   DATA_TO_SEND_SIZE = 5000,
   READ_BUFFER_MAX = 5000,
   NULL_SOCKET = 0,
   MAX_TRANSPORT_SIZE = 10
};

typedef nx_struct socket_addr_t{
   nx_uint8_t srcPort;
   nx_uint8_t destPort;
   nx_uint16_t srcAddr;
   nx_uint16_t destAddr;
}socket_addr_t;

typedef struct socket_storage_t{
   socketState state;
   socket_addr_t sockAddr;
   uint8_t sendBuff[SOCKET_SEND_BUFFER_SIZE];
   uint8_t recBuff[SOCKET_RECEIVE_BUFFER_SIZE];
   uint8_t dataToSend[DATA_TO_SEND_SIZE];
   uint8_t messageToQuery[DATA_TO_SEND_SIZE];
   uint8_t sendWindow[MAX_TRANSPORT_SIZE];
   uint16_t sendWindowSize;
   uint16_t dataToSendSize;
   uint16_t messageToQuerySize;
   uint16_t sendBuffSize;
   uint16_t recBuffSize;
   uint16_t lastByteSent;
   uint16_t lastByteWritten;
   uint16_t lastByteAck;
   uint16_t lastByteRec;
   uint16_t lastByteRead;
   uint16_t nextByteExpected;
   uint16_t nextExpectedSeq;
   uint8_t advWin;
   uint16_t seq;
   uint16_t ackseq;
   uint16_t timeOut;
   uint16_t HStimeOut;
   uint16_t acktimeOut;
   pack packet;
   
   uint16_t inTimeOut;
   uint16_t inHSTimeOut;
   uint16_t inAckTimeOut;
   uint16_t waitingAck;
   uint16_t neverSent;
   uint16_t sending;
}socket_storage_t;

typedef uint16_t socket_t;

#endif
