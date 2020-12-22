/*
 * LED.c
 *
 * Created: 24/10/2020 05:46:03 
 *  Author: RAWAN
 */ 


#include "LED.h"


void LED_init(void)
{
	SET_BIT(LED1_DIR, LED1_PIN);        
	SET_BIT(LED2_DIR, LED2_PIN);        
}

void LED1_On(void)
{
	SET_BIT(LED1_PORT, LED1_PIN);
}
void LED1_Off(void)
{
	CLR_BIT(LED1_PORT, LED1_PIN);
}
void LED1_Toggle(void)
{
	Toggle_BIT(LED1_PORT, LED1_PIN);
}


void LED2_On(void)
{
	SET_BIT(LED2_PORT, LED2_PIN);
}
void LED2_Off(void)
{
	CLR_BIT(LED2_PORT, LED2_PIN);
}
void LED2_Toggle(void)
{
	Toggle_BIT(LED2_PORT, LED2_PIN);
}