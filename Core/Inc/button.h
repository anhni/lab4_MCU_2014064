/*
 * button.h
 *
 *  Created on: Sep 24, 2022
 *      Author: anhni
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include"main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button0_flag;
extern int button1_flag;
extern int button2_flag;
extern int button0_1s_flag;
extern int button1_3s_flag;
extern int button2_3s_flag;
void getKeyInput_0();
void getKeyInput_1();
void getKeyInput_2();
int is_Button0_Pressed();
int is_Button1_Pressed();
int is_Button2_Pressed();
int is_Button0_Pressed_1s();
int is_Button1_Pressed_3s();
int is_Button2_Pressed_3s();


#endif /* INC_BUTTON_H_ */
