#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#include "button.h"
#include "initializeLEDs.h"
#include "delay.h"
#include "liteTasker.h"

//Main function
int main(void){

	initButton();
	State state1 = INITIAL;
	State state2 = INITIAL;
	State state3 = INITIAL;
	State state4 = INITIAL;
	while(1){
		state1 = LED1_SM(state1);
		state2 = LED2_SM(state2);
		state3 = LED3_SM(state3);
		state4 = LED4_SM(state4);

	}

}




