#include "uart.h"

#define UART0 *((volatile unsigned int* const)((unsigned int*) 0x101f1000)) 

void Send_String(unsigned char* s_n)
{
	while(*s_n != '\0') 
	{
		UART0 = (unsigned int)(*s_n);
		s_n++;
	}

}