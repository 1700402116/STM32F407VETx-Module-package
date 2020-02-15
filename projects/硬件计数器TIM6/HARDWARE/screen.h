/**********************************************************************
 *Copyright(c)		Lance Zhang
 *Identification	CHIC
 *Describtion		Template
 *
 *Present Version	1.0
 *Writer			Lance Zhang
 *Date				8/16/2018
 **********************************************************************
**/
/**********************************************************************
 *@Attention 	���ڳ�ʼ�����ڣ��˹��ܿ��ܻ�������usart���ܳ�ͻ
 *@Attention	�õ�delay.h
 **********************************************************************
**/
#ifndef	__SCREEN_H
#define __SCREEN_H
extern "C"
{
	#include "sys.h"
	#include "usart.h"
	#include "delay.h"
}

//�ţ�����������ʲô������������
//#define	freq	0x00;
//#define	DC		0x01
//#define AC		0x02

class	screen
{
public:
	screen();
	~screen();

	void update(u8 vol,u8 channel = 0);
	void clear_screen(void);
	void txt_send(float val,const char* id,const char* name);
	//���ʹ��ı���Ϣ
	void info_send(const char* info,const char* id);
	//���ƽ�����
	void prosess_bar(u8 status,const char* id = "j0");
	//����������ɫ
	void txt_color(const char* id,const char* color = "RED");
	//ֱ��ͨ�����ڷ��ʹ���
	void send(const char* cmd = "");
	//��ҳ
	void to_page(u8 page);

public:
	void func_start();
};

#endif
