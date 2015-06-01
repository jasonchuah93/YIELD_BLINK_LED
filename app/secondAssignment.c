#include "secondAssignment.h"
#include "delay.h"

//State Diagram LED2
int LED2_SM(State state){
	static uint32_t previousTime = 0;
	uint32_t timer = 0;
	int button = pressedButton();

	switch(state){
	case INITIAL:
		initLED(LED2);
		previousTime = getCurrentTime();
		state = STATEA;
		break;
	case STATEA:
		if(button == GPIO_PIN_SET){
			if(getCurrentTime()-previousTime > one_hundred_millisec ){
					turnOnLED(PORTG,LED2);
					previousTime = getCurrentTime();
					state = STATEB;
			}
		}else{
			if(getCurrentTime()-previousTime > one_sec ){
				turnOnLED(PORTG,LED2);
				previousTime = getCurrentTime();
				state = STATEB;
			}
		}
		break;
	case STATEB:
		if(button == GPIO_PIN_SET){
					if(getCurrentTime()-previousTime > one_hundred_millisec ){
							turnOffLED(PORTG,LED2);
							previousTime = getCurrentTime();
							state = FINAL;
					}
		}else{
			if(getCurrentTime()-previousTime > one_sec){
				turnOffLED(PORTG,LED2);
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
