#ifndef _TIMER_H
#define _TIMER_H
#include "sys.h"

extern TIM_HandleTypeDef TIM2_Handler;      //定时器2PWM句柄 
extern TIM_OC_InitTypeDef TIM2_CH4Handler; 	//定时器2通道3句柄

void TIM2_Init(u16 arr,u16 psc);    		//定时器初始化
void TIM2_PWM_Init(u16 arr,u16 psc);
void TIM_SetTIM2Compare3(u32 compare);
#endif

