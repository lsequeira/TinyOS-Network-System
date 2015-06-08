#ifndef __LINKSTATE_H__
#define __LINKSTATE_H__

typedef nx_struct LinkState
{
	nx_uint8_t size;
	nx_uint8_t node;
	nx_uint8_t seq;
	nx_uint8_t cost[8];
	nx_uint8_t neighbors[8];
} LinkState;

#endif