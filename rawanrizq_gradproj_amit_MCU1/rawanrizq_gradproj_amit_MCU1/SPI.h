/*
 * SPI.h
 *
 * Created: 28/11/2020 08:21:38 
 *  Author: RAWAN
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "STD.h"

#define DDR_SPI DDRB
#define SS   PB4
#define MOSI PB5
#define MISO PB6
#define SCK  PB7

void MASTER_INIT();
void SLAVE_INIT();
void SPI_SEND(uint8 IMFO);
uint8 SPI_REC();


#endif /* SPI_H_ */