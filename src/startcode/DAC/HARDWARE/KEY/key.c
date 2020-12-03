#include "key.h"


//������ʼ������
void KEY_Init(void)
{
	GPIO_InitTypeDef GPIO_Initure;

	__HAL_RCC_GPIOA_CLK_ENABLE();           //����GPIOAʱ��

	GPIO_Initure.Pin=GPIO_PIN_0;            //PA0
	GPIO_Initure.Mode=GPIO_MODE_INPUT;      //����
	GPIO_Initure.Pull=GPIO_PULLDOWN;        //����
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_VERY_HIGH;     //����
	HAL_GPIO_Init(GPIOA,&GPIO_Initure);
	
	GPIO_Initure.Pin=GPIO_PIN_1|GPIO_PIN_2;            //PA1,PA2 
	GPIO_Initure.Mode=GPIO_MODE_INPUT;      //����
	GPIO_Initure.Pull=GPIO_PULLUP;        //����
	GPIO_Initure.Speed=GPIO_SPEED_FREQ_VERY_HIGH;     //����
	HAL_GPIO_Init(GPIOA,&GPIO_Initure);
}

//����������
//���ذ���ֵ
//ע��˺�������Ӧ���ȼ�,KEY0>KEY1>WK_UP
u8 KEY_Scan(void)
{
	if((KEY0==0||KEY1==0||WK_UP==1))
	{
		delay_ms(10);
		if(KEY0==0)        return 1;
		else if(KEY1==0)   return 2;
		else if(WK_UP==1)  return 3;
	}
	return 0;   //�ް�������
}















