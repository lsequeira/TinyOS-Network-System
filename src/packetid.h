#ifndef __PACKETID_H__
#define __PACKETID_H__

typedef struct PacketID
{
	uint16_t sequence;
	uint16_t moteID;
	uint16_t age;
} PacketID;

#endif