//////////////////////////////////////////////////////////////////////////////////
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : HuangKai
//  生成日期   : 2018-10-31
// 作    者   : HuangKai
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 中景园电子2018-10-31
//All rights reserved
//******************************************************************************/
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
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				              //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz
	delay_init(400);				        //延时初始化
	uart_init(115200);			      	//串口初始化
	KEY_Init();					          	//初始化KEY
	DAC1_Init();                    //初始化DAC
	OLED_Init();                    //初始化OLED
	DAC1_Set_Vol(2000);//vol:0~3300,代表0~3.3V  请用万用表测量PA4引脚
	while(1)
	{
	}
}

