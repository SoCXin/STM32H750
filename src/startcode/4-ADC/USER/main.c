
#include "sys.h"
#include "delay.h"
#include "led.h"
#include "key.h"
#include "usart.h"
#include "timer.h"
#include "adc.h"
#include "oled.h"
int main(void)
{
  u16 adcx;
	float temp;
	u8 add;
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				              //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz 
	delay_init(400);				        //延时初始化
	uart_init(115200);			      	//串口初始化
	KEY_Init();					          	//初始化KEY
	MY_ADC_Init();                  //初始化ADC
	OLED_Init();                    //初始化OLED
	while(1)
	{
    adcx=Get_Adc_Average(18,20);//获取通道19的转换值，20次取平均
		OLED_ShowString(0,0,"data:",16);
		OLED_ShowNum(40,0,adcx,5,16); //显示ADCC采样后的原始值
		temp=(float)adcx*(3.3/65536);//获取计算后的带小数的实际电压值，比如3.1111
		adcx=temp;                   //赋值整数部分给adcx变量，因为adcx为u16整形
		OLED_ShowNum(48,24,adcx,1,16); //显示电压值的整数部分，3.1111的话，这里就是显示3
		temp-=adcx;                  //把已经显示的整数部分去掉，留下小数部分，比如3.1111-3=0.1111
		temp*=1000;                  //小数部分乘以1000，例如：0.1111就转换为111.1，相当于保留三位小数。
		OLED_ShowNum(64,24,temp,3,16); //显示小数部分（前面转换为了整形显示），这里显示的就是111.
		add=temp;
		OLED_ShowString(0,24,"Value:",16);
		OLED_ShowString(56,24,".",16);
		OLED_ShowString(88,24,"V",16);
		OLED_Refresh();
		delay_ms(250);	
	}
}

