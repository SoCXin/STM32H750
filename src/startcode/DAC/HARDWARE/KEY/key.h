#ifndef _KEY_H
#define _KEY_H
#include "sys.h"
#include "delay.h"

#define WK_UP        HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) //WK_UP����PA0
#define KEY0        HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)  //KEY0����PA1
#define KEY1        HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)  //KEY1����PA2


void KEY_Init(void);
u8 KEY_Scan(void);

#endif


