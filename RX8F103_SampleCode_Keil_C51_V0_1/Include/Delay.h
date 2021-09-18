/**
 ****************************************************************************
 * @file    Delay.h
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
 
#ifndef __Delay_H__
#define __Delay_H__

void Delay10us(UINT16 u16CNT);
void Timer0_Delay1ms (UINT32 u32CNT);
void Timer1_Delay1ms (UINT32 u32CNT);
void WakeUp_Timer_Delay25ms(UINT32 u32CNT);
void delay_ms(unsigned int n);

#endif
