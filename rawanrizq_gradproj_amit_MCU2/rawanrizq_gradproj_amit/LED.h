/*
 * LED.h
 *
 * Created: 24/10/2020 05:46:22 
 *  Author: RAWAN
 */ 


#ifndef LED_H_
#define LED_H_

#include "STD.h"

#define LED1_PORT PORTC
#define LED1_DIR  DDRC
#define LED1_PIN  PC2

#define LED2_PORT PORTD
#define LED2_DIR  DDRD
#define LED2_PIN  PD3

void LED_init(void);
void LED1_On(void);
void LED1_Off(void);
void LED1_Toggle(void);
void LED2_On(void);
void LED2_Off(void);
void LED2_Toggle(void);



#endif /* LED_H_ */