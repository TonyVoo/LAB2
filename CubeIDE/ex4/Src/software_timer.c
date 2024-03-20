/*
 * software_timer.c
 *
 *  Created on: Mar 20, 2024
 *      Author: Hungly1402
 */

#include "software_timer.h"
#define MAX_COUNTER 10
#define TIMER_TICK 10
int timer_counter[MAX_COUNTER];
int timer_flag[MAX_COUNTER];

// set counter
void setTimer(int index, int value){
	timer_counter[index] = value/ TIMER_TICK;
	timer_flag[index] = 0;
}

// check if the timer is expired?
int isTimerExpired(int index){
	if(timer_flag[index] == 1){
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}

//function to be invoked in Timer_ISR
void timerRun(){
	for(int i = 0; i< MAX_COUNTER; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0) timer_flag[i] = 1;
		}
	}
}

