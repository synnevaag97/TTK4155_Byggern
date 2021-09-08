/*
 * ADC.h
 *
 * Created: 08.09.2021 12:51:33
 *  Author: haakenl
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "config.h"

void ADC_init();

uint8_t ADC_read(int index); // volatile
void ADC_write(uint8_t data, int index);
//void ADC_calibrate();
//pos_t pos_read(void);


#endif /* ADC_H_ */


