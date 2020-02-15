#include "screen.h"

screen::screen()
{
	uart_init(9600);
}

screen::~screen()
{
	
}

void screen::update(u8 vol,u8 channel)
{
//�������һ��ADC1�������ת�����
	u8 suffer[3] = {0xff,0xff,0xff};
	u8 Tx_data_counter = 0;
	//printf("add 1,0,%d",VOLTAGE/16);
	printf("add 1,%d,%d",channel,vol);
	while(1)
	{
		if((USART1->SR & (1<<7))) //�������ݼĴ�����
		{
			USART1->DR = suffer[Tx_data_counter];
			Tx_data_counter++;
			if(Tx_data_counter == 3)
			{
				Tx_data_counter = 0;
				//USART1->CR1 |= 1<<5; //ʹ�ܽ����ж�
				break;
			}
		}		
	}	
}

void screen::clear_screen(void)
{
//�������һ��ADC1�������ת�����
	u8 suffer[3] = {0xff,0xff,0xff};
	u8 Tx_data_counter = 0;
	printf("cle 1,255");
	while(1)
	{
		if((USART1->SR & (1<<7))) //�������ݼĴ�����
		{
			USART1->DR = suffer[Tx_data_counter];
			Tx_data_counter++;
			if(Tx_data_counter == 3)
			{
				Tx_data_counter = 0;
				//USART1->CR1 |= 1<<5; //ʹ�ܽ����ж�
				break;
			}
		}		
	}	
}

void screen::txt_send(float val,const char* id,const char* name)
{
//�������һ��ADC1�������ת�����
	u8 suffer[3] = {0xff,0xff,0xff};
	u8 Tx_data_counter = 0;
	printf("%s.txt=\"%.3f %s\"",id,val,name);
	while(1)
	{
		if((USART1->SR & (1<<7))) //�������ݼĴ�����
		{
			USART1->DR = suffer[Tx_data_counter];
			Tx_data_counter++;
			if(Tx_data_counter == 3)
			{
				Tx_data_counter = 0;
				//USART1->CR1 |= 1<<5; //ʹ�ܽ����ж�
				break;
			}
		}		
	}	
}

