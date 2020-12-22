/*
 * UART.h
 *
 * Created: 12/21/2020 1:37:53 PM
 *  Author: RAWAN
 */ 


#ifndef UART_H_
#define UART_H_


#include "STD.h"

void UART_INIT(uint32 D_BR);
void UART_SEND_CHAR(uint8 IMFO);
void UART_SEND_N_BITS(uint16 IMFO);
uint8 UART_REC_CHAR();
uint8 UART_REC_N_BITS();
void UART_SEND_STR(uint8 *str);
void UART_REC_STR(uint8 *str);
        





#endif /* UART_H_ */