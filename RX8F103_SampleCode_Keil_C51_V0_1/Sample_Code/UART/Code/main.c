/**
 ****************************************************************************
 * @file    main.c
 * @author  Cat.chen
 * @version V0.1
 * @date    2021/03/15
 * @brief   C Template file for RX8F103 microcontroller.
 ****************************************************************************
 *  UNPUBLISHED PROPRIETARY SOURCE CODE
 *  Copyright (c) 2021 RaySilicon Inc.
 *
 *  The contents of this file may not be disclosed to third parties, copied or
 *  duplicated in any form, in whole or in part, without the prior written
 *  permission of RaySilicon Corporation.
 *  RaySilicon Technoledge Corp. 
 *  Website: http://www.raySilicon.com
 *  E-Mail : catchen@raySilicon.com
 *  Date   : Mar/15/2021
 ****************************************************************************
 **/
 
#include "RX8F103.h"
#include "Define.h"
#include "Common.h"
#include "Delay.h"
#include "SFR_Assemble.h"
#include "Function_Assemble.h"

/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/
enum STATUS
{
    WAIT_STATUS = 0,
    RECIVE0_STATUS,
    RECIVE1_STATUS,
}ReciveStatus;

//#define WAIT_STATUS			0
//#define RECIVE0_STATUS	1
//#define RECIVE1_STATUS	2
//#define RECIVE2_STATUS	3

u8 Dat0[3] = {0,0,0}; 
u8 Dat1[3] = {0,0,0}; 

u8 ReciveValue,rcvstatus;
bit ReciveBit;
void main(void)
{
	Set_All_GPIO_Default_IO_Mode;
	CLKDIV = 0x02;								//设置系统时钟4分频，Fsys = 4MHz
	set_RSTPORTEN;								//使能复位端口
	InitialUART0(9600);	
	InitialUART1(9600);
	EUart1_SendString("MON51 Test\r\n");
	P10_Input_Pullup_Mode;				//设置为上拉输入
	set_P1IEN0;										//开启外部中断
	set_EA;	
	ReciveStatus = WAIT_STATUS;
	for(;;)
	{
		if(ReciveBit)
		{
			ReciveBit = 0;
			switch(ReciveStatus)
			{
				case WAIT_STATUS:
				{
					Dat0[0] = ReciveValue;
					ReciveStatus = RECIVE0_STATUS;
				}break;
				
				case RECIVE0_STATUS:
				{
					Dat0[1] = ReciveValue;
					ReciveStatus = RECIVE1_STATUS;		
				}break;
				
				case RECIVE1_STATUS:
				{
					Dat0[2] = ReciveValue;
					ReciveStatus = WAIT_STATUS;
					EUart1_SendReg(Dat0[0]);
					EUart1_SendReg(Dat0[1]);
					EUart1_SendReg(Dat0[2]);
				}break;
				
				default:
				{
					;
				}break;
			}
		}
	}
}

void HAL_UART0_ISR(void) interrupt EUART0_VECTOR //using 4
{
	if(S0CON & RI0)  										//接收中断
	{
		ReciveValue =S0BUF;								//读取接收到的数据
		ReciveBit = 1;
	}
	RI0 = 0;														//清中断标志位
}

void HAL_GPIO_ISR(void) interrupt EEXT0_VECTOR //using 0
{
	if (P1IRQ & 0x01)
	{
		EUart1_SendOneChar(0xFF);
		EUart1_SendOneChar(0xF7);
		EUart1_SendOneChar(0xEF);
		EUart1_SendOneChar(0xE7);
		EUart1_SendOneChar(0xDF);
		EUart1_SendOneChar(0xD7);
		EUart1_SendOneChar(0xCF);
		EUart1_SendOneChar(0xC7);
		EUart1_SendOneChar(0xBF);
		EUart1_SendOneChar(0xB7);
		EUart1_SendOneChar(0xAF);
		EUart1_SendOneChar(0xA7);
		EUart1_SendOneChar(0x9F);
		EUart1_SendOneChar(0x97);
	}
	set_PORTIRQCLREN;
	P1IRQ = 0x00;
	clr_PORTIRQCLREN;
}
