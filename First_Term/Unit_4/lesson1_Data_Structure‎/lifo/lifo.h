#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
typedef struct
{
	unsigned int* base;
	unsigned int* head;
	unsigned int  count;
	unsigned int  length;

}LIFO_buff_t;

typedef enum
{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;

LIFO_status LIFO_add_item(LIFO_buff_t* lifo_buf,unsigned int item);
LIFO_status LIFO_get_item(LIFO_buff_t* lifo_buf,unsigned int* item);
LIFO_status LIFO_init(LIFO_buff_t* lifo_buf,unsigned int* array_buf,unsigned int  length);

#endif
