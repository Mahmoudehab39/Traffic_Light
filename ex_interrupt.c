#include "ex_interrupt.h"
extern uint8_t a,z,d,q,e,j;
ISR(INT0_vect)
{
	if (a==1)
	{
		LED_on(port_B,pin2);
		d=1;
	}
	if( a==2)
	{
		LED_on(port_B,pin0);
		z=1;
		j=1;
	}
	if( a==3)
	{
		LED_on(port_B,pin0);
		q=1;
		j=1;
	}
	if( a==4)
	{
		LED_on(port_B,pin1);
		e=1;
		j=1;
	}
}
