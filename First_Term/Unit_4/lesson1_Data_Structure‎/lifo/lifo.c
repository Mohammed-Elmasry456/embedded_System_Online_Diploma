#include "lifo.h"


LIFO_status LIFO_add_item(LIFO_buff_t* lifo_buf,unsigned int item)
{
	if(!lifo_buf->head || !lifo_buf->base)
	  return LIFO_null;
	if(lifo_buf->count == lifo_buf->length)
	  return LIFO_full;

	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;
	return LIFO_no_error;

}

LIFO_status LIFO_get_item(LIFO_buff_t* lifo_buf,unsigned int* item)
{
	if(!lifo_buf->head || !lifo_buf->base)
		  return LIFO_null;
	if(lifo_buf->count == 0)
		  return LIFO_empty;

	lifo_buf->head--;
	*item =(unsigned int) *(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error;

}
LIFO_status LIFO_init(LIFO_buff_t* lifo_buf,unsigned int* array_buf,unsigned int  length)
{
	if(array_buf == NULL)
		return LIFO_null;
	lifo_buf->base = array_buf;
	lifo_buf->head = array_buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;
	return LIFO_no_error;
}
