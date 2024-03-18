/*
 * software_timer.h
 *
 *  Created on: Mar 15, 2024
 *      Author: khang
 */

#ifndef SRC_SOFTWARE_TIMER_H_
#define SRC_SOFTWARE_TIMER_H_

void setTimer(int index, int value);
int isTimerExpired(int index);

void timerRun();

#endif /* SRC_SOFTWARE_TIMER_H_ */
