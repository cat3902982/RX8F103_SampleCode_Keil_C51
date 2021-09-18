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
	set_ADPORTEN3;								//ADC Port Enable
	set_VREF_T;										//ADC Init
	set_VREF_EN;									//ADC Init
	set_ADCEN;										//ADC Init
	clr_SV_SEL0;									//set ADC channnel
	clr_SV_SEL1;									//set ADC channnel
	clr_SV_SEL2;									//set ADC channnel
	InitialUART1(9600);
	EUart1_SendString("Hello Raysilicon!\r\n");

	for(;;)
	{
			ADCVREFSEL = 0x01;
			Timer0_Delay1ms(1000);
			ADCVREFSEL = 0xFF;
			Timer0_Delay1ms(1000);
	}
}