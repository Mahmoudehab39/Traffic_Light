
#ifndef TIMER_H_
#define TIMER_H_

#include <avr/interrupt.h>

// TCCR0 BITS

#define CS02_BIT           2
#define CS01_BIT           1
#define CS00_BIT           0
void Timer_Init(void);
void Timer_Start(void);
void Timer_Stop(void);




#endif /* TIMER_H_ */