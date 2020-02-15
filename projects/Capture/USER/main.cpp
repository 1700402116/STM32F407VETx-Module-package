/*
 **********************************************************************
 *Copyright(c)		Lance Zhang
 *Identification	CHIC
 *Describtion		Template
 *
 *Present Version	1.0
 *Writer			Lance Zhang
 *Date				8/16/2018
 **********************************************************************
**/

extern "C"
{
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "lcd.h"
#include "Interrupt.h"
}
#include "LCD_CPP.h"
#include "Capture.h"

extern u8  TIM5CH1_CAPTURE_STA;		//���벶��״̬		    				
extern u32	TIM5CH1_CAPTURE_VAL;	//���벶��ֵ  
u16 pwmval=0;    
u8 dir=1;  

int main(void)
{ 	
	long long temp=0; 
	//����ϵͳ�ж����ȼ�����2
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	//��ʼ����ʱ����
	delay_init(168);  
	
	LCD_Config	lcd;
	Capture cap;
   	while(1)
	{			
 		delay_ms(10);
		//�ɹ�������һ�θߵ�ƽ
 		if(TIM5CH1_CAPTURE_STA&0X80)        
		{
			//���[0:5]����ֵ���õ�����ֵ
			temp=TIM5CH1_CAPTURE_STA&0X3F;
			//���ʱ���ܺ�
			temp*=0XFFFFFFFF;
			//�õ��ܵĸߵ�ƽʱ��
			//temp+=TIM5CH1_CAPTURE_VAL;		   
			LCD_ShowNum(30,70,1000000/(TIM5CH1_CAPTURE_VAL*2),16,16);
			//������һ�β���
			TIM5CH1_CAPTURE_STA=0;			     
		}
	}
}


