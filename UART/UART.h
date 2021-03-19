/*
 * UART.h
 *
 * Created: 13.03.2021 16:40:00
 * Author : M4rc3110
 */ 


#ifndef UART_H_
#define UART_H_

#include <avr/io.h>
#include <stdio.h>

void UART_Init(uint32_t BAUD_RATE);
void uart_putchar(char c, FILE *stream);

#endif /* UART_H_ */
