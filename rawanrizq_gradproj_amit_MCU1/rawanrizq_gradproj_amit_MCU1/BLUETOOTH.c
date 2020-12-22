/*
 * BLUETOOTH.c
 *
 * Created: 12/21/2020 1:30:56 PM
 *  Author: RAWAN
 */ 


#include "BLUETOOTH.h"


void BLUETOOTH_INIT(void)
{	
	UART_INIT( BAUD_RATE);
}


uint8 BLUETOOTH_REC(void)
{
	return UART_REC_CHAR();
}