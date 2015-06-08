#ifndef USERS_H
#define USERS_H

typedef struct User
{
	uint8_t* name[20];
	uint8_t namesize;
	uint8_t port;
} User;

#endif /* USERS_H */