/*
 * Byggern_Group_31.c
 *
 * Created: 01.09.2021 12:19:08
 * Author : haakenl
 */ 

//#include "config.h"
#include "UART.h"
#include "SRAM.h"

int main(void)
{
	UART_init();
	SRAM_init();
	DDRA |= (1<<DDA0);
	//unsigned int tall = 0;
	while(1){
		SRAM_test();
		//SRAM_write(5,10);
		//uint8_t data = SRAM_read(10);
		//printf("SRAM read %4d\n", data);
		//_delay_ms(1000);
	}
	
	return 0;
}