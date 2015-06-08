#ifndef ROUTE_H
#define ROUTE_H

typedef struct Route
{
	uint16_t node;
	uint16_t cost;
	uint16_t nextHop;
} Route;

#endif /* ROUTE_H */