/*
 * Serial.h
 *
 * Created: 13.03.2021 16:40:00
 * Author : M4rc3110
 */ 


#ifndef USART_H_
#define USART_H_

#include <avr/io.h>
#include <stdio.h>

void USART_Init(uint32_t BAUD_RATE);
void uart_putchar(char c, FILE *stream);

#endif /* USART_H_ */