//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-10-31
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018-10-31
//All rights reserved
//******************************************************************************/
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "key.h"
int main(void)
{
	u8 key;
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				              //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);				        //��ʱ��ʼ��
	uart_init(115200);			      	//���ڳ�ʼ��
	LED_Init();						          //��ʼ��LED
	KEY_Init();                     //��ʼ������
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

