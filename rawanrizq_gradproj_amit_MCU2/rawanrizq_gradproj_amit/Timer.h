/*
 * Timer.h
 *
 * Created: 21/08/2020 06:33:35 
 *  Author: RAWAN
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "STD.h"

#define PRESCALER_VALUE 8

void TIMER_INIT();
void TIMER_START();
void TIMER_STOP();

#endif /* TIMER_H_ */