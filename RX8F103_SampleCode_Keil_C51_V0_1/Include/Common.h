/**
 ****************************************************************************
 * @file    Common.h
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
 
#ifndef __Common_H__
#define __Common_H__
 
typedef bit                   BIT;
typedef unsigned char         UINT8;
typedef unsigned int          UINT16;
typedef unsigned long         UINT32;

typedef unsigned char         uint8_t;
typedef unsigned int          uint16_t;
typedef unsigned long         uint32_t;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t  u32;

#define set_GPIO1					P0_0 = 1
#define clr_GPIO1					P0_0 = 0

#define HRCDIV_1			0
#define HRCDIV_2			1
#define HRCDIV_4			2
#define HRCDIV_8			3
#define HRCDIV_16			4
#define HRCDIV_32			5
#define HRCDIV_64			6
#define HRCDIV_128		7

#define	HRC_CLK_Frequence

#ifdef FOSC_160000
	#define sysclk			16000000/(1<<HRCDIV_1)			//系统时钟
#endif

#define baudrat_clk		sysclk/16										//波特率时钟

#define EEPROM1       0x1C00
#define EEPROM2       0x1d00

void  InitialUART0(UINT32 u32Baudrate); 					//T1M = 1, SMOD = 1
void  InitialUART1(UINT32 u32Baudrate);
void 	EUart0_SendOneChar(u8 c);
void 	EUart0_SendString(u8 *st);
void 	Send_Data_To_UART0 (u8 c);
u8 Receive_Data_From_UART0(void);
void  Send_Data_To_UART1(u8 c);
u8 Receive_Data_From_UART1(void);
void EUart1_SendOneChar(u8 c);
void EUart1_SendString(u8 *st);
void EUart1_SendReg(u8 testreg);
void putHEX(unsigned char HEXValue);
u8 IAPUserReadData(u8 ADDRH,u8 ADDRL);
void IAPUserWriteData(u8 ADDRH,u8 ADDRL,u8 WriteData);
void IAPUserEraseData(u8 ADDRH,u8 ADDRL);
unsigned char READ_EEPROM(unsigned int Address);
void WRITE_EEPROM(unsigned int Address,unsigned char Data);


extern bit BIT_TMP;

#endif
