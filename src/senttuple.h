#ifndef __SENTTUPLE_H__
#define __SENTTUPLE_H__

#include "../../packet.h"

typedef struct SentTuple
{
	pack packet;
	uint16_t age;
} SentTuple;

#endif