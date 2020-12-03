
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "key.h"
int main(void)
{
	u8 key;
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				              //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz
	delay_init(400);				        //延时初始化
	uart_init(115200);			      	//串口初始化
	LED_Init();						          //初始化LED
	KEY_Init();                     //初始化按键
	while(1)
	{
		key=KEY_Scan();
		switch(key)
		{
			case 1:
				LED0(0);
				LED1(1);
				break;

			case 2:
				LED0(1);
				LED1(0);
				break;

			case 3:
				LED0(0);
				LED1(0);
				break;
		}
	}
}

