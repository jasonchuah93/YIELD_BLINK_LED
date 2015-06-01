#include "firstAssignment.h"
#include "delay.h"

int LED1_SM(State state){
	static uint32_t previousTime = 0;
		switch(state){
		case INITIAL:
			initLED(LED1);
			previousTime = getCurrentTime();
			state = STATEA;
			break;
		case STATEA:
			if(getCurrentTime()-previousTime >  one_hundred_twenty_millisec){
				turnOnLED(PORTG,LED1);
				previousTime = getCurrentTime();
				state = STATEB;
			}
			break;
		case STATEB:
			if(getCurrentTime()-previousTime >  one_hundred_twenty_millisec){
				turnOffLED(PORTG,LED1);
				previousTime = getCurrentTime();
				state = FINAL;
			}
			break;
		case FINAL:
			state = INITIAL;
			break;
		}
		return state;
}
