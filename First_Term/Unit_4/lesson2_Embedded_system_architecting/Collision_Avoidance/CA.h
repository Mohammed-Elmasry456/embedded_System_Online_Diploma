#ifndef CA_H_
#define CA_H_
#include "State.h"
enum{
	CA_waiting,
	CA_driving
}CA_State_id;

State_define(CA_waiting);
State_define(CA_driving);
extern void(*CA_State)();

#endif /* CA_H_ */
