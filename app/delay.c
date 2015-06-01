#include "delay.h"

uint32_t counter = 0;
uint32_t currentTime = 0;

//Calculate the current time being
uint32_t getCurrentTime(){
	if(counter++ >= 100){
		counter = 0;
			currentTime++;
	}
	return currentTime;
}

int delay(uint32_t delayCycle){
	static uint32_t previousTime = 0;
	while((getCurrentTime() - previousTime) < delayCycle);
	previousTime = getCurrentTime();
}


