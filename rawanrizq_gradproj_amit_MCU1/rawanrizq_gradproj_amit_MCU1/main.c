/*
 * rawanrizq_gradproj_amit_MCU1.c
 *
 * Created: 12/21/2020 1:25:19 PM
 * Author : Asus
 */ 

#include <avr/io.h>
#include "MCU1_CONFIGURATION.h"
#include "STD.h"
#include "BLUETOOTH.h"
#include "SPI.h"
#include "masseges.h"


int main(void)
{

    uint8 type_massage;
	BLUETOOTH_INIT();
	MASTER_INIT();
	
	while (1)
	{
		type_massage = BLUETOOTH_REC();
		
		switch( type_massage )
		{
			case TURN_ON_LED_ROOM1:
			SPI_SEND(TURN_ON_LED_ROOM1);
			break;
			
			case TURN_OFF_LED_ROOM1:
			SPI_SEND(TURN_OFF_LED_ROOM1);
			break;
			
			case TURN_ON_LED_ROOM2:
			SPI_SEND(TURN_ON_LED_ROOM1);
			break;
			
			case TURN_OFF_LED_ROOM2:
			SPI_SEND(TURN_OFF_LED_ROOM2);
			break;
			
		}
	}
}