#include "thirdAssignment.h"
#include "delay.h"

//State Diagram LED3
int LED3_SM(State state){
	static uint32_t timer = 0;
	int button = pressedButton();
	static uint32_t previousTime = 0;
	if(timer != 5){
		if(button == GPIO_PIN_SET)
			timer = 0;
	}else if(timer == 5){
		if(button == GPIO_PIN_SET)
			return 0;
	}
	switch(state){
		case INITIAL:
			initRearLED1();
			state = STATEA;
		break;
		case STATEA:
			if(timer != 4){
				if(getCurrentTime()-previousTime >  two_hundred_millisec){
					turnOnLED(PORTB,LED1);
					previousTime = getCurrentTime();
					state = STATEB;
					timer ++ ;
				}
			}
		break;
		case STATEB:
			if(timer==5){
				turnOffLED(PORTB,LED1);
			}else{
			if(getCurrentTime()-previousTime >  two_hundred_millisec){
				turnOffLED(PORTB,LED1);
				previousTime = getCurrentTime();
				state = FINAL;
			}
			}
		break;
		case FINAL:
			state = INITIAL;
		break;
		}
		return state;
}
