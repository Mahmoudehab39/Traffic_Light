#include "timer.h"
#include "../..\ECUAL\LED Driver\led.h"
void Timer_Init(void)
{
	TCCR0 =0x00;
}
void Timer_Start(void)
{
	TCCR0 |= (1<<0);
	TCCR0 |= (1<<2);
	TCCR0 &= ~(1<<1);
}
void Timer_Stop(void)
{
	TCCR0 &= ~(1<<CS00_BIT);
	TCCR0 &= ~(1<<CS01_BIT);
	TCCR0 &= ~(1<<CS02_BIT);
}
