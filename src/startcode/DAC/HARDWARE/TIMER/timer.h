#ifndef _TIMER_H
#define _TIMER_H
#include "sys.h"

extern TIM_HandleTypeDef TIM2_Handler;      //��ʱ��2PWM��� 
extern TIM_OC_InitTypeDef TIM2_CH4Handler; 	//��ʱ��2ͨ��3���

void TIM2_Init(u16 arr,u16 psc);    		//��ʱ����ʼ��
void TIM2_PWM_Init(u16 arr,u16 psc);
void TIM_SetTIM2Compare3(u32 compare);
#endif

