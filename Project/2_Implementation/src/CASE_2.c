/**
 * @file case 2.c
 * @author Prabal singh
 * @brief Functions to get the ADC values 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "CASE_2.h"

void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}

uint16_t CASE_2_GetADC(void)
{
      InitADC();
      uint16_t temp;
      temp=ReadADC(0);
      return temp;
}