#include "initializeLEDs.h"

//Initialize LEDs on PORTG
void initLED(int pin){

	GPIO_InitTypeDef GPioInfo;

	__GPIOG_CLK_ENABLE();

	GPioInfo.Mode = GPIO_MODE_OUTPUT_PP;
	GPioInfo.Pin = pin;
	GPioInfo.Pull = GPIO_NOPULL;
	GPioInfo.Speed = GPIO_SPEED_HIGH;
	GPioInfo.Alternate = GPIO_MODE_AF_PP;

	//Init LED on PG13
	HAL_GPIO_Init(GPIOG, &GPioInfo);

}

