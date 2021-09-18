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
	Set_All_GPIO_Default_IO_Mode;	//IO ��ʼ��
	set_RSTPORTEN;								//ʹ�ܸ�λIO����
	set_ADPORTEN0;								//ADC Port Enable
	clr_DATAX;
	set_MODE;											//10bit ģʽ
	
	set_ADCEN;										//ADC Init
	clr_SV_SEL0;									//set ADC channnel	0
	clr_SV_SEL1;									//set ADC channnel	0
	set_SV_SEL2;									//set ADC channnel	1
	ADT = Bin(01110111);					//��������ʱ�� ����ʱ������
	set_GO;												//ADC GO
	
	InitialUART1(9600);
	EUart1_SendString("Hello Raysilicon!\r\n");
	
	set_EADC;											//��ADC�ж�		
	set_EA;												//EAʹ��

	for(;;)
	{
			Timer0_Delay1ms(1000);
			EUart1_SendReg(ADCON2);
			set_GO;												//ADC RUN
	}
}

void ADCISR(void) interrupt EADC_VECTOR //using 2
{
	clr_ADCIF;								//��ADC�жϱ�־λ
	clr_GO;										//ADC STOP
	EUart1_SendOneChar(ADDH);
	EUart1_SendOneChar(ADDL);
}
