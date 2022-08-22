
#ifndef APP_H_
#define APP_H_
#include <avr/interrupt.h>
#include "..\ECUAL\LED Driver\led.h"
#include "..\ECUAL\Button Driver\button.h"
void APP_start(void);
void APP_start_while(void);
#define  NUMBERS_OF_OVERFLOWS 16

#endif