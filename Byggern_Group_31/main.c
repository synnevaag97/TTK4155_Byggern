/*
 * Byggern_Group_31.c
 *
 * Created: 01.09.2021 12:19:08
 * Author : haakenl
 */ 

//#include "config.h"
#include "UART.h"
#include "SRAM.h"
#include "ADC.h"

int main(void)
{
	UART_init();
	SRAM_init();
	ADC_init();
	DDRA |= (1<<DDA0);
	for(unsigned int i = 0; i < 50;){
		//SRAM_test();
		ADC_write(80, 0);
		uint8_t data = ADC_read(0);
		printf("ADC read %4d\n", data);
		_delay_ms(1000);
	}
		return 0;
}