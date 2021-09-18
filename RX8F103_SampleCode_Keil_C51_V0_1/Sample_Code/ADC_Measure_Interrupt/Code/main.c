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

void main(void)
{
	Set_All_GPIO_Default_IO_Mode;	//IO 初始化
	set_RSTPORTEN;								//使能复位IO功能
	Enable_ADC_AIN0;							//设置输入口
	SET_ADC_12BIT_MODE;						//设置模式
	SET_ADC_Vref_2V;							//设置参考电压
	ADC_Time_256Fsys;							//设置采样时间
	ADC_Sample_Hold_Time_260ADCLK;//设置采样保持时间
	set_ADCEN;										//ADC使能
	ADC_RUN;											//ADC运行
	clr_ADCIF;										//清ADC中断标志位
	set_EADC;											//使能ADC中断
	
	InitialUART1(9600);
	EUart1_SendString("Hello Raysilicon!\r\n");
	set_EA;												//使能总中断
	
	for(;;)
	{

	}
}

void ADCISR(void) interrupt EADC_VECTOR //using 2
{
	clr_ADCIF;										//清ADC中断标志位
//	ADCON1 &=0xDF;								//关闭ADC功能
	EUart1_SendOneChar(0xAA);
	EUart1_SendOneChar(ADDH);
	EUart1_SendOneChar(ADDL);
	EUart1_SendOneChar(0xEE);
}
