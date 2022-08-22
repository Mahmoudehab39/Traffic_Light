#include "app.h"
#include "../MCAL\Timer Driver\timer.h"
uint8_t  a=0,z=0,d=0,q=0,e=0,j=0;
uint8_t overflow=0;

void APP_start(void)
{
	LED_init(port_A,pin0);
	LED_init(port_A,pin1);
	LED_init(port_A,pin2);
	LED_init(port_B,pin0);
	LED_init(port_B,pin1);
	LED_init(port_B,pin2);
	BUTTON_init(port_C,pin2);
	sei();
	//SREG |=(1<<7);
	MCUCR |=(1<<0)|(1<<1);
	//MCUCR &= ~(1<<0);
	GICR |=(1<<6);
	Timer_Init();
	TCNT0=0x0C;
}
void APP_start_while(void)
{
	Timer_Start();
	if(a==1)
	{LED_toggle(port_A,pin0);
		LED_off(port_A,pin2);
		LED_off(port_A,pin1);
		
		if(z==3)
		{	
			LED_toggle(port_B,pin2);
			LED_off(port_B,pin1);
			z=4;
		}
		if(e==1)
		{
			LED_toggle(port_B,pin2);
			LED_off(port_B,pin1);
			e=2;
		}
		if(d==1)
		{
			LED_toggle(port_B,pin2);
		}
		if(q==2)
		{
			LED_toggle(port_B,pin2);
			LED_off(port_B,pin1);
			q=3;
		}
	}
	
	else if(a==2)
	{
		LED_toggle(port_A,pin1);
		LED_off(port_A,pin0);
		LED_off(port_B,pin2);

		if(z==4)
		{
			LED_off(port_B,pin2);
		}
		if(q==3)
		{
			LED_off(port_B,pin2);
		}
		if(d==1)
		{
			LED_off(port_B,pin2);
			d=0;
		}
		if(e==2)
		{
			LED_off(port_B,pin0);
		}
	}
	else if (a==3)
	{LED_toggle(port_A,pin2);
		LED_off(port_A,pin1);
		if(z==1)
		{
			LED_off(port_B,pin1);
			LED_off(port_B,pin2);
			z++;
		}
	}
	else if (a==4)
	{LED_toggle(port_A,pin1);
		
		LED_off(port_A,pin2);

		if(z==2)
		{
			LED_off(port_B,pin0);
			LED_toggle(port_B,pin1);
			z=3;
		}
		if(q==1)
		{
			LED_off(port_B,pin0);
			LED_toggle(port_B,pin1);
			q=2;
		}
	}

	while(overflow<NUMBERS_OF_OVERFLOWS)
	{
		if (a==5)
		{a=0;
			break;
		}
		while ((TIFR &(1<<0))==0 );
		if(a==2)
		{
			LED_toggle(port_A,pin1);
		}
		if(a==4)
		{
			LED_toggle(port_A,pin1);
			if(j==1)
			{
				LED_toggle(port_B,pin1);
			}
		}
		TIFR |=(1<<0);
		overflow++;
	}
	if(a==4)
	{
		j=0;
	}
	overflow=0;
	Timer_Stop();
	
}