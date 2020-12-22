/*
 * STD.h
 *
 *  Created on: Jul 3, 2020
 *      Author: RAWAN
 */

#ifndef STD_H_
#define STD_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <util/delay.h>


typedef unsigned char  uint8;
typedef signed char    sint8;
typedef unsigned short uint16;
typedef signed short   sint16;
typedef unsigned long  uint32;
typedef signed long    sint32;
typedef float          float32;
typedef double         float64;


#define SET_BIT(REG,BIT)    (REG |= (1<<BIT))
#define CLR_BIT(REG,BIT)    (REG &=~ (1<<BIT))
#define Toggle_BIT(REG,BIT) (REG ^= (1<<BIT))
#define GET_BIT(REG,BIT)    ((REG >> BIT) & (0X01))

#endif /* STD_H_ */
