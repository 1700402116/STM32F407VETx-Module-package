/*********************************************************************
*�ж϶���������ܣ�
*	����������һ��Сд
*	���������ܳ�ʼ������
*		  ����ѡ����
*********************************************************************
*
*�ļ�����EXTI.h
*����⣺stm32f4xx_syscfg.c, stm32f4xx_exti.h
*********************************************************************/
//#ifndef __EXTI
//#define __EXTI

//extern "C"{
//#include "stm32f4xx.h"
//#include "stm32f4xx_gpio.h"
//#include "delay.h"
//#include "stm32f4xx_exti.h"
//#include "stm32f4xx_syscfg.h"
//}

//#include "LCD_CPP.h"

//class exti
//{
//public:
//	exti();
//	~exti();
//private:
//	void func_init();
//	void EXIO_Init();
//	//������
//	void LED_Init();
//	LCD_Config lcd;
//};


//#endif
#ifndef __EXTI
#define __EXIT	 
extern "C"
{
	#include "sys.h" 	
}

void EXTIX_Init(void);	//�ⲿ�жϳ�ʼ��
void EXIO_Init(void);
#endif
