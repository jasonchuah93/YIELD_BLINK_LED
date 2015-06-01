#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#include "button.h"
#include "initializeLEDs.h"
#include "delay.h"
#include "liteTasker.h"

//Main function
int main(void){
	//State state = INITIAL;
	TaskBlock LED1_tb;
	initTaskBlock(&LED1_tb);
	initLED(LED1);
	initLED(LED2);
	initButton();
	while(1){
		yield_LED1(&LED1_tb);
	}
}




