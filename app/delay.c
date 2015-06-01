#include "delay.h"

uint32_t counter = 0;
uint32_t currentTime = 0;
static uint32_t previousTime = 0;

//Calculate the current time being
uint32_t getCurrentTime(){
	if(counter++ >= 100){
		counter = 0;
			currentTime++;
	}
	return currentTime;
}

int delay(uint32_t delayCycle){
	while((getCurrentTime() - previousTime) < delayCycle);
	previousTime = getCurrentTime();
}

int halfSecHasNotExpire(){
	if(getCurrentTime() - 0 < 1000){
		return 1;
	}else{
		currentTime = 0;
		return 0;
	}
}

