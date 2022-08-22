

#ifndef DIO_H_
#define DIO_H_
//#include "../registers.h"
#include <avr/interrupt.h>
#define port_A 'A'
#define port_B 'B'
#define port_C 'C'
#define port_D 'D'
#define IN 0
#define OUT 1
#define LOW 0
#define HIGH 1
void DIO_init(uint8_t pinNumber,uint8_t portNumber ,uint8_t direction); // initialization  dio directions
void DIO_write(uint8_t pinNumber,uint8_t portNumber ,uint8_t value);// write data to dio
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber );// toggle 
void DIO_read(uint8_t pinNumber,uint8_t portNumber ,uint8_t *value);// read



#endif 