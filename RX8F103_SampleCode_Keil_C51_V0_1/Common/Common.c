/**
 ****************************************************************************
 * @file    Common.c
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

#include <stdio.h>
#include "RX8F103.h"
#include "Define.h"
#include "Common.h"
#include "Delay.h"
#include "SFR_Assemble.h"
#include "Function_Assemble.h"

//----------------------------------------------------------------------------------
// use timer1 as Baudrate generator, Maxmum Baudrate can ???? bps @ 16MHZ
//----------------------------------------------------------------------------------
void InitialUART0(u32 u32Baudrate)
{
	set_UART0PORTEN;	//串口0端口使能
	S0CON = 0x50;			//SCON: Mode 1, 8-bit UART, Enable Rcvr
	S0RELL = LOBYTE(1024 - (baudrat_clk/u32Baudrate));		//Baud rate  = SYSCK/(16×(1024-S1REL))  SYSCK跟CLKDIV寄存器有关
	S0RELH = HIBYTE(1024 - (baudrat_clk/u32Baudrate));		//S1RELH + S1RELL  构成波特率设置S1REL[9:0] 波特率：115200

	set_ES0;					//允许串口中断位
}

u8 Receive_Data_From_UART0(void)
{
    u8 c;  
    while (!RI0);
    c = S0BUF;
    RI0 = 0;
    return (c);
}

void Send_Data_To_UART0 (u8 c)
{
    TI0 = 0;
    S0BUF = c;
    while(TI0==0);
}

//从串口0发送一个字符
void EUart0_SendOneChar(u8 c)
{
	clr_ES0;			//发送数据时关串口中断
	clr_TI0;			//清TI位
	S0BUF = c;		//将待发送字符放入串口数据缓冲寄存器，并开始传输。
	while(!TI0);	//等待传送结束。当字符发送结束后由硬件置位请求中断，
								//此时while循环结束，而串口中断处理函数需等到ES重新置1后才可能响应。
	clr_TI0;			//软件清TI位，亦可在中断处理函数中清0
	set_ES0;			//开串口中断
}

void EUart0_SendString(u8 *st)
{
	while(*st)
	{
		EUart0_SendOneChar(*st++);
	}
}


//---------------------------------------------------------------
void InitialUART1(u32 u32Baudrate) //use timer3 as Baudrate generator
{
	set_UART1PORTEN;				//串口1端口使能
	S1CON |= (S1M0+REN1);		//SCON: Mode 1, 8-bit UART, Enable Rcvr
	S1RELL = LOBYTE(1024 - (baudrat_clk/u32Baudrate));		//Baud rate  = SYSCK/(16×(1024-S1REL))  SYSCK跟CLKDIV寄存器有关
	S1RELH = HIBYTE(1024 - (baudrat_clk/u32Baudrate));		//S1RELH + S1RELL  构成波特率设置S1REL[9:0] 波特率：115200
	set_ES1;								//允许串口1中断位
}

u8 Receive_Data_From_UART1(void)
{
    u8 c;
    while (S1CON & RI1);
    c = S1BUF;
    clr_RI1;
    return (c);
}

void Send_Data_To_UART1 (u8 c)
{
	S1CON&=~TI1;					//清TI位
	S1BUF = c;						//将待发送字符放入串口数据缓冲寄存器，并开始传输。
	while(!(S1CON&TI1));	//等待传送结束。当字符发送结束后由硬件置位请求中断，
												//此时while循环结束，而串口中断处理函数需等到ES重新置1后才可能响应。
}

//从串口1发送一个字符
void EUart1_SendOneChar(u8 c)
{
	clr_ES1;							//发送数据时关串口中断
	clr_TI1;							//清TI位
	S1BUF = c;						//将待发送字符放入串口数据缓冲寄存器，并开始传输。
	while(!(S1CON&TI1));	//等待传送结束。当字符发送结束后由硬件置位请求中断，
												//此时while循环结束，而串口中断处理函数需等到ES重新置1后才可能响应。
	clr_TI1;							//软件清TI位，亦可在中断处理函数中清0
	set_ES1;							//开串口中断
}

//向串口1发送字符串
void EUart1_SendString(u8 *st)
{
	while(*st)
	{
		EUart1_SendOneChar(*st++);
	}
}

unsigned char HexToChar(unsigned char temp)
{
	unsigned char dst;
	if (temp < 10)
	{
		dst = temp + '0';
	}
	else
	{
		dst = temp -10 +'A';
	}
	return dst;
}

void putHEX(unsigned char HEXValue)
{
	EUart1_SendOneChar(HexToChar(HEXValue >> 4));
	EUart1_SendOneChar(HexToChar(HEXValue & 0x0F));
}

void EUart1_SendReg(u8 testreg)
{
		EUart1_SendString("testreg"); 
		EUart1_SendString("=0X");
		putHEX(testreg);
		EUart1_SendString("\r\n");
}

u8 IAPUserReadData(u8 ADDRH,u8 ADDRL)
{
	u8 ReadData;
	
	IAPDATA  = 0x00;
	IAPCTRL  = 0x00;		//读操作
	IAPLOCK  = 0x5A;
	IAPLOCK  = 0xA5;		//进入用户模式

	IAPADDRH = ADDRH;
	IAPADDRL = ADDRL;		//页地址
	IAPRD = 1;					//读操作
	IAPGO = 1;					//program
	_nop_();
	while(IAPGO != 0);	//判断是否操作完成
	if(IAPER == 0 & IAPFAIL == 0 )	//判断读的数据是否正确
	{
		ReadData = IAPDATA;
	}
	
	EUart1_SendString("IAP User Read DATA:");
	putHEX(ReadData);
	EUart1_SendString("\r\n");
	return ReadData;
}

void IAPUserWriteData(u8 ADDRH,u8 ADDRL,u8 WriteData)
{
	IAPCTRL  = 0x00;	//写操作
	IAPLOCK  = 0x5A;
	IAPLOCK  = 0xA5;	//进入用户模式
	IAPDATA  = WriteData;
	
	IAPADDRH = ADDRH;
	IAPADDRL = ADDRL;	//页地址
	IAPWR = 1;			//写操作
	IAPGO = 1;			//program
	_nop_();
	while(IAPGO != 0);	//判断是否操作完成
	EUart1_SendString("IAP User Write DATA OK\r\n");
}

void IAPUserEraseData(u8 ADDRH,u8 ADDRL)
{
	IAPCTRL  = 0x00;	//写操作
	IAPLOCK  = 0x5A;
	IAPLOCK  = 0xA5;	//进入用户模式
	
	IAPADDRH = ADDRH;
	IAPADDRL = ADDRL;	//页地址
	IAPER = 1;				//擦除操作
	IAPGO = 1;				//启动
	_nop_();
	while(IAPGO != 0);	//判断是否操作完成
	EUart1_SendString("IAP User Erase DATA OK\r\n");
}

unsigned char READ_EEPROM(unsigned int Address)   
{
  unsigned char Data=0;
  unsigned int TimeOutCunt=0xffff;
  IAPDATA=0x00;  //???????
  IAPCTRL=0x00;
  IAPLOCK=0x5A;
  IAPLOCK=0xA5;  //??
  IAPADDRH=Address>>8;
  IAPADDRL=Address;
  IAPRD=1; //?
  IAPGO=1; //????
  _nop_();
	while(IAPGO!=0) {if(--TimeOutCunt==0) break;}  //????????
  if(IAPER==0&&IAPFAIL==0) Data=IAPDATA;  //??????????
  return Data;
}
/***?EEPROM***/
void WRITE_EEPROM(unsigned int Address,unsigned char Data)
{
  unsigned int TimeOutCunt=0xffff;
  IAPCTRL=0x00;
  IAPLOCK=0x5A;
  IAPLOCK=0xA5;
  IAPADDRH=Address>>8;
  IAPADDRL=Address;
  IAPER=1;
  IAPGO=1;
	_nop_();
  while(IAPGO!=0) {if(--TimeOutCunt==0) break;}
  TimeOutCunt=0xffff;

  IAPCTRL=0x00;
  IAPLOCK=0x5A;
  IAPLOCK=0xA5;  //??
  IAPDATA=Data;
  IAPADDRH=Address>>8;
  IAPADDRL=Address;
  IAPWR=1;  //?
  IAPGO=1;  //????
	_nop_();
  while(IAPGO!=0) {if(--TimeOutCunt==0) break;}
}
/*==========================================================================*/
#ifdef SW_Reset
void SW_Reset(void)
{
//    TA = 0xAA;
//    TA = 0x55;
//    set_SWRST;
}
#endif
/*==========================================================================*/
