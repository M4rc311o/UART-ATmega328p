# ATmega328p_UART-lib
 Library which allows you to communicate (only transmitting is available now) through a serial port using stdio.h (already included in the UART library) with ATmega328p.
 
## Initialization:
- It's necessary to assign your clock frequency value to F_CPU symbol.     
- Call this function and pass a baud rate you want:

      void USART_Init(uint32_t BAUD_RATE);
    
## Using:
- After initialization just use function printf().
   
- Usage of printf() function is described here:
> https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
