#ifndef __BUTTON_H
#define __BUTTON_H

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

#define pressedButton() HAL_GPIO_ReadPin(GPIOA , GPIO_PIN_0);

void initButton();

#endif //__BUTTON_H
