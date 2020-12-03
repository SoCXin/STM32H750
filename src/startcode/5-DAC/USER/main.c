
#include "sys.h"
#include "delay.h"
#include "led.h"
#include "key.h"
#include "usart.h"
#include "timer.h"
#include "dac.h"
#include "oled.h"
int main(void)
{
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				              //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz
	delay_init(400);				        //��ʱ��ʼ��
	uart_init(115200);			      	//���ڳ�ʼ��
	KEY_Init();					          	//��ʼ��KEY
	DAC1_Init();                    //��ʼ��DAC
	OLED_Init();                    //��ʼ��OLED
	DAC1_Set_Vol(2000);//vol:0~3300,����0~3.3V  �������ñ����PA4����
	while(1)
	{
	}
}

