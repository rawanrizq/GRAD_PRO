/*
 * SPI.c
 *
 * Created: 28/11/2020 08:21:24 
 *  Author: RAWAN
 */ 

#include "SPI.h"



void MASTER_INIT()
{

	DDR_SPI |=  (1<<MOSI) | (1<<SCK)  |(1<<SS);
	SPCR    |=  (1<<SPE)  | (1<<MSTR);
	CLR_BIT(SPCR, CPOL);       
	CLR_BIT(SPCR, CPHA);       
}

void SLAVE_INIT()
{

	DDR_SPI |= (1<<MISO);
	SPCR    |= (1<<SPE);
	CLR_BIT(SPCR, CPOL);       
	CLR_BIT(SPCR, CPHA);       
}

void SPI_SEND( uint8 IMFO )
{
	SPDR = IMFO ;
	while(GET_BIT(SPSR, SPIF) == 0);  
}

uint8 SPI_REC()
{
	while(GET_BIT(SPSR, SPIF) == 0);  
	return SPDR;
}