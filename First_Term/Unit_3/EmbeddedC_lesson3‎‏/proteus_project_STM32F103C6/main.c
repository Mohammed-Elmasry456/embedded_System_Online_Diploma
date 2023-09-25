
#include "stdint.h"


typedef volatile unsigned int vuint32_t;

#define RCC_BASE    0x40021000
#define PortA_BASE  0x40010800

#define RCC_APB2ENR *(volatile uint32_t *)(0x18 + RCC_BASE)
#define GPIOA_CRH   *(volatile uint32_t *)(0x04 + PortA_BASE)
#define GPIOA_ODR   *(volatile uint32_t *)(0x0C + PortA_BASE)


typedef union{
	vuint32_t all_ports;
	struct{
		vuint32_t reserved:13;
		vuint32_t portA:1;
	}pin;


}ODR_t;

volatile ODR_t *R_ODR = (volatile ODR_t *)(0x0C + PortA_BASE);
int main(void)
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0x00200000;
	while(1)
	{
//		GPIOA_ODR |= 1<<13;
		R_ODR-> pin.portA = 1;
		for(int i=0;i<5000;i++);
//		GPIOA_ODR &= ~(1<<13);
		R_ODR-> pin.portA = 0;
		for(int i=0;i<5000;i++);
	}


}
