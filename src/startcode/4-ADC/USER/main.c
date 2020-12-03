
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
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				              //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);				        //��ʱ��ʼ��
	uart_init(115200);			      	//���ڳ�ʼ��
	KEY_Init();					          	//��ʼ��KEY
	MY_ADC_Init();                  //��ʼ��ADC
	OLED_Init();                    //��ʼ��OLED
	while(1)
	{
    adcx=Get_Adc_Average(18,20);//��ȡͨ��19��ת��ֵ��20��ȡƽ��
		OLED_ShowString(0,0,"data:",16);
		OLED_ShowNum(40,0,adcx,5,16); //��ʾADCC�������ԭʼֵ
		temp=(float)adcx*(3.3/65536);//��ȡ�����Ĵ�С����ʵ�ʵ�ѹֵ������3.1111
		adcx=temp;                   //��ֵ�������ָ�adcx��������ΪadcxΪu16����
		OLED_ShowNum(48,24,adcx,1,16); //��ʾ��ѹֵ���������֣�3.1111�Ļ������������ʾ3
		temp-=adcx;                  //���Ѿ���ʾ����������ȥ��������С�����֣�����3.1111-3=0.1111
		temp*=1000;                  //С�����ֳ���1000�����磺0.1111��ת��Ϊ111.1���൱�ڱ�����λС����
		OLED_ShowNum(64,24,temp,3,16); //��ʾС�����֣�ǰ��ת��Ϊ��������ʾ����������ʾ�ľ���111.
		add=temp;
		OLED_ShowString(0,24,"Value:",16);
		OLED_ShowString(56,24,".",16);
		OLED_ShowString(88,24,"V",16);
		OLED_Refresh();
		delay_ms(250);	
	}
}

