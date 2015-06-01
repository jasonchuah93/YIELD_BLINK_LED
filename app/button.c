#include "button.h"

//Initialize button
void initButton(){
	GPIO_InitTypeDef GPioInfo;

	__GPIOA_CLK_ENABLE();

	GPioInfo.Mode = GPIO_MODE_INPUT;
	GPioInfo.Pin = GPIO_PIN_0;
	GPioInfo.Pull = GPIO_NOPULL;
	GPioInfo.Speed = GPIO_SPEED_HIGH;
	//GPioInfo.Alternate = GPIO_MODE_AF_PP;

	//Init button
	HAL_GPIO_Init(GPIOA, &GPioInfo);
}
