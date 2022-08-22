
#ifndef LED_H_
#define LED_H_
#include "../..\MCAL\DIO Drivers\dio.h"
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7
void LED_init(uint8_t ledport,uint8_t ledpin);
void LED_on(uint8_t ledport,uint8_t ledpin);
void LED_off(uint8_t ledport,uint8_t ledpin);
void LED_toggle(uint8_t ledport,uint8_t ledpin);




#endif /* LED_H_ */