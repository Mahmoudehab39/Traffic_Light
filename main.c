#include <avr/interrupt.h>
#define F_CPU 1000000U
#include <util/delay.h>
#include "ECUAL\LED Driver\led.h"
#include "ECUAL\Button Driver\button.h"
#include "Application\app.h"
#include "MCAL\External_interupt\ex_interrupt.h"
extern uint32_t overflow ;
extern uint8_t a,z,d,q,e;

int main(void)
{APP_start();
	while (1)
	{
		a++;
		APP_start_while();
	}
}
