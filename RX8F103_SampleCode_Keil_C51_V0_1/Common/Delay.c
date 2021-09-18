/**
 ****************************************************************************
 * @file    Delay.c
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

//-------------------------------------------------------------------------
void Delay10us(UINT16 u16CNT)
{
    clr_T0CLKS;                             //T0CLKS=0, Timer0 Clock = Fsys
    set_T0PS0;                           		//Timer0 Clock = Fsys/8
    set_TR0;                                //Trigger Timer0
    while (u16CNT != 0)
    {
        TL0 = LOBYTE(TIMER_DIV8_VALUE_10us);   
        TH0 = HIBYTE(TIMER_DIV8_VALUE_10us);
        while (TF0 != 1);                   //Check Timer0 Time-Out Flag
        clr_TF0;
        u16CNT --;
    }
    clr_TR0;                                //Stop the Timer0
}
//------------------------------------------------------------------------------
void Timer0_Delay1ms(UINT32 u32CNT)
{
    clr_T0CLKS;                             //T0CLKS=0, Timer0 Clock = Fsys
    set_T0PS0;                          		//Timer0 Clock = Fsys/8
    set_TR0;                                //Trigger Timer0
    while (u32CNT != 0)
    {
        TL0 = LOBYTE(TIMER_DIV8_VALUE_1ms); 
        TH0 = HIBYTE(TIMER_DIV8_VALUE_1ms);
        while (TF0 != 1);                   //Check Timer0 Time-Out Flag
        clr_TF0;
        u32CNT --;
    }
    clr_TR0;                                //Stop the Timer0
}
//------------------------------------------------------------------------------
void Timer1_Delay1ms(UINT32 u32CNT)
{
    clr_T1CLKS;                             //T1CLKS=0, Timer0 Clock = Fsys
    set_T1PS0;                           		//Timer0 Clock = Fsys/8
    set_TR1;                                //Trigger Timer1
    while (u32CNT != 0)
    {
        TL1 = LOBYTE(TIMER_DIV8_VALUE_1ms); 
        TH1 = HIBYTE(TIMER_DIV8_VALUE_1ms);
        while (TF1 != 1);                   //Check Timer1 Time-Out Flag
        clr_TF1;
        u32CNT --;
    }
    clr_TR1;                                //Stop the Timer1
}

void delay_ms(unsigned int n)
{
    unsigned int i=0,j=0;
    for(i=0;i<n;i++)
        for(j=0;j<4096;j++);
}