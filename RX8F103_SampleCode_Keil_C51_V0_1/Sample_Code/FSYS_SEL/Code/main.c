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

//========================================================================
//  The test process:
//	1. Power on is run as default HRC, show LED Fsys tickle faster
// 	2. toggle P1.0 to GND.
//	2. call modify Fsys code to LRC.
//	3. LED tickle speed slowly than before.
//========================================================================

void main(void)
{
/* Note
  MCU power on system clock is HRC (16 MHz)
	Please keep P1.0 HIGH before you want to modify Fsys to LIRC
*/

	Set_All_GPIO_Default_IO_Mode;	//IO 初始化
	set_RSTPORTEN;								//使能复位IO功能
	P00_PushPull_Mode;						//设置P00口为输出功能
	set_BEEPPORTEN;								//System Clock Fsy/2 Output Enable
//Please measure P0.3 (BEEP) pin for system clock output, it should as system clock;

	while (P1_0)																// when P1.0 keep high, clock out HRC
	{   
			clr_GPIO1;															// Check LED output tickle time
			Timer0_Delay1ms(200);
			set_GPIO1;
			Timer0_Delay1ms(200);
	}

	clr_BEEPPORTEN;		//Disable Beepporten
	clr_SYSCLK_SEL;		//Select ILRC for system clock
	set_BEEPPORTEN;		//Enable Beepporten
	
	while(1)
	{
			set_P00;
			Timer1_Delay1ms(300);				
			clr_P00;
			Timer1_Delay1ms(300);
	}
}

