#ifndef US_H_
#define US_H_
#include "State.h"
enum{
	US_busy
}US_State_id;

State_define(US_busy);
void US_init();
extern void(*US_State)();

#endif /* US_H_ */
