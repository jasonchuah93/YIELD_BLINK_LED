#ifndef __initializeLEDs_H
#define __initializeLEDs_H

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

typedef enum{
	INITIAL,
	LED_ON,
	LED_OFF,
	FINAL
}State;

#define LED1 (GPIO_PIN_13) // PG13 GREEN
#define LED2 (GPIO_PIN_14) // PG14 RED

#define PORTG (GPIOG)

#define turnOnLED(port,x) HAL_GPIO_WritePin(port, x, GPIO_PIN_SET);
#define turnOffLED(port,x) HAL_GPIO_WritePin(port, x, GPIO_PIN_RESET);

void initLED(int pin);

#endif //__initializeLEDs_H
