#include "testYield.h"

void testingSwitchCase(TaskBlock *tb){

	static int here= 0;
	startTask(tb);
	while(1){
	here = 1;
	yield(tb);
	here = 2;
	yield(tb);
	here = 3;
	}
	endTask(tb);

}
