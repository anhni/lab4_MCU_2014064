/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: anhni
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define MODE_INIT 0
#define MODE_1 1
#define MODE_2 2
#define MODE_3 3
#define MODE_4 4
#define MODE_WAITING 5

#define MODE_LED_INIT 0
#define MODE_LED_BLINKY 1

extern int mode;
extern int mode_led;
extern int counter;

extern int TIMER_CYCLE;


#endif /* INC_GLOBAL_H_ */
