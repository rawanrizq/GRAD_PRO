/*
 * UART.c
 *
 * Created: 12/21/2020 1:38:17 PM
 *  Author: Asus
 */ 

#include "UART.h"

//BR_Value = ((FREQ) / (16 * Desired_BR)) - 1  // ***NOTE***
//F_CPU = 16MHz  //

void UART_INIT(uint32 D_BR)
{
	UCSRB |= (1<<RXEN)|(1<<TXEN);       
	UBRRH &= ~(1<<URSEL);             
	if(D_BR == 4800)
	UBRRL = 207;
	else if(D_BR == 9600)
	UBRRL = 103;
	else if(D_BR == 19200)
	UBRRL = 51;
	else if(D_BR == 28800)
	UBRRL = 34;
	else if(D_BR == 115200)
	UBRRL = 8;

	
	UCSRC |= (1<<URSEL);                 
	UCSRC &= ~(1<<UMSEL);                
	UCSRC &= ~((1<<UPM1)|(1<<UPM0));     
	UCSRC &= ~(1<<USBS);                
	UCSRB &= ~(1<<UCSZ2);
	UCSRC |= (1<<UCSZ1)|(1<<UCSZ0);
}

void UART_SEND_CHAR(uint8 IMFO)
{
	while(!(UCSRA & (1<<UDRE)));     
	UDR = IMFO;
}

void UART_SEND_N_BITS(uint16 IMFO)
{
	while(!(UCSRA & (1<<UDRE)));         
	UCSRB &= ~(1<<TXB8);
	if (IMFO & 0x0100)                  
	UCSRB |= (1<<TXB8);
	UDR = IMFO;
}

uint8 UART_REC_CHAR()
{
	while(!(UCSRA & (1<<RXC)));        
	return UDR;
}

uint8 UART_REC_N_BITS()
{
	uint8 X, Y;
	while(!(UCSRA & (1<<RXC)));            
	X = UCSRB;
	Y = UDR;
	X = (X>>1) & 0x01;
	return ((X<<8) | Y);
}

void UART_SEND_STR(uint8 *str)
{
	uint8 i = 0;
	while(str[i] != '\0')
	{
		UART_SEND_CHAR(str[i]);
		i++;
	}
}

void UART_REC_STR(uint8 *str)
{
	uint8 temp = 0;
	do
	{
		temp = UART_REC_CHAR();
		*str = temp;
		 str++;
	}while(temp != '#');
	
	str--;
	*str = '\0';
}