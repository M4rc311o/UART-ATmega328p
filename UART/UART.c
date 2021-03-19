/*
 * UART.c
 *
 * Created: 13.03.2021 16:39:31
 * Author : M4rc3110
 */ 

#include "UART.h"

FILE str_uart = FDEV_SETUP_STREAM(uart_putchar, NULL, _FDEV_SETUP_WRITE);

void UART_Init(uint32_t BAUD_RATE){
	uint32_t UBRR = (F_CPU/(16*BAUD_RATE))-1;
	
	//set baud rate
	UBRR0H = (UBRR >> 8);
	UBRR0L = UBRR;
	
	UCSR0B = (1 << TXEN0);	//enable transmitter
	UCSR0C = 0B00000110;	//set 8-bit character size
	
	stdout=&str_uart;		//bind stream
}

void uart_putchar(char c, FILE *stream){
	while ( !( UCSR0A & (1<<UDRE0)) );	//wait until buffer is empty
	UDR0 = c;	//Put data into buffer
}
