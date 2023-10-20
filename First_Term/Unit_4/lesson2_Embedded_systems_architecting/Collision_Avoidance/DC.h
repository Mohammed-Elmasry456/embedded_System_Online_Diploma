#ifndef DC_H_
#define DC_H_
#include "State.h"
enum{
	DC_idle,
	DC_busy
}DC_State_id;

State_define(DC_idle);
State_define(DC_busy);
extern void(*DC_State)();
void DC_init();

#endif /* DC_H_ */
