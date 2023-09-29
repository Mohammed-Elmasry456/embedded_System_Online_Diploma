#include "stdint.h"
extern int main();

void reset(void);

void Default_Handler(void)
{
	reset();
}

void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));;

void H_fault_Handler(void) __attribute__((weak, alias("Default_Handler")));;


void MM_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));;


void Bus_Fault(void) __attribute__((weak, alias("Default_Handler")));;


void Usage_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));;

static unsigned long _stack_top[256];
// uint32_t vectors[]__attribute__((section(".vectors")))={
// 	(uint32_t) ((unsigned long)_stack_top + sizeof(_stack_top)),
// 	(uint32_t) &reset,
// 	(uint32_t) &NMI_Handler,
// 	(uint32_t) &H_fault_Handler,
// 	(uint32_t) &MM_Fault_Handler,
// 	(uint32_t) &Bus_Fault,
// 	(uint32_t) &Usage_Fault_Handler,

// };

//------------------------Another_Method-------------------------------
void(* const vectors_p[])()__attribute__((section(".vectors")))=
  {
  	(void (*)()) ((unsigned long)_stack_top + sizeof(_stack_top)),
  	&reset,
  	&NMI_Handler,
  	&H_fault_Handler,
  	&MM_Fault_Handler,
  	&Bus_Fault,
  	&Usage_Fault_Handler,
  };

extern uint32_t _E_TEXT;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;

void reset(void)
{
	uint32_t Size_Data = (unsigned char*)&_E_DATA - (unsigned char*)& _S_DATA;
	unsigned char* SR_Data = (unsigned char*)&_E_TEXT;
	unsigned char* TR_Data = (unsigned char*)&_S_DATA;
	for(int i=0;i<Size_Data;i++)
	{
		*((unsigned char*)TR_Data++) = *((unsigned char*)SR_Data++);
	}
    
    uint32_t Size_BSS = (unsigned char*)&_E_BSS - (unsigned char*)& _S_BSS;
    unsigned char* TR_BSS = (unsigned char*)&_S_BSS;
    for(int i=0;i<Size_BSS;i++)
	{
		*((unsigned char*)TR_BSS++) = (unsigned char)0;
	}

	main();
}
