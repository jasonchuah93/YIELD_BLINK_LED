#ifndef __DELAY_H
#define __DELAY_H

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

#define one_hundred_millisec 100
#define one_hundred_twenty_millisec 120
#define two_hundred_millisec 200
#define two_hundred_forty_millisec 240
#define one_sec	1000



uint32_t getCurrentTime();
int delay(uint32_t delayCycle);
int halfSecHasNotExpire();

#endif //__DELAY_H
