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

//*****************  The Following is in define in Function_Assemble.h  ***************************
//****** Always include Function_Assemble.h call the define you want, detail see main(void) *******
//***********************************************************************************************
#if 0
////------------------- Define Port as Push Pull mode -------------------
//#define P00_PushPull_Mode						clr_P0OEN0
//#define P01_PushPull_Mode						clr_P0OEN1
//#define P02_PushPull_Mode						clr_P0OEN2
//#define P03_PushPull_Mode						clr_P0OEN3		//It's not can be used for output port
//#define P04_PushPull_Mode						clr_P0OEN4
//#define P05_PushPull_Mode						clr_P0OEN5
//#define P06_PushPull_Mode						clr_P0OEN6
//#define P07_PushPull_Mode						clr_P0OEN7
//#define P10_PushPull_Mode						clr_P1OEN0
//#define P11_PushPull_Mode						clr_P1OEN1
//#define P12_PushPull_Mode						clr_P1OEN2
//#define P13_PushPull_Mode						clr_P1OEN3
//#define P14_PushPull_Mode						clr_P1OEN4
//#define P15_PushPull_Mode						clr_P1OEN5
//#define P16_PushPull_Mode						clr_P1OEN6
//#define P17_PushPull_Mode						clr_P1OEN7
//#define P20_PushPull_Mode						clr_P2OEN0
//#define P21_PushPull_Mode						clr_P2OEN1
////------------------- Define Port as Input Only mode -------------------
//#define P00_Input_Mode							set_P0OEN0;set_P0PUN0;set_P0PDN0
//#define P01_Input_Mode							set_P0OEN1;set_P0PUN1;set_P0PDN1
//#define P02_Input_Mode							set_P0OEN2;set_P0PUN2;set_P0PDN2
//#define P03_Input_Mode							set_P0OEN3;set_P0PUN3;set_P0PDN3
//#define P04_Input_Mode							set_P0OEN4;set_P0PUN4;set_P0PDN4
//#define P05_Input_Mode							set_P0OEN5;set_P0PUN5;set_P0PDN5
//#define P06_Input_Mode							set_P0OEN6;set_P0PUN6;set_P0PDN6
//#define P07_Input_Mode							set_P0OEN7;set_P0PUN7;set_P0PDN7
//#define P10_Input_Mode							set_P1OEN0;set_P1PUN0;set_P1PDN0
//#define P11_Input_Mode							set_P1OEN1;set_P1PUN1;set_P1PDN1
//#define P12_Input_Mode							set_P1OEN2;set_P1PUN2;set_P1PDN2
//#define P13_Input_Mode							set_P1OEN3;set_P1PUN3;set_P1PDN3
//#define P14_Input_Mode							set_P1OEN4;set_P1PUN4;set_P1PDN4
//#define P15_Input_Mode							set_P1OEN5;set_P1PUN5;set_P1PDN5
//#define P16_Input_Mode							set_P1OEN6;set_P1PUN6;set_P1PDN6
//#define P17_Input_Mode							set_P1OEN7;set_P1PUN7;set_P1PDN7
//#define P20_Input_Mode							set_P2OEN0;set_P2PUN0;set_P2PDN0
//#define P21_Input_Mode							set_P2OEN1;set_P2PUN1;set_P2PDN1
////------------------- Define Port as Input Pullup mode -------------------
//#define P00_Input_Pullup_Mode				set_P0OEN0;clr_P0PUN0;set_P0PDN0
//#define P01_Input_Pullup_Mode				set_P0OEN1;clr_P0PUN1;set_P0PDN1
//#define P02_Input_Pullup_Mode				set_P0OEN2;clr_P0PUN2;set_P0PDN2
//#define P03_Input_Pullup_Mode				set_P0OEN3;clr_P0PUN3;set_P0PDN3
//#define P04_Input_Pullup_Mode				set_P0OEN4;clr_P0PUN4;set_P0PDN4
//#define P05_Input_Pullup_Mode				set_P0OEN5;clr_P0PUN5;set_P0PDN5
//#define P06_Input_Pullup_Mode				set_P0OEN6;clr_P0PUN6;set_P0PDN6
//#define P07_Input_Pullup_Mode				set_P0OEN7;clr_P0PUN7;set_P0PDN7
//#define P10_Input_Pullup_Mode				set_P1OEN0;clr_P1PUN0;set_P1PDN0
//#define P11_Input_Pullup_Mode				set_P1OEN1;clr_P1PUN1;set_P1PDN1
//#define P12_Input_Pullup_Mode				set_P1OEN2;clr_P1PUN2;set_P1PDN2
//#define P13_Input_Pullup_Mode				set_P1OEN3;clr_P1PUN3;set_P1PDN3
//#define P14_Input_Pullup_Mode				set_P1OEN4;clr_P1PUN4;set_P1PDN4
//#define P15_Input_Pullup_Mode				set_P1OEN5;clr_P1PUN5;set_P1PDN5
//#define P16_Input_Pullup_Mode				set_P1OEN6;clr_P1PUN6;set_P1PDN6
//#define P17_Input_Pullup_Mode				set_P1OEN7;clr_P1PUN7;set_P1PDN7
//#define P20_Input_Pullup_Mode				set_P2OEN0;clr_P2PUN0;set_P2PDN0
//#define P21_Input_Pullup_Mode				set_P2OEN1;clr_P2PUN1;set_P2PDN1
////------------------- Define Port as Input Pulldown mode -------------------
//#define P00_Input_Pulldown_Mode			set_P0OEN0;set_P0PUN0;clr_P0PDN0
//#define P01_Input_Pulldown_Mode			set_P0OEN1;set_P0PUN1;clr_P0PDN1
//#define P02_Input_Pulldown_Mode			set_P0OEN2;set_P0PUN2;clr_P0PDN2
//#define P03_Input_Pulldown_Mode			set_P0OEN3;set_P0PUN3;clr_P0PDN3
//#define P04_Input_Pulldown_Mode			set_P0OEN4;set_P0PUN4;clr_P0PDN4
//#define P05_Input_Pulldown_Mode			set_P0OEN5;set_P0PUN5;clr_P0PDN5
//#define P06_Input_Pulldown_Mode			set_P0OEN6;set_P0PUN6;clr_P0PDN6
//#define P07_Input_Pulldown_Mode			set_P0OEN7;set_P0PUN7;clr_P0PDN7
//#define P10_Input_Pulldown_Mode			set_P1OEN0;set_P1PUN0;clr_P1PDN0
//#define P11_Input_Pulldown_Mode			set_P1OEN1;set_P1PUN1;clr_P1PDN1
//#define P12_Input_Pulldown_Mode			set_P1OEN2;set_P1PUN2;clr_P1PDN2
//#define P13_Input_Pulldown_Mode			set_P1OEN3;set_P1PUN3;clr_P1PDN3
//#define P14_Input_Pulldown_Mode			set_P1OEN4;set_P1PUN4;clr_P1PDN4
//#define P15_Input_Pulldown_Mode			set_P1OEN5;set_P1PUN5;clr_P1PDN5
//#define P16_Input_Pulldown_Mode			set_P1OEN6;set_P1PUN6;clr_P1PDN6
//#define P17_Input_Pulldown_Mode			set_P1OEN7;set_P1PUN7;clr_P1PDN7
//#define P20_Input_Pulldown_Mode			set_P2OEN0;set_P2PUN0;clr_P2PDN0
//#define P21_Input_Pulldown_Mode			set_P2OEN1;set_P2PUN1;clr_P2PDN1
////-------------------Define Port as Oen Drain mode -------------------
//#define P00_OpenDrain_Mode_EN			 	clr_P0ODN0
//#define P01_OpenDrain_Mode_EN			 	clr_P0ODN1
//#define P02_OpenDrain_Mode_EN			 	clr_P0ODN2
//#define P03_OpenDrain_Mode_EN			 	clr_P0ODN3
//#define P04_OpenDrain_Mode_EN			 	clr_P0ODN4
//#define P05_OpenDrain_Mode_EN			 	clr_P0ODN5
//#define P06_OpenDrain_Mode_EN			 	clr_P0ODN6
//#define P07_OpenDrain_Mode_EN			 	clr_P0ODN7
//#define P10_OpenDrain_Mode_EN			 	clr_P1ODN0
//#define P11_OpenDrain_Mode_EN			 	clr_P1ODN1
//#define P12_OpenDrain_Mode_EN			 	clr_P1ODN2
//#define P13_OpenDrain_Mode_EN			 	clr_P1ODN3
//#define P14_OpenDrain_Mode_EN			 	clr_P1ODN4
//#define P15_OpenDrain_Mode_EN			 	clr_P1ODN5
//#define P16_OpenDrain_Mode_EN			 	clr_P1ODN6
//#define P17_OpenDrain_Mode_EN			 	clr_P1ODN7
//#define P20_OpenDrain_Mode_EN			 	clr_P2ODN0
//#define P21_OpenDrain_Mode_EN			 	clr_P2ODN1
//																		
//#define P00_OpenDrain_Mode_DIS		 	set_P0ODN0
//#define P01_OpenDrain_Mode_DIS		 	set_P0ODN1
//#define P02_OpenDrain_Mode_DIS		 	set_P0ODN2
//#define P03_OpenDrain_Mode_DIS		 	set_P0ODN3
//#define P04_OpenDrain_Mode_DIS		 	set_P0ODN4
//#define P05_OpenDrain_Mode_DIS		 	set_P0ODN5
//#define P06_OpenDrain_Mode_DIS		 	set_P0ODN6
//#define P07_OpenDrain_Mode_DIS		 	set_P0ODN7
//#define P10_OpenDrain_Mode_DIS		 	set_P1ODN0
//#define P11_OpenDrain_Mode_DIS		 	set_P1ODN1
//#define P12_OpenDrain_Mode_DIS		 	set_P1ODN2
//#define P13_OpenDrain_Mode_DIS		 	set_P1ODN3
//#define P14_OpenDrain_Mode_DIS		 	set_P1ODN4
//#define P15_OpenDrain_Mode_DIS		 	set_P1ODN5
//#define P16_OpenDrain_Mode_DIS		 	set_P1ODN6
//#define P17_OpenDrain_Mode_DIS		 	set_P1ODN7
//#define P20_OpenDrain_Mode_DIS		 	set_P2ODN0
//#define P21_OpenDrain_Mode_DIS		 	set_P2ODN1
////--------- Define all port as default IO mode ---------
//#define Set_All_GPIO_Default_IO_Mode			PORTMUX1L=1;PORTMUX1H=1;PORTMUX2=1;PORTMUX3=1;PORTMUX4=1;
//																					PORTMUX1L=0;PORTMUX1H=0;PORTMUX2=0;PORTMUX3=0;PORTMUX4=0
#endif
/*------------------------------------------------
The main C function.  Program execution starts
here after stack initialization.
------------------------------------------------*/

void main(void)
{
	Set_All_GPIO_Default_IO_Mode;
	P00_PushPull_Mode;
	for(;;)
	{
		set_P00;
		Timer0_Delay1ms(1);
		clr_P00;
		Timer0_Delay1ms(1);
	}
}
