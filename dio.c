#include "dio.h"

void DIO_init(uint8_t pinNumber,uint8_t portNumber ,uint8_t direction)
{
	switch(portNumber)
	{
		case port_A:
		if (direction== IN)
		{
			DDRA &= ~(1<<pinNumber);//clear
		}
		else if (direction== OUT)
		{
			DDRA |=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_B:
		if (direction== IN)
		{
			DDRB &= ~(1<<pinNumber);//clear
		}
		else if (direction== OUT)
		{
			DDRB |=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_C:
		if (direction== IN)
		{
			DDRC &= ~(1<<pinNumber);//clear
		}
		else if (direction== OUT)
		{
			DDRC |=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_D:
		if (direction== IN)
		{
			DDRD &= ~(1<<pinNumber);//clear
		}
		else if (direction== OUT)
		{
			DDRD |=(1<<pinNumber); //set
		}
		else{}
		break;
	}
}
void DIO_write(uint8_t pinNumber,uint8_t portNumber ,uint8_t value)
{
	switch(portNumber)
	{
		case port_A:
		if (value== LOW)
		{
			PORTA &= ~(1<<pinNumber);//clear
		}
		else if (value== HIGH)
		{
			PORTA|=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_B:
		if (value== LOW)
		{
			PORTB &= ~(1<<pinNumber);//clear
		}
		else if (value== HIGH)
		{
			PORTB |=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_C:
		if (value== LOW)
		{
			PORTC &= ~(1<<pinNumber);//clear
		}
		else if (value== HIGH)
		{
			PORTC |=(1<<pinNumber); //set
		}
		else{}
		break;
		case port_D:
		if (value== LOW)
		{
			PORTD &= ~(1<<pinNumber);//clear
		}
		else if (value== HIGH)
		{
			PORTD |=(1<<pinNumber); //set
		}
		else{}
		break;
	}
}
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber )
{
	switch(portNumber)
	{
		case port_A:
		PORTA ^=(1<<pinNumber);
		break;
		case port_B:
		PORTB ^=(1<<pinNumber);
		break;
		case port_C:
		PORTC ^=(1<<pinNumber);
		break;
		case port_D:
		PORTD ^=(1<<pinNumber);
		break;
	}
}
void DIO_read(uint8_t pinNumber,uint8_t portNumber ,uint8_t *value)
{
	switch(portNumber)
	{
		case port_A:
		*value= ((PINA &(1<<pinNumber))>>pinNumber);
		break;
		case port_B:
		*value= ((PINB &(1<<pinNumber))>>pinNumber);
		break;
		case port_C:
		*value= ((PINC &(1<<pinNumber))>>pinNumber);
		break;
		case port_D:
		*value= ((PIND &(1<<pinNumber))>>pinNumber);
		break;
	}
}

