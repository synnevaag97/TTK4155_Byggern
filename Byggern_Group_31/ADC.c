/*
 * ADC.c
 *
 * Created: 08.09.2021 12:51:20
 *  Author: haakenl
 */ 

#include "ADC.h"

void ADC_init(){
	// Set timer/counter0 to PD0 (2.5MHz to ADC)
	set_bit(DDRB, PB0); // Set PB0 as output
	set_bit(TCCR0,WGM01); // Set CTC Mode
	set_bit(TCCR0, COM00); // Toggle on Compare match
	set_bit(TCCR0,CS00); // Turn of prescaler
	
	//OCR0 = 0;
}


void ADC_write(uint8_t data, int index){
	volatile char *ext_ADC = (char *) 0x1400; // Start address for the SRAM
	ext_ADC[index] = data;
}

uint8_t ADC_read(int index){
	volatile char *ext_ADC = (char *) 0x1400; // Start address for the ADC channels
	return ext_ADC[0];
	//_delay_us(60);
	//return retreived_value;
}

// 1010000000000
// 1480 = 1010010000000

// channel 0 = 1010010000000 = 1480
// channel 1 = 1010010000001 = 1481
// channel 2 = 1010010000010 = 1482
// channel 3 = 1010010000011 = 1483


