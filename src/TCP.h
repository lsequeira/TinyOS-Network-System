#ifndef TCP_H
#define TCP_H

typedef enum flagtype
{
	SYN = '0',
	SYN_ACK = '1',
	ACK = '2',
	FIN = '3',
	DATA = '4',
	DATA_ACK = '5',
	PROBE = '6'
} flagtype;

typedef nx_struct TCP
{
	nx_uint8_t src_port;
	nx_uint8_t dest_port;
	nx_uint16_t seq;
	nx_uint16_t ack;
	nx_uint8_t flag;
	nx_uint8_t adv_win;
	nx_uint8_t data[10];
	nx_uint8_t dataSize;
} TCP;

#endif /* TCP_H */
