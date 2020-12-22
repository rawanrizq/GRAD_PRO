/*
 * Timer.C
 *
 * Created: 21/08/2020 06:33:35 
 *  Author: RAWAN
 */ 


#include "Timer.h"

void TIMER_INIT()
{
	SET_BIT(DDRD, PD5);
	SET_BIT(TCCR1A, COM1A0);
	SET_BIT(TCCR1A, FOC1A);
	SET_BIT(TCCR1B, WGM12);
	SET_BIT(TIMSK, OCIE1A);
	SET_BIT(SREG, 7);
}

void TIMER_START()
{
	TCCR1B &= ~((1<<CS12)|(1<<CS11)|(1<<CS10));
	
	#if PRESCALER_VALUE == 8
	
	SET_BIT(TCCR1B, CS11);
	
	#endif

}
void TIMER_STOP()
{
	TCCR1B &= ~((1<<CS12)|(1<<CS11)|(1<<CS10));
}