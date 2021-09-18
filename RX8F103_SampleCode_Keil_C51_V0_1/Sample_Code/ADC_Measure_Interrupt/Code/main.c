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
	Enable_ADC_AIN0;							//���������
	SET_ADC_12BIT_MODE;						//����ģʽ
	SET_ADC_Vref_2V;							//���òο���ѹ
	ADC_Time_256Fsys;							//���ò���ʱ��
	ADC_Sample_Hold_Time_260ADCLK;//���ò�������ʱ��
	set_ADCEN;										//ADCʹ��
	ADC_RUN;											//ADC����
	clr_ADCIF;										//��ADC�жϱ�־λ
	set_EADC;											//ʹ��ADC�ж�
	
	InitialUART1(9600);
	EUart1_SendString("Hello Raysilicon!\r\n");
	set_EA;												//ʹ�����ж�
	
	for(;;)
	{

	}
}

void ADCISR(void) interrupt EADC_VECTOR //using 2
{
	clr_ADCIF;										//��ADC�жϱ�־λ
//	ADCON1 &=0xDF;								//�ر�ADC����
	EUart1_SendOneChar(0xAA);
	EUart1_SendOneChar(ADDH);
	EUart1_SendOneChar(ADDL);
	EUart1_SendOneChar(0xEE);
}
