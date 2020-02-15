#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "stdarg.h"
#include "stm32f4xx_conf.h"
#include "sys.h" 

#define DIY

#define USART_REC_LEN  			200  	//�����������ֽ��� 200
#define EN_USART1_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����

extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		//����״̬���	

//����봮���жϽ��գ��벻Ҫע�����º궨��
void uart_init(u32 bound);

#ifdef	DIY
#define EN_USART2_RX			1
extern u8  USART2_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART2_RX_STA;         		//����״̬���

void uart2_init(u32 bound);
void printf_u2(const char *fomat, ...);
#endif

#endif


