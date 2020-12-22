/*
 * rawanrizq_gradproj_amit.c
 *
 * Created: 12/21/2020 9:23:39 AM
 * Author : RAWAN
 */ 

#include <avr/io.h>
#include "masseges.h"
#include "STD.h"
#include "SPI.h"
#include "LED.h"

int main(void)
{
	uint8 type_massage;
	SLAVE_INIT();
	LED_init();
	
	while (1)
	{
		type_massage = SPI_REC();
		
		switch( type_massage )
		{
			
			case TURN_ON_LED_ROOM1:
			LED1_On();
			break;
			
			case  TURN_OFF_LED_ROOM1:
			LED1_Off();
			break;
			
			case  TURN_ON_LED_ROOM2:
			LED2_On();
			break;
			
			case  TURN_OFF_LED_ROOM2:
			LED2_Off();
			break;
			
		}
		
	}
}
