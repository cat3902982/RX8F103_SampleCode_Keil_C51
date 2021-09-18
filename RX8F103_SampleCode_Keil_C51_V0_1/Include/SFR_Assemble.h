#ifndef __SFR_Assemble_H__
#define __SFR_Assemble_H__

//----------------------------------------------------------
// 1.Core registers
//----------------------------------------------------------
//SFR ACC         = 0xe0;
//SFR B           = 0xf0;
//SFR PSW         = 0xd0;
//SFR SP          = 0x81;            //initialize value = 0x07
//SFR DPL         = 0x82;
//SFR DPH         = 0x83;
//SFR DPL1        = 0x84;
//SFR DPH1        = 0x85;
//SFR DPS         = 0x92;
//----------------------------------------------------------
//----------------------------------------------------------

//ACC

//B

//PSW

//SP

//DPL

//DPH

//DPL1

//DPH1

//----------------------------------------------------------
// 1.Core registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 2.IAP mode    registers
//----------------------------------------------------------
//SFR IAPCTRL	 = 0xc8;
//SFR IAPLOCK  = 0xf5;
//SFR IAPDATA	 = 0xed;
//SFR IAPADDRL = 0xe5;
//SFR IAPADDRH = 0xdd;
//----------------------------------------------------------
//----------------------------------------------------------

//IAPCTRL
#define set_IAPLOCKEN  IAPLOCKEN    = 1
#define set_IAPFAIL    IAPFAIL      = 1
#define set_IAPRD      IAPRD        = 1
#define set_IAPER      IAPER        = 1
#define set_IAPWR      IAPWR        = 1
#define set_IAPGO      IAPGO        = 1

#define clr_IAPLOCKEN  IAPLOCKEN    = 0
#define clr_IAPFAIL    IAPFAIL      = 0
#define clr_IAPRD      IAPRD        = 0
#define clr_IAPER      IAPER        = 0
#define clr_IAPWR      IAPWR        = 0
#define clr_IAPGO      IAPGO        = 0

//IAPLOCK

//IAPDATA

//IAPADDRL

//IAPADDRH

//----------------------------------------------------------
// 2.IAP mode    registers end
//----------------------------------------------------------

//----------------------------------------------------------
// 3. PMU   registers
//----------------------------------------------------------
//SFR CLKCON	= 0xf4;
//SFR CLKDIV	= 0xec;
//SFR RSTSTAT	= 0xe4;
//SFR PCON	  = 0xb0;
//SFR DPWAKE  = 0xf7;
//----------------------------------------------------------
//----------------------------------------------------------

//CLKCON
#define set_WDTCKEN     CLKCON    |= SET_BIT4
#define set_RC16MEN     CLKCON    |= SET_BIT3
#define set_LOWCLK_SEL  CLKCON    |= SET_BIT2 
#define set_HIGHCLK_SEL CLKCON    |= SET_BIT1
#define set_SYSCLK_SEL  CLKCON    |= SET_BIT0
                            
#define clr_WDTCKEN     CLKCON    &= ~SET_BIT4
#define clr_RC16MEN     CLKCON    &= ~SET_BIT3
#define clr_LOWCLK_SEL  CLKCON    &= ~SET_BIT2 
#define clr_HIGHCLK_SEL CLKCON    &= ~SET_BIT1
#define clr_SYSCLK_SEL  CLKCON    &= ~SET_BIT0

//CLKDIV	
#define set_SYSCLKDIV2  CLKDIV    |= SET_BIT2 
#define set_SYSCLKDIV1  CLKDIV    |= SET_BIT1
#define set_SYSCLKDIV0  CLKDIV    |= SET_BIT0
                            
#define clr_SYSCLKDIV2  CLKDIV    &= ~SET_BIT2 
#define clr_SYSCLKDIV1  CLKDIV    &= ~SET_BIT1
#define clr_SYSCLKDIV0  CLKDIV    &= ~SET_BIT0

//RSTSTAT	
#define set_WDTOF       RSTSTAT    |= SET_BIT7
#define set_WDTEN       RSTSTAT    |= SET_BIT6
#define set_PORF        RSTSTAT    |= SET_BIT4
#define set_ERSTF       RSTSTAT    |= SET_BIT3
#define set_WDTCYCLE2   RSTSTAT    |= SET_BIT2 
#define set_WDTCYCLE1   RSTSTAT    |= SET_BIT1
#define set_WDTCYCLE0   RSTSTAT    |= SET_BIT0
                            
#define clr_WDTOF       RSTSTAT    &= ~SET_BIT7
#define clr_WDTEN       RSTSTAT    &= ~SET_BIT6
#define clr_PORF        RSTSTAT    &= ~SET_BIT4
#define clr_ERSTF       RSTSTAT    &= ~SET_BIT3
#define clr_WDTCYCLE2   RSTSTAT    &= ~SET_BIT2 
#define clr_WDTCYCLE1   RSTSTAT    &= ~SET_BIT1
#define clr_WDTCYCLE0   RSTSTAT    &= ~SET_BIT0

//PCON	  
#define set_LRCEN_SLEEP PCON    	 |= SET_BIT7
#define set_LPEN_IDLE   PCON    	 |= SET_BIT6
#define set_DEEPSLEEP   PCON    	 |= SET_BIT2 
#define set_SLEEP   	  PCON    	 |= SET_BIT1
#define set_IDLE   		  PCON    	 |= SET_BIT0
                            
#define clr_LRCEN_SLEEP PCON    	 &= ~SET_BIT7
#define clr_LPEN_IDLE   PCON    	 &= ~SET_BIT6
#define clr_DEEPSLEEP   PCON    	 &= ~SET_BIT2 
#define clr_SLEEP   		PCON    	 &= ~SET_BIT1
#define clr_IDLE   			PCON    	 &= ~SET_BIT0

//DPWAKE
#define set_WAKEUPCS3 	DPWAKE    	 |= SET_BIT7
#define set_WAKEUPCS2 	DPWAKE    	 |= SET_BIT6
#define set_WAKEUPCS1 	DPWAKE    	 |= SET_BIT5 
#define set_WAKEUPCS0 	DPWAKE    	 |= SET_BIT4
#define set_WAKEUPEN  	DPWAKE    	 |= SET_BIT0
                            
#define clr_WAKEUPCS3   DPWAKE    	 &= ~SET_BIT7
#define clr_WAKEUPCS2   DPWAKE    	 &= ~SET_BIT6
#define clr_WAKEUPCS1   DPWAKE    	 &= ~SET_BIT5 
#define clr_WAKEUPCS0   DPWAKE    	 &= ~SET_BIT4
#define clr_WAKEUPEN    DPWAKE    	 &= ~SET_BIT0

//----------------------------------------------------------
// 3. PMU   registers end
//----------------------------------------------------------

//----------------------------------------------------------
// 4.GPIO registers
//----------------------------------------------------------
//SFR P0          = 0x80;
//SFR P1          = 0x90;
//SFR P2		      = 0xa0;
//SFR PORTMUX1L		= 0xf8;
//SFR PORTMUX1H		= 0xe8;
//SFR PORTMUX2		= 0xd8;
//SFR PORTMUX3		= 0xc0;
//SFR PORTMUX4		= 0x91;
//SFR P0OEN	      = 0xf9;
//SFR P0PUN	      = 0xf1;
//SFR P0PDN	      = 0xe9;
//SFR P0ODN	      = 0xe1;
//SFR P0HC1	      = 0xd9;
//SFR P0HC0	      = 0xd1;
//SFR P0IEN	      = 0xc9;
//SFR P0IRQ	      = 0xc1;
//SFR P1OEN	      = 0xfa;
//SFR P1PUN	      = 0xf2;
//SFR P1PDN	      = 0xea;
//SFR P1ODN	      = 0xe2;
//SFR P1HC1	      = 0xda;
//SFR P1HC0	      = 0xd2;
//SFR P1IEN	      = 0xca;
//SFR P1IRQ	      = 0xc2;
//SFR PORTIRQCLREN= 0xdb;
//SFR P2OEN	      = 0xfb;
//SFR P2PUN	      = 0xf3;
//SFR P2PDN	      = 0xeb;
//SFR P2ODN	      = 0xe3;
//SFR P2HC0	      = 0xd3;
//SFR P2IEN	      = 0xcb;
//SFR P2IRQ	      = 0xc3;
//SFR P012IRQCON	  = 0xfc;
//----------------------------------------------------------
//----------------------------------------------------------

//P0
#define set_P07     P0_7      = 1
#define set_P06     P0_6      = 1
#define set_P05     P0_5      = 1
#define set_P04     P0_4      = 1
#define set_P03     P0_3      = 1
#define set_P02     P0_2      = 1
#define set_P01     P0_1      = 1
#define set_P00     P0_0      = 1

#define clr_P07     P0_7      = 0
#define clr_P06     P0_6      = 0
#define clr_P05     P0_5      = 0
#define clr_P04     P0_4      = 0
#define clr_P03     P0_3      = 0
#define clr_P02     P0_2      = 0
#define clr_P01     P0_1      = 0
#define clr_P00     P0_0      = 0

//P1
#define set_P17     P1_7      = 1
#define set_P16     P1_6      = 1
#define set_P15     P1_5      = 1
#define set_P14     P1_4      = 1
#define set_P13     P1_3      = 1
#define set_P12     P1_2      = 1
#define set_P11     P1_1      = 1
#define set_P10     P1_0      = 1

#define clr_P17     P1_7      = 0
#define clr_P16     P1_6      = 0
#define clr_P15     P1_5      = 0
#define clr_P14     P1_4      = 0
#define clr_P13     P1_3      = 0
#define clr_P12     P1_2      = 0
#define clr_P11     P1_1      = 0
#define clr_P10     P1_0      = 0

//P2
#define set_P21     P2_1      = 1
#define set_P20     P2_0      = 1

#define clr_P21     P2_1      = 0
#define clr_P20     P2_0      = 0

//PORTMUX1L
#define set_PWMPORTEN3    PWMPORTEN3  = 1
#define set_PWMPORTEN2    PWMPORTEN2  = 1
#define set_PWMPORTEN1    PWMPORTEN1  = 1
#define set_PWMPORTEN0    PWMPORTEN0  = 1
#define set_LOSCPORTEN    LOSCPORTEN  = 1
#define set_BEEPPORTEN    BEEPPORTEN  = 1
#define set_RSTPORTEN     RSTPORTEN   = 1
#define set_HOSCPORTEN    HOSCPORTEN  = 1
                          
#define clr_PWMPORTEN3    PWMPORTEN3  = 0
#define clr_PWMPORTEN2    PWMPORTEN2  = 0
#define clr_PWMPORTEN1    PWMPORTEN1  = 0
#define clr_PWMPORTEN0    PWMPORTEN0  = 0
#define clr_LOSCPORTEN    LOSCPORTEN  = 0
#define clr_BEEPPORTEN    BEEPPORTEN  = 0
#define clr_RSTPORTEN     RSTPORTEN   = 0
#define clr_HOSCPORTEN    HOSCPORTEN  = 0

//PORTMUX1H
#define set_ADPORTEN9     ADPORTEN9   = 1
#define set_ADPORTEN8     ADPORTEN8   = 1
#define set_ADPORTEN7     ADPORTEN7   = 1
#define set_ADPORTEN6     ADPORTEN6   = 1
#define set_ADPORTEN4     ADPORTEN4   = 1
#define set_PWMPORTEN5    PWMPORTEN5  = 1
#define set_PWMPORTEN4    PWMPORTEN4  = 1
                          
#define clr_ADPORTEN9     ADPORTEN9   = 0
#define clr_ADPORTEN8     ADPORTEN8   = 0
#define clr_ADPORTEN7     ADPORTEN7   = 0
#define clr_ADPORTEN6     ADPORTEN6   = 0
#define clr_ADPORTEN4     ADPORTEN4   = 0
#define clr_PWMPORTEN5    PWMPORTEN5  = 0
#define clr_PWMPORTEN4    PWMPORTEN4  = 0

//PORTMUX2
#define set_SPIPORTEN     SPIPORTEN   = 1
#define set_I2CPORTEN     I2CPORTEN   = 1
#define set_UART1PORTEN   UART1PORTEN = 1
#define set_UART0PORTEN   UART0PORTEN = 1
                          
#define clr_SPIPORTEN     SPIPORTEN   = 0
#define clr_I2CPORTEN     I2CPORTEN   = 0
#define clr_UART1PORTEN   UART1PORTEN = 0
#define clr_UART0PORTEN   UART0PORTEN = 0

//PORTMUX3
#define set_ADPORTEN5      ADPORTEN5  = 1
#define set_ADPORTEN3      ADPORTEN3  = 1
#define set_ADPORTEN2      ADPORTEN2  = 1
#define set_ADPORTEN1      ADPORTEN1  = 1
#define set_ADPORTEN0      ADPORTEN0  = 1
                          
#define clr_ADPORTEN5      ADPORTEN5  = 0
#define clr_ADPORTEN3      ADPORTEN3  = 0
#define clr_ADPORTEN2      ADPORTEN2  = 0
#define clr_ADPORTEN1      ADPORTEN1  = 0
#define clr_ADPORTEN0      ADPORTEN0  = 0

//PORTMUX4
#define set_VREFPORTEN     PORTMUX4  |= SET_BIT2 
#define set_CP1PORTEN      PORTMUX4  |= SET_BIT1
#define set_CP0PORTEN      PORTMUX4  |= SET_BIT0
                            
#define clr_VREFPORTEN     PORTMUX4	 &= ~SET_BIT2
#define clr_CP1PORTEN      PORTMUX4	 &= ~SET_BIT1
#define clr_CP0PORTEN      PORTMUX4	 &= ~SET_BIT0 

//P0OEN
#define set_P0OEN7   P0OEN    |= SET_BIT7
#define set_P0OEN6   P0OEN    |= SET_BIT6
#define set_P0OEN5   P0OEN    |= SET_BIT5
#define set_P0OEN4   P0OEN    |= SET_BIT4
#define set_P0OEN3   P0OEN    |= SET_BIT3
#define set_P0OEN2   P0OEN    |= SET_BIT2 
#define set_P0OEN1   P0OEN    |= SET_BIT1
#define set_P0OEN0   P0OEN    |= SET_BIT0
                            
#define clr_P0OEN7   P0OEN    &= ~SET_BIT7
#define clr_P0OEN6   P0OEN    &= ~SET_BIT6
#define clr_P0OEN5   P0OEN    &= ~SET_BIT5
#define clr_P0OEN4   P0OEN    &= ~SET_BIT4
#define clr_P0OEN3   P0OEN    &= ~SET_BIT3
#define clr_P0OEN2   P0OEN    &= ~SET_BIT2 
#define clr_P0OEN1   P0OEN    &= ~SET_BIT1
#define clr_P0OEN0   P0OEN    &= ~SET_BIT0

//P0PUN
#define set_P0PUN7   P0PUN    |= SET_BIT7
#define set_P0PUN6   P0PUN    |= SET_BIT6
#define set_P0PUN5   P0PUN    |= SET_BIT5
#define set_P0PUN4   P0PUN    |= SET_BIT4
#define set_P0PUN3   P0PUN    |= SET_BIT3
#define set_P0PUN2   P0PUN    |= SET_BIT2 
#define set_P0PUN1   P0PUN    |= SET_BIT1
#define set_P0PUN0   P0PUN    |= SET_BIT0
                            
#define clr_P0PUN7   P0PUN    &= ~SET_BIT7
#define clr_P0PUN6   P0PUN    &= ~SET_BIT6
#define clr_P0PUN5   P0PUN    &= ~SET_BIT5
#define clr_P0PUN4   P0PUN    &= ~SET_BIT4
#define clr_P0PUN3   P0PUN    &= ~SET_BIT3
#define clr_P0PUN2   P0PUN    &= ~SET_BIT2 
#define clr_P0PUN1   P0PUN    &= ~SET_BIT1
#define clr_P0PUN0   P0PUN    &= ~SET_BIT0

//P0PDN
#define set_P0PDN7   P0PDN    |= SET_BIT7
#define set_P0PDN6   P0PDN    |= SET_BIT6
#define set_P0PDN5   P0PDN    |= SET_BIT5
#define set_P0PDN4   P0PDN    |= SET_BIT4
#define set_P0PDN3   P0PDN    |= SET_BIT3
#define set_P0PDN2   P0PDN    |= SET_BIT2 
#define set_P0PDN1   P0PDN    |= SET_BIT1
#define set_P0PDN0   P0PDN    |= SET_BIT0
                            
#define clr_P0PDN7   P0PDN    &= ~SET_BIT7
#define clr_P0PDN6   P0PDN    &= ~SET_BIT6
#define clr_P0PDN5   P0PDN    &= ~SET_BIT5
#define clr_P0PDN4   P0PDN    &= ~SET_BIT4
#define clr_P0PDN3   P0PDN    &= ~SET_BIT3
#define clr_P0PDN2   P0PDN    &= ~SET_BIT2 
#define clr_P0PDN1   P0PDN    &= ~SET_BIT1
#define clr_P0PDN0   P0PDN    &= ~SET_BIT0

//P0ODN
#define set_P0ODN7   P0ODN    |= SET_BIT7
#define set_P0ODN6   P0ODN    |= SET_BIT6
#define set_P0ODN5   P0ODN    |= SET_BIT5
#define set_P0ODN4   P0ODN    |= SET_BIT4
#define set_P0ODN3   P0ODN    |= SET_BIT3
#define set_P0ODN2   P0ODN    |= SET_BIT2 
#define set_P0ODN1   P0ODN    |= SET_BIT1
#define set_P0ODN0   P0ODN    |= SET_BIT0
                            
#define clr_P0ODN7   P0ODN    &= ~SET_BIT7
#define clr_P0ODN6   P0ODN    &= ~SET_BIT6
#define clr_P0ODN5   P0ODN    &= ~SET_BIT5
#define clr_P0ODN4   P0ODN    &= ~SET_BIT4
#define clr_P0ODN3   P0ODN    &= ~SET_BIT3
#define clr_P0ODN2   P0ODN    &= ~SET_BIT2 
#define clr_P0ODN1   P0ODN    &= ~SET_BIT1
#define clr_P0ODN0   P0ODN    &= ~SET_BIT0

//P0HC1
#define set_P0HC1_7   P0HC1    |= SET_BIT7
#define set_P0HC1_6   P0HC1    |= SET_BIT6
#define set_P0HC1_5   P0HC1    |= SET_BIT5
#define set_P0HC1_4   P0HC1    |= SET_BIT4
#define set_P0HC1_3   P0HC1    |= SET_BIT3
#define set_P0HC1_2   P0HC1    |= SET_BIT2
#define set_P0HC1_1   P0HC1    |= SET_BIT1
#define set_P0HC1_0   P0HC1    |= SET_BIT0
                            
#define clr_P0HC1_7   P0HC1    &= ~SET_BIT7
#define clr_P0HC1_6   P0HC1    &= ~SET_BIT6
#define clr_P0HC1_5   P0HC1    &= ~SET_BIT5
#define clr_P0HC1_4   P0HC1    &= ~SET_BIT4
#define clr_P0HC1_3   P0HC1    &= ~SET_BIT3
#define clr_P0HC1_2   P0HC1    &= ~SET_BIT2
#define clr_P0HC1_1   P0HC1    &= ~SET_BIT1
#define clr_P0HC1_0   P0HC1    &= ~SET_BIT0

//P0HC0
#define set_P0HC0_7   P0HC0    |= SET_BIT7
#define set_P0HC0_6   P0HC0    |= SET_BIT6
#define set_P0HC0_5   P0HC0    |= SET_BIT5
#define set_P0HC0_4   P0HC0    |= SET_BIT4
#define set_P0HC0_3   P0HC0    |= SET_BIT3
#define set_P0HC0_2   P0HC0    |= SET_BIT2
#define set_P0HC0_1   P0HC0    |= SET_BIT1
#define set_P0HC0_0   P0HC0    |= SET_BIT0

#define clr_P0HC0_7   P0HC0    &= ~SET_BIT7
#define clr_P0HC0_6   P0HC0    &= ~SET_BIT6
#define clr_P0HC0_5   P0HC0    &= ~SET_BIT5
#define clr_P0HC0_4   P0HC0    &= ~SET_BIT4
#define clr_P0HC0_3   P0HC0    &= ~SET_BIT3
#define clr_P0HC0_2   P0HC0    &= ~SET_BIT2
#define clr_P0HC0_1   P0HC0    &= ~SET_BIT1
#define clr_P0HC0_0   P0HC0    &= ~SET_BIT0

//P0IEN
#define set_P0IEN7   P0IEN    |= SET_BIT7
#define set_P0IEN6   P0IEN    |= SET_BIT6
#define set_P0IEN5   P0IEN    |= SET_BIT5
#define set_P0IEN4   P0IEN    |= SET_BIT4
#define set_P0IEN3   P0IEN    |= SET_BIT3
#define set_P0IEN2   P0IEN    |= SET_BIT2
#define set_P0IEN1   P0IEN    |= SET_BIT1
#define set_P0IEN0   P0IEN    |= SET_BIT0

#define clr_P0IEN7   P0IEN    &= ~SET_BIT7
#define clr_P0IEN6   P0IEN    &= ~SET_BIT6
#define clr_P0IEN5   P0IEN    &= ~SET_BIT5
#define clr_P0IEN4   P0IEN    &= ~SET_BIT4
#define clr_P0IEN3   P0IEN    &= ~SET_BIT3
#define clr_P0IEN2   P0IEN    &= ~SET_BIT2
#define clr_P0IEN1   P0IEN    &= ~SET_BIT1
#define clr_P0IEN0   P0IEN    &= ~SET_BIT0

//P0IRQ
#define set_P0IRQ7   P0IRQ    |= SET_BIT7
#define set_P0IRQ6   P0IRQ    |= SET_BIT6
#define set_P0IRQ5   P0IRQ    |= SET_BIT5
#define set_P0IRQ4   P0IRQ    |= SET_BIT4
#define set_P0IRQ3   P0IRQ    |= SET_BIT3
#define set_P0IRQ2   P0IRQ    |= SET_BIT2
#define set_P0IRQ1   P0IRQ    |= SET_BIT1
#define set_P0IRQ0   P0IRQ    |= SET_BIT0

#define clr_P0IRQ7   P0IRQ    &= ~SET_BIT7
#define clr_P0IRQ6   P0IRQ    &= ~SET_BIT6
#define clr_P0IRQ5   P0IRQ    &= ~SET_BIT5
#define clr_P0IRQ4   P0IRQ    &= ~SET_BIT4
#define clr_P0IRQ3   P0IRQ    &= ~SET_BIT3
#define clr_P0IRQ2   P0IRQ    &= ~SET_BIT2
#define clr_P0IRQ1   P0IRQ    &= ~SET_BIT1
#define clr_P0IRQ0   P0IRQ    &= ~SET_BIT0

//P1OEN
#define set_P1OEN7   P1OEN    |= SET_BIT7
#define set_P1OEN6   P1OEN    |= SET_BIT6
#define set_P1OEN5   P1OEN    |= SET_BIT5
#define set_P1OEN4   P1OEN    |= SET_BIT4
#define set_P1OEN3   P1OEN    |= SET_BIT3
#define set_P1OEN2   P1OEN    |= SET_BIT2 
#define set_P1OEN1   P1OEN    |= SET_BIT1
#define set_P1OEN0   P1OEN    |= SET_BIT0

#define clr_P1OEN7   P1OEN    &= ~SET_BIT7
#define clr_P1OEN6   P1OEN    &= ~SET_BIT6
#define clr_P1OEN5   P1OEN    &= ~SET_BIT5
#define clr_P1OEN4   P1OEN    &= ~SET_BIT4
#define clr_P1OEN3   P1OEN    &= ~SET_BIT3
#define clr_P1OEN2   P1OEN    &= ~SET_BIT2 
#define clr_P1OEN1   P1OEN    &= ~SET_BIT1
#define clr_P1OEN0   P1OEN    &= ~SET_BIT0

//P1PUN
#define set_P1PUN7   P1PUN    |= SET_BIT7
#define set_P1PUN6   P1PUN    |= SET_BIT6
#define set_P1PUN5   P1PUN    |= SET_BIT5
#define set_P1PUN4   P1PUN    |= SET_BIT4
#define set_P1PUN3   P1PUN    |= SET_BIT3
#define set_P1PUN2   P1PUN    |= SET_BIT2 
#define set_P1PUN1   P1PUN    |= SET_BIT1
#define set_P1PUN0   P1PUN    |= SET_BIT0
                            
#define clr_P1PUN7   P1PUN    &= ~SET_BIT7
#define clr_P1PUN6   P1PUN    &= ~SET_BIT6
#define clr_P1PUN5   P1PUN    &= ~SET_BIT5
#define clr_P1PUN4   P1PUN    &= ~SET_BIT4
#define clr_P1PUN3   P1PUN    &= ~SET_BIT3
#define clr_P1PUN2   P1PUN    &= ~SET_BIT2 
#define clr_P1PUN1   P1PUN    &= ~SET_BIT1
#define clr_P1PUN0   P1PUN    &= ~SET_BIT0

//P1PDN
#define set_P1PDN7   P1PDN    |= SET_BIT7
#define set_P1PDN6   P1PDN    |= SET_BIT6
#define set_P1PDN5   P1PDN    |= SET_BIT5
#define set_P1PDN4   P1PDN    |= SET_BIT4
#define set_P1PDN3   P1PDN    |= SET_BIT3
#define set_P1PDN2   P1PDN    |= SET_BIT2 
#define set_P1PDN1   P1PDN    |= SET_BIT1
#define set_P1PDN0   P1PDN    |= SET_BIT0
                            
#define clr_P1PDN7   P1PDN    &= ~SET_BIT7
#define clr_P1PDN6   P1PDN    &= ~SET_BIT6
#define clr_P1PDN5   P1PDN    &= ~SET_BIT5
#define clr_P1PDN4   P1PDN    &= ~SET_BIT4
#define clr_P1PDN3   P1PDN    &= ~SET_BIT3
#define clr_P1PDN2   P1PDN    &= ~SET_BIT2 
#define clr_P1PDN1   P1PDN    &= ~SET_BIT1
#define clr_P1PDN0   P1PDN    &= ~SET_BIT0

//P1ODN
#define set_P1ODN7   P1ODN    |= SET_BIT7
#define set_P1ODN6   P1ODN    |= SET_BIT6
#define set_P1ODN5   P1ODN    |= SET_BIT5
#define set_P1ODN4   P1ODN    |= SET_BIT4
#define set_P1ODN3   P1ODN    |= SET_BIT3
#define set_P1ODN2   P1ODN    |= SET_BIT2 
#define set_P1ODN1   P1ODN    |= SET_BIT1
#define set_P1ODN0   P1ODN    |= SET_BIT0
                            
#define clr_P1ODN7   P1ODN    &= ~SET_BIT7
#define clr_P1ODN6   P1ODN    &= ~SET_BIT6
#define clr_P1ODN5   P1ODN    &= ~SET_BIT5
#define clr_P1ODN4   P1ODN    &= ~SET_BIT4
#define clr_P1ODN3   P1ODN    &= ~SET_BIT3
#define clr_P1ODN2   P1ODN    &= ~SET_BIT2 
#define clr_P1ODN1   P1ODN    &= ~SET_BIT1
#define clr_P1ODN0   P1ODN    &= ~SET_BIT0

//P1HC1
#define set_P1HC1_7   P1HC1    |= SET_BIT7
#define set_P1HC1_6   P1HC1    |= SET_BIT6
#define set_P1HC1_5   P1HC1    |= SET_BIT5
#define set_P1HC1_4   P1HC1    |= SET_BIT4
#define set_P1HC1_3   P1HC1    |= SET_BIT3
#define set_P1HC1_2   P1HC1    |= SET_BIT2
#define set_P1HC1_1   P1HC1    |= SET_BIT1
#define set_P1HC1_0   P1HC1    |= SET_BIT0
                            
#define clr_P1HC1_7   P1HC1    &= ~SET_BIT7
#define clr_P1HC1_6   P1HC1    &= ~SET_BIT6
#define clr_P1HC1_5   P1HC1    &= ~SET_BIT5
#define clr_P1HC1_4   P1HC1    &= ~SET_BIT4
#define clr_P1HC1_3   P1HC1    &= ~SET_BIT3
#define clr_P1HC1_2   P1HC1    &= ~SET_BIT2
#define clr_P1HC1_1   P1HC1    &= ~SET_BIT1
#define clr_P1HC1_0   P1HC1    &= ~SET_BIT0

//P1HC0
#define set_P1HC0_7   P1HC0    |= SET_BIT7
#define set_P1HC0_6   P1HC0    |= SET_BIT6
#define set_P1HC0_5   P1HC0    |= SET_BIT5
#define set_P1HC0_4   P1HC0    |= SET_BIT4
#define set_P1HC0_3   P1HC0    |= SET_BIT3
#define set_P1HC0_2   P1HC0    |= SET_BIT2
#define set_P1HC0_1   P1HC0    |= SET_BIT1
#define set_P1HC0_0   P1HC0    |= SET_BIT0

#define clr_P1HC0_7   P1HC0    &= ~SET_BIT7
#define clr_P1HC0_6   P1HC0    &= ~SET_BIT6
#define clr_P1HC0_5   P1HC0    &= ~SET_BIT5
#define clr_P1HC0_4   P1HC0    &= ~SET_BIT4
#define clr_P1HC0_3   P1HC0    &= ~SET_BIT3
#define clr_P1HC0_2   P1HC0    &= ~SET_BIT2
#define clr_P1HC0_1   P1HC0    &= ~SET_BIT1
#define clr_P1HC0_0   P1HC0    &= ~SET_BIT0

//P1IEN
#define set_P1IEN7   P1IEN    |= SET_BIT7
#define set_P1IEN6   P1IEN    |= SET_BIT6
#define set_P1IEN5   P1IEN    |= SET_BIT5
#define set_P1IEN4   P1IEN    |= SET_BIT4
#define set_P1IEN3   P1IEN    |= SET_BIT3
#define set_P1IEN2   P1IEN    |= SET_BIT2
#define set_P1IEN1   P1IEN    |= SET_BIT1
#define set_P1IEN0   P1IEN    |= SET_BIT0

#define clr_P1IEN7   P1IEN    &= ~SET_BIT7
#define clr_P1IEN6   P1IEN    &= ~SET_BIT6
#define clr_P1IEN5   P1IEN    &= ~SET_BIT5
#define clr_P1IEN4   P1IEN    &= ~SET_BIT4
#define clr_P1IEN3   P1IEN    &= ~SET_BIT3
#define clr_P1IEN2   P1IEN    &= ~SET_BIT2
#define clr_P1IEN1   P1IEN    &= ~SET_BIT1
#define clr_P1IEN0   P1IEN    &= ~SET_BIT0

//P1IRQ
#define set_P1IRQ7   P1IRQ    |= SET_BIT7
#define set_P1IRQ6   P1IRQ    |= SET_BIT6
#define set_P1IRQ5   P1IRQ    |= SET_BIT5
#define set_P1IRQ4   P1IRQ    |= SET_BIT4
#define set_P1IRQ3   P1IRQ    |= SET_BIT3
#define set_P1IRQ2   P1IRQ    |= SET_BIT2
#define set_P1IRQ1   P1IRQ    |= SET_BIT1
#define set_P1IRQ0   P1IRQ    |= SET_BIT0

#define clr_P1IRQ7   P1IRQ    &= ~SET_BIT7
#define clr_P1IRQ6   P1IRQ    &= ~SET_BIT6
#define clr_P1IRQ5   P1IRQ    &= ~SET_BIT5
#define clr_P1IRQ4   P1IRQ    &= ~SET_BIT4
#define clr_P1IRQ3   P1IRQ    &= ~SET_BIT3
#define clr_P1IRQ2   P1IRQ    &= ~SET_BIT2
#define clr_P1IRQ1   P1IRQ    &= ~SET_BIT1
#define clr_P1IRQ0   P1IRQ    &= ~SET_BIT0

//P2OEN
#define set_P2OEN1   P2OEN    |= SET_BIT1
#define set_P2OEN0   P2OEN    |= SET_BIT0

#define clr_P2OEN1   P2OEN    &= ~SET_BIT1
#define clr_P2OEN0   P2OEN    &= ~SET_BIT0

//P2PUN
#define set_P2PUN1   P2PUN    |= SET_BIT1
#define set_P2PUN0   P2PUN    |= SET_BIT0

#define clr_P2PUN1   P2PUN    &= ~SET_BIT1
#define clr_P2PUN0   P2PUN    &= ~SET_BIT0

//P2PDN
#define set_P2PDN1   P2PDN    |= SET_BIT1
#define set_P2PDN0   P2PDN    |= SET_BIT0

#define clr_P2PDN1   P2PDN    &= ~SET_BIT1
#define clr_P2PDN0   P2PDN    &= ~SET_BIT0

//P2ODN
#define set_P2ODN1   P2ODN    |= SET_BIT1
#define set_P2ODN0   P2ODN    |= SET_BIT0

#define clr_P2ODN1   P2ODN    &= ~SET_BIT1
#define clr_P2ODN0   P2ODN    &= ~SET_BIT0

//P2HC0
#define set_P2HC0_1   P2HC0    |= SET_BIT1
#define set_P2HC0_0   P2HC0    |= SET_BIT0

#define clr_P2HC0_1   P2HC0    &= ~SET_BIT1
#define clr_P2HC0_0   P2HC0    &= ~SET_BIT0

//P2IEN
#define set_P2IEN1   P2IEN    |= SET_BIT1
#define set_P2IEN0   P2IEN    |= SET_BIT0

#define clr_P2IEN1   P2IEN    &= ~SET_BIT1
#define clr_P2IEN0   P2IEN    &= ~SET_BIT0

//P2IRQ
#define set_P2IRQ1   P2IRQ    |= SET_BIT1
#define set_P2IRQ0   P2IRQ    |= SET_BIT0

#define clr_P2IRQ1   P2IRQ    &= ~SET_BIT1
#define clr_P2IRQ0   P2IRQ    &= ~SET_BIT0

//P012IRQCON
#define set_P2IRQCFG1   P012IRQCON    |= SET_BIT5
#define set_P2IRQCFG0   P012IRQCON    |= SET_BIT4
#define set_P1IRQCFG1   P012IRQCON    |= SET_BIT3
#define set_P1IRQCFG0   P012IRQCON    |= SET_BIT2
#define set_P0IRQCFG1   P012IRQCON    |= SET_BIT1
#define set_P0IRQCFG0   P012IRQCON    |= SET_BIT0

#define clr_P2IRQCFG1   P012IRQCON    &= ~SET_BIT5
#define clr_P2IRQCFG0   P012IRQCON    &= ~SET_BIT4
#define clr_P1IRQCFG1   P012IRQCON    &= ~SET_BIT3
#define clr_P1IRQCFG0   P012IRQCON    &= ~SET_BIT2
#define clr_P0IRQCFG1   P012IRQCON    &= ~SET_BIT1
#define clr_P0IRQCFG0   P012IRQCON    &= ~SET_BIT0

//PORTIRQCLREN
#define set_PORTIRQCLREN   PORTIRQCLREN    |= SET_BIT0

#define clr_PORTIRQCLREN   PORTIRQCLREN    &= ~SET_BIT0

//----------------------------------------------------------
// 4.GPIO registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 5.Timer0,1  registers
//----------------------------------------------------------
//SFR TCON	= 0x88;
//SFR TMOD	= 0x89;
//SFR TL0		= 0x8a;
//SFR TL1		= 0x8b;
//SFR TH0   = 0x8c;
//SFR TH1   = 0x8d;
//----------------------------------------------------------
//----------------------------------------------------------

//TCON
#define set_TF1     TF1       = 1
#define set_TR1     TR1	      = 1
#define set_T1CLKS  T1CLKS    = 1
#define set_TF0     TF0	      = 1
#define set_TR0     TR0	      = 1
#define set_T0CLKS  T0CLKS    = 1

#define clr_TF1     TF1       = 0
#define clr_TR1     TR1	      = 0
#define clr_T1CLKS  T1CLKS    = 0		//此位必需设置为0，选择系统时钟
#define clr_TF0     TF0	      = 0
#define clr_TR0     TR0	      = 0
#define clr_T0CLKS  T0CLKS    = 0		//此位必需设置为0，选择系统时钟

//TMOD
#define set_T1PS1   TMOD    |= SET_BIT5
#define set_T1PS0   TMOD    |= SET_BIT4 
#define set_T0PS1   TMOD    |= SET_BIT1
#define set_T0PS0   TMOD    |= SET_BIT0
                            
#define clr_T1PS1   TMOD    &= ~SET_BIT5
#define clr_T1PS0   TMOD    &= ~SET_BIT4
#define clr_T0PS1   TMOD    &= ~SET_BIT1
#define clr_T0PS0   TMOD    &= ~SET_BIT0

//TL0

//TH0

//TL1

//TH1

//----------------------------------------------------------
// 5.Timer0,1  registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 6.PWM   registers
//----------------------------------------------------------
//SFR PWMCON0     = 0xd4;
//SFR PWMCON1     = 0xd5;
//SFR PWMMASKEN   = 0xd6;
//SFR PWMMASKDATA = 0xcc;
//SFR PWMINTCON   = 0xcd;
//SFR PWMINTF     = 0xa4;
//SFR PWMFBCON0   = 0xa5;
//SFR PWMFBCON1   = 0xa6;
//SFR PWMDTCON    = 0x9e;
//SFR PWMDTCYC    = 0x96;
//SFR PWMPL       = 0xce;
//SFR PWMPH       = 0xc4;
//SFR PWM0DL      = 0xc5;
//SFR PWM0DH      = 0xc6;
//SFR PWM1DL      = 0xbc;
//SFR PWM1DH      = 0xbd;
//SFR PWM2DL      = 0xbe;
//SFR PWM2DH      = 0xb4;
//SFR PWM3DL      = 0xb5;
//SFR PWM3DH      = 0xb6;
//SFR PWM4DL      = 0xab;
//SFR PWM4DH      = 0xac;
//SFR PWM5DL      = 0xad;
//SFR PWM5DH      = 0xae;
//----------------------------------------------------------
//----------------------------------------------------------
//PWMCON0
#define set_PWMRUN   		 PWMCON0    |= SET_BIT7
#define set_PWMLOAD   	 PWMCON0    |= SET_BIT6
#define set_PWMCLR   		 PWMCON0    |= SET_BIT5
#define set_PWMTYP   		 PWMCON0    |= SET_BIT4
#define set_PWMOS   		 PWMCON0    |= SET_BIT3
#define set_PWMCLKDIV2   PWMCON0    |= SET_BIT2
#define set_PWMCLKDIV1   PWMCON0    |= SET_BIT1
#define set_PWMCLKDIV0   PWMCON0    |= SET_BIT0

#define clr_PWMRUN   		 PWMCON0    &= ~SET_BIT7
#define clr_PWMLOAD   	 PWMCON0    &= ~SET_BIT6
#define clr_PWMCLR   		 PWMCON0    &= ~SET_BIT5
#define clr_PWMTYP   		 PWMCON0    &= ~SET_BIT4
#define clr_PWMOS   		 PWMCON0    &= ~SET_BIT3
#define clr_PWMCLKDIV2   PWMCON0    &= ~SET_BIT2
#define clr_PWMCLKDIV1   PWMCON0    &= ~SET_BIT1
#define clr_PWMCLKDIV0   PWMCON0    &= ~SET_BIT0

//PWMCON1
#define set_PWMMOD1   PWMCON1    |= SET_BIT7
#define set_PWMMOD0   PWMCON1    |= SET_BIT6
#define set_PWM5PNP   PWMCON1    |= SET_BIT5
#define set_PWM4PNP   PWMCON1    |= SET_BIT4
#define set_PWM3PNP   PWMCON1    |= SET_BIT3
#define set_PWM2PNP   PWMCON1    |= SET_BIT2
#define set_PWM1PNP   PWMCON1    |= SET_BIT1
#define set_PWM0PNP   PWMCON1    |= SET_BIT0

#define clr_PWMMOD1   PWMCON1    &= ~SET_BIT7
#define clr_PWMMOD0   PWMCON1    &= ~SET_BIT6
#define clr_PWM5PNP   PWMCON1    &= ~SET_BIT5
#define clr_PWM4PNP   PWMCON1    &= ~SET_BIT4
#define clr_PWM3PNP   PWMCON1    &= ~SET_BIT3
#define clr_PWM2PNP   PWMCON1    &= ~SET_BIT2
#define clr_PWM1PNP   PWMCON1    &= ~SET_BIT1
#define clr_PWM0PNP   PWMCON1    &= ~SET_BIT0

//PWMMASKEN
#define set_PWM5MEN   PWMMASKEN    |= SET_BIT5
#define set_PWM4MEN   PWMMASKEN    |= SET_BIT4
#define set_PWM3MEN   PWMMASKEN    |= SET_BIT3
#define set_PWM2MEN   PWMMASKEN    |= SET_BIT2
#define set_PWM1MEN   PWMMASKEN    |= SET_BIT1
#define set_PWM0MEN   PWMMASKEN    |= SET_BIT0

#define clr_PWM5MEN   PWMMASKEN    &= ~SET_BIT5
#define clr_PWM4MEN   PWMMASKEN    &= ~SET_BIT4
#define clr_PWM3MEN   PWMMASKEN    &= ~SET_BIT3
#define clr_PWM2MEN   PWMMASKEN    &= ~SET_BIT2
#define clr_PWM1MEN   PWMMASKEN    &= ~SET_BIT1
#define clr_PWM0MEN   PWMMASKEN    &= ~SET_BIT0

//PWMMASKDATA
#define set_PWM5MD   PWMMASKDATA    |= SET_BIT5
#define set_PWM4MD   PWMMASKDATA    |= SET_BIT4
#define set_PWM3MD   PWMMASKDATA    |= SET_BIT3
#define set_PWM2MD   PWMMASKDATA    |= SET_BIT2
#define set_PWM1MD   PWMMASKDATA    |= SET_BIT1
#define set_PWM0MD   PWMMASKDATA    |= SET_BIT0

#define clr_PWM5MD   PWMMASKDATA    &= ~SET_BIT5
#define clr_PWM4MD   PWMMASKDATA    &= ~SET_BIT4
#define clr_PWM3MD   PWMMASKDATA    &= ~SET_BIT3
#define clr_PWM2MD   PWMMASKDATA    &= ~SET_BIT2
#define clr_PWM1MD   PWMMASKDATA    &= ~SET_BIT1
#define clr_PWM0MD   PWMMASKDATA    &= ~SET_BIT0

//PWMINTCON
#define set_PWMINTTYP1   PWMCON1    |= SET_BIT7
#define set_PWMINTTYP0   PWMCON1    |= SET_BIT6
#define set_PWM5IEN      PWMCON1    |= SET_BIT5
#define set_PWM4IEN      PWMCON1    |= SET_BIT4
#define set_PWM3IEN      PWMCON1    |= SET_BIT3
#define set_PWM2IEN      PWMCON1    |= SET_BIT2
#define set_PWM1IEN      PWMCON1    |= SET_BIT1
#define set_PWM0IEN      PWMCON1    |= SET_BIT0

#define clr_PWMINTTYP1   PWMCON1    &= ~SET_BIT7
#define clr_PWMINTTYP0   PWMCON1    &= ~SET_BIT6
#define clr_PWM5IEN   	 PWMCON1    &= ~SET_BIT5
#define clr_PWM4IEN   	 PWMCON1    &= ~SET_BIT4
#define clr_PWM3IEN   	 PWMCON1    &= ~SET_BIT3
#define clr_PWM2IEN   	 PWMCON1    &= ~SET_BIT2
#define clr_PWM1IEN   	 PWMCON1    &= ~SET_BIT1
#define clr_PWM0IEN   	 PWMCON1    &= ~SET_BIT0

//PWMINTF
#define set_FBIF   		PWMINTF    |= SET_BIT6
#define set_PWM5IF    PWMINTF    |= SET_BIT5
#define set_PWM4IF    PWMINTF    |= SET_BIT4
#define set_PWM3IF    PWMINTF    |= SET_BIT3
#define set_PWM2IF    PWMINTF    |= SET_BIT2
#define set_PWM1IF    PWMINTF    |= SET_BIT1
#define set_PWM0IF    PWMINTF    |= SET_BIT0

#define clr_FBIF   		PWMINTF    &= ~SET_BIT6
#define clr_PWM5IF   	PWMINTF    &= ~SET_BIT5
#define clr_PWM4IF   	PWMINTF    &= ~SET_BIT4
#define clr_PWM3IF   	PWMINTF    &= ~SET_BIT3
#define clr_PWM2IF   	PWMINTF    &= ~SET_BIT2
#define clr_PWM1IF   	PWMINTF    &= ~SET_BIT1
#define clr_PWM0IF   	PWMINTF    &= ~SET_BIT0

//PWMFBCON0
#define set_GPIOFBCON1  PWMFBCON0    |= SET_BIT5
#define set_GPIOFBCON0  PWMFBCON0    |= SET_BIT4
#define set_GPIOFBEN    PWMFBCON0    |= SET_BIT1
#define set_ADCFBEN    	PWMFBCON0    |= SET_BIT0
                    
#define clr_GPIOFBCON1  PWMFBCON0    &= ~SET_BIT5
#define clr_GPIOFBCON0  PWMFBCON0    &= ~SET_BIT4
#define clr_GPIOFBEN    PWMFBCON0    &= ~SET_BIT1
#define clr_ADCFBEN     PWMFBCON0    &= ~SET_BIT0

//PWMFBCON1
#define set_PWM5FBD   PWMFBCON1    |= SET_BIT5
#define set_PWM4FBD   PWMFBCON1    |= SET_BIT4
#define set_PWM3FBD   PWMFBCON1    |= SET_BIT3
#define set_PWM2FBD   PWMFBCON1    |= SET_BIT2
#define set_PWM1FBD   PWMFBCON1    |= SET_BIT1
#define set_PWM0FBD   PWMFBCON1    |= SET_BIT0
                      
#define clr_PWM5FBD   PWMFBCON1    &= ~SET_BIT5
#define clr_PWM4FBD   PWMFBCON1    &= ~SET_BIT4
#define clr_PWM3FBD   PWMFBCON1    &= ~SET_BIT3
#define clr_PWM2FBD   PWMFBCON1    &= ~SET_BIT2
#define clr_PWM1FBD   PWMFBCON1    &= ~SET_BIT1
#define clr_PWM0FBD   PWMFBCON1    &= ~SET_BIT0

//PWMDTCON
#define set_PWMDTCYC11   PWMDTCON    |= SET_BIT7
#define set_PWMDTCYC10   PWMDTCON    |= SET_BIT6
#define set_PWMDTCYC9    PWMDTCON    |= SET_BIT5
#define set_PWMDTCYC8    PWMDTCON    |= SET_BIT4
#define set_PWM45DTEN    PWMDTCON    |= SET_BIT2
#define set_PWM23DTEN    PWMDTCON    |= SET_BIT1
#define set_PWM01DTEN    PWMDTCON    |= SET_BIT0
                            
#define clr_PWMDTCYC11   PWMDTCON    &= ~SET_BIT7
#define clr_PWMDTCYC10   PWMDTCON    &= ~SET_BIT6
#define clr_PWMDTCYC9 	 PWMDTCON    &= ~SET_BIT5
#define clr_PWMDTCYC8 	 PWMDTCON    &= ~SET_BIT4
#define clr_PWM45DTEN 	 PWMDTCON    &= ~SET_BIT2
#define clr_PWM23DTEN 	 PWMDTCON    &= ~SET_BIT1
#define clr_PWM01DTEN 	 PWMDTCON    &= ~SET_BIT0

//PWMDTCYC
#define set_PWMDTCYC7	   PWMDTCYC    |= SET_BIT7
#define set_PWMDTCYC6	   PWMDTCYC    |= SET_BIT6
#define set_PWMDTCYC5	   PWMDTCYC    |= SET_BIT5
#define set_PWMDTCYC4	   PWMDTCYC    |= SET_BIT4
#define set_PWMDTCYC3	   PWMDTCYC    |= SET_BIT3
#define set_PWMDTCYC2    PWMDTCYC    |= SET_BIT2
#define set_PWMDTCYC1    PWMDTCYC    |= SET_BIT1
#define set_PWMDTCYC0    PWMDTCYC    |= SET_BIT0

#define clr_PWMDTCYC7	   PWMDTCYC   &= ~SET_BIT7
#define clr_PWMDTCYC6	   PWMDTCYC   &= ~SET_BIT6
#define clr_PWMDTCYC5	   PWMDTCYC   &= ~SET_BIT5
#define clr_PWMDTCYC4	   PWMDTCYC   &= ~SET_BIT4
#define clr_PWMDTCYC3	   PWMDTCYC   &= ~SET_BIT3
#define clr_PWMDTCYC2    PWMDTCYC   &= ~SET_BIT2
#define clr_PWMDTCYC1    PWMDTCYC   &= ~SET_BIT1
#define clr_PWMDTCYC0    PWMDTCYC   &= ~SET_BIT0

//PWMPL

//PWMPH

//PWM0DL

//PWM0DH

//PWM1DL

//PWM1DH

//PWM2DL

//PWM2DH

//PWM3DL

//PWM3DH

//PWM4DL

//PWM4DH

//PWM5DL

//PWM5DH

//----------------------------------------------------------
// 6.PWM   registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 7.Beep   registers
//----------------------------------------------------------
//SFR BEEPCTR	= 0x86;
//----------------------------------------------------------
//----------------------------------------------------------
//BEEPCTR
#define set_BEEPSEL3	  BEEPCTR    |= SET_BIT3
#define set_BEEPSEL2    BEEPCTR    |= SET_BIT2
#define set_BEEPSEL1    BEEPCTR    |= SET_BIT1
#define set_BEEPSEL0    BEEPCTR    |= SET_BIT0

#define clr_BEEPSEL3	  BEEPCTR   &= ~SET_BIT3
#define clr_BEEPSEL2    BEEPCTR   &= ~SET_BIT2
#define clr_BEEPSEL1    BEEPCTR   &= ~SET_BIT1
#define clr_BEEPSEL0    BEEPCTR   &= ~SET_BIT0

//----------------------------------------------------------
// 7.Beep   registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 8.EUART  registers
//----------------------------------------------------------
//SFR S0CON	  = 0x98;
//SFR S1CON	  = 0x9b;
//SFR S0RELL	= 0xaa;
//SFR S0RELH	= 0xba;
//SFR S1RELL	= 0x9d;
//SFR S1RELH	= 0xbb;
//SFR S0BUF	  = 0x99;
//SFR S1BUF	  = 0x9c;
//----------------------------------------------------------
//----------------------------------------------------------
//S0CON
#define set_SM0	     SM0	      = 1
#define set_SM1	     SM1	      = 1
#define set_SM20	   SM20	      = 1
#define set_REN0	   REN0	      = 1
#define set_TB80	   TB80	      = 1
#define set_RB80	   RB80	      = 1
#define set_TI0	     TI0	      = 1
#define set_RI0	     RI0	      = 1

#define clr_SM0	     SM0	      = 0
#define clr_SM1	     SM1	      = 0
#define clr_SM20	   SM20	      = 0
#define clr_REN0	   REN0	      = 0
#define clr_TB80	   TB80	      = 0
#define clr_RB80	   RB80	      = 0
#define clr_TI0	     TI0	      = 0
#define clr_RI0	     RI0	      = 0

//S1CON
#define set_S1M0	   S1CON    |= SET_BIT7
#define set_SM21	   S1CON    |= SET_BIT5
#define set_REN1	   S1CON    |= SET_BIT4
#define set_TB81	   S1CON    |= SET_BIT3
#define set_RB81     S1CON    |= SET_BIT2
#define set_TI1      S1CON    |= SET_BIT1
#define set_RI1      S1CON    |= SET_BIT0

#define clr_S1M0	   S1CON   &= ~SET_BIT7
#define clr_S1M1	   S1CON   &= ~SET_BIT6
#define clr_SM21	   S1CON   &= ~SET_BIT5
#define clr_REN1	   S1CON   &= ~SET_BIT4
#define clr_TB81	   S1CON   &= ~SET_BIT3
#define clr_RB81     S1CON   &= ~SET_BIT2
#define clr_TI1      S1CON   &= ~SET_BIT1
#define clr_RI1      S1CON   &= ~SET_BIT0

//S0RELL

//S0RELH

//S1RELL

//S1RELH

//S0BUF

//S1BUF

//----------------------------------------------------------
// 8.EUART  registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 9.Ananlog registers
//----------------------------------------------------------
//SFR ADCVREFSEL  = 0xfe;
//SFR ADDH	      = 0xf6;
//SFR ADDL	      = 0xee;
//SFR RC16MITUNE  = 0xe6;
//SFR RC16MADJ    = 0xde;
//SFR ADT		      = 0xff;
//SFR ADCON1      = 0xef;
//SFR ADCON2      = 0xe7;
//SFR ADCON3      = 0xdf;
//SFR LVDLVRCON   = 0xfd;
//SFR LVDCP       = 0x87;
//----------------------------------------------------------
//----------------------------------------------------------
//ADCVREFSEL

//ADDH

//ADDL

//ADT
#define set_SH_CTR2 		ADT    |= SET_BIT6
#define set_SH_CTR1   	ADT    |= SET_BIT5
#define set_SH_CTR0  		ADT    |= SET_BIT4
#define set_ADT2    	  ADT    |= SET_BIT2
#define set_ADT1     	  ADT    |= SET_BIT1
#define set_ADT0        ADT    |= SET_BIT0
                             
#define clr_SH_CTR2   	ADT   &= ~SET_BIT6
#define clr_SH_CTR1  		ADT   &= ~SET_BIT5
#define clr_SH_CTR0   	ADT   &= ~SET_BIT4
#define clr_ADT2      	ADT   &= ~SET_BIT2
#define clr_ADT1      	ADT   &= ~SET_BIT1
#define clr_ADT0      	ADT   &= ~SET_BIT0

//ADCON1
#define set_FILTER_EN1  ADCON1    |= SET_BIT7
#define set_FILTER_EN0  ADCON1    |= SET_BIT6
#define set_GO	   		  ADCON1    |= SET_BIT5
#define set_OFFSET	    ADCON1    |= SET_BIT4
#define set_VREF_T	    ADCON1    |= SET_BIT3
#define set_AD_LP_EN    ADCON1    |= SET_BIT2
#define set_VREF_EN     ADCON1    |= SET_BIT1
#define set_ADCEN       ADCON1    |= SET_BIT0

#define clr_FILTER_EN1  ADCON1   &= ~SET_BIT7
#define clr_FILTER_EN0  ADCON1   &= ~SET_BIT6
#define clr_GO	   		  ADCON1   &= ~SET_BIT5
#define clr_OFFSET	    ADCON1   &= ~SET_BIT4
#define clr_VREF_T	    ADCON1   &= ~SET_BIT3
#define clr_AD_LP_EN    ADCON1   &= ~SET_BIT2
#define clr_VREF_EN     ADCON1   &= ~SET_BIT1
#define clr_ADCEN       ADCON1   &= ~SET_BIT0

//ADCON2
#define set_ADCIF  			ADCON2    |= SET_BIT7
#define set_DATAX  			ADCON2    |= SET_BIT6
#define set_MODE	   		ADCON2    |= SET_BIT5
#define set_EC	    		ADCON2    |= SET_BIT4
#define set_CHS3	    	ADCON2    |= SET_BIT3
#define set_CHS2    		ADCON2    |= SET_BIT2
#define set_CHS1     		ADCON2    |= SET_BIT1
#define set_CHS0       	ADCON2    |= SET_BIT0
                             
#define clr_ADCIF   		ADCON2   &= ~SET_BIT7
#define clr_DATAX   		ADCON2   &= ~SET_BIT6
#define clr_MODE	  		ADCON2   &= ~SET_BIT5
#define clr_EC	    		ADCON2   &= ~SET_BIT4
#define clr_CHS3	  		ADCON2   &= ~SET_BIT3
#define clr_CHS2    		ADCON2   &= ~SET_BIT2
#define clr_CHS1    		ADCON2   &= ~SET_BIT1
#define clr_CHS0    		ADCON2   &= ~SET_BIT0

//ADCON3
#define set_SV_SEL2 		ADCON3    |= SET_BIT6
#define set_SV_SEL1   	ADCON3    |= SET_BIT5
#define set_SV_SEL0  		ADCON3    |= SET_BIT4
#define set_R_CAL3	    ADCON3    |= SET_BIT3
#define set_R_CAL2    	ADCON3    |= SET_BIT2
#define set_R_CAL1     	ADCON3    |= SET_BIT1
#define set_R_CAL0      ADCON3    |= SET_BIT0
                             
#define clr_SV_SEL2   	ADCON3   &= ~SET_BIT6
#define clr_SV_SEL1  		ADCON3   &= ~SET_BIT5
#define clr_SV_SEL0   	ADCON3   &= ~SET_BIT4
#define clr_R_CAL3	  	ADCON3   &= ~SET_BIT3
#define clr_R_CAL2    	ADCON3   &= ~SET_BIT2
#define clr_R_CAL1    	ADCON3   &= ~SET_BIT1
#define clr_R_CAL0    	ADCON3   &= ~SET_BIT0

//LVDLVRCON
#define set_LVDS3  			LVDLVRCON    |= SET_BIT7
#define set_LVDS2  			LVDLVRCON    |= SET_BIT6
#define set_LVDS1   		LVDLVRCON    |= SET_BIT5
#define set_LVDS0   		LVDLVRCON    |= SET_BIT4
#define set_LVDFRSTEN	  LVDLVRCON    |= SET_BIT3
#define set_LVDF    		LVDLVRCON    |= SET_BIT2
#define set_LVRENB     	LVDLVRCON    |= SET_BIT1
#define set_LVDENB      LVDLVRCON    |= SET_BIT0
                             
#define clr_LVDS3  		  LVDLVRCON   &= ~SET_BIT7
#define clr_LVDS2  		  LVDLVRCON   &= ~SET_BIT6
#define clr_LVDS1   	  LVDLVRCON   &= ~SET_BIT5
#define clr_LVDS0   	  LVDLVRCON   &= ~SET_BIT4
#define clr_LVDFRSTEN  	LVDLVRCON   &= ~SET_BIT3
#define clr_LVDF    	  LVDLVRCON   &= ~SET_BIT2
#define clr_LVRENB      LVDLVRCON   &= ~SET_BIT1
#define clr_LVDENB      LVDLVRCON   &= ~SET_BIT0

//LVDCP
#define set_LVD_CP_INTEN	 	LVDCP    |= SET_BIT7
#define set_LVD_CP_INTCON	 	LVDCP    |= SET_BIT6
#define set_LVD_CP_IF	 			LVDCP    |= SET_BIT5
#define set_CP_O	 					LVDCP    |= SET_BIT4
#define set_LVD_CP_INP_SEL	LVDCP    |= SET_BIT2
#define set_LVD_CP_INN_SEL  LVDCP    |= SET_BIT1
#define set_LVD_CP_EN  			LVDCP    |= SET_BIT0
                             
#define clr_LVD_CP_INTEN	  LVDCP   &= ~SET_BIT7
#define clr_LVD_CP_INTCON	  LVDCP   &= ~SET_BIT6
#define clr_LVD_CP_IF	 		  LVDCP   &= ~SET_BIT5
#define clr_CP_O	 				  LVDCP   &= ~SET_BIT4
#define clr_LVD_CP_INP_SEL  LVDCP   &= ~SET_BIT2
#define clr_LVD_CP_INN_SEL  LVDCP   &= ~SET_BIT1
#define clr_LVD_CP_EN  		  LVDCP   &= ~SET_BIT0

//RC16MITUNE

//RC16MADJ

//----------------------------------------------------------
// 9.Ananlog registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 10.RTC registers
//----------------------------------------------------------
//SFR RTCSECOND	= 0xb2;
//SFR RTCMINUTE	= 0xb3;
//SFR RTCHOUR  	= 0xa2;
//SFR RTCCON   	= 0xa3;
//----------------------------------------------------------
//----------------------------------------------------------
//RTCSECOND

//RTCMINUTE

//RTCHOUR

//RTCCON
#define set_RTCEN  			  RTCCON    |= SET_BIT7
#define set_RTCIRQ   		  RTCCON    |= SET_BIT5
#define set_DAYINTEN   		RTCCON    |= SET_BIT4
#define set_HOURINTEN	    RTCCON    |= SET_BIT3
#define set_MININTEN      RTCCON    |= SET_BIT2
#define set_SECINTEN     	RTCCON    |= SET_BIT1
#define set_HALFSECINTEN  RTCCON    |= SET_BIT0
                             
#define clr_RTCEN  			  RTCCON   &= ~SET_BIT7
#define clr_RTCIRQ   		  RTCCON   &= ~SET_BIT5
#define clr_DAYINTEN   	  RTCCON   &= ~SET_BIT4
#define clr_HOURINTEN	    RTCCON   &= ~SET_BIT3
#define clr_MININTEN      RTCCON   &= ~SET_BIT2
#define clr_SECINTEN      RTCCON   &= ~SET_BIT1
#define clr_HALFSECINTEN  RTCCON   &= ~SET_BIT0

//----------------------------------------------------------
// 10.RTC registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 11.SPI   registers
//----------------------------------------------------------
//SFR SPICR	= 0x93;
//SFR SPIDR	= 0x94;
//SFR SPISR	= 0x95;
//----------------------------------------------------------
//----------------------------------------------------------
//SPICR
#define set_SPIE  			SPICR    |= SET_BIT7
#define set_SPE  				SPICR    |= SET_BIT6
#define set_SPR2   			SPICR    |= SET_BIT5
#define set_MSTR   			SPICR    |= SET_BIT4
#define set_CPOL  	  	SPICR    |= SET_BIT3
#define set_CPHA    		SPICR    |= SET_BIT2
#define set_SPR1     		SPICR    |= SET_BIT1
#define set_SPR0      	SPICR    |= SET_BIT0
                             
#define clr_SPIE  		  SPICR   &= ~SET_BIT7
#define clr_SPE  		  	SPICR   &= ~SET_BIT6
#define clr_SPR2   	  	SPICR   &= ~SET_BIT5
#define clr_MSTR   	  	SPICR   &= ~SET_BIT4
#define clr_CPOL  			SPICR   &= ~SET_BIT3
#define clr_CPHA    	  SPICR   &= ~SET_BIT2
#define clr_SPR1      	SPICR   &= ~SET_BIT1
#define clr_SPR0      	SPICR   &= ~SET_BIT0

//SPIDR

//SPISR 	Only Read Reg

//----------------------------------------------------------
// 11.SPI registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 12.I2CM & I2CS  registers
//----------------------------------------------------------
//SFR TOPCON   	= 0x8f;
//SFR MPRESC  	= 0xbf;
//SFR MSCON   	= 0xd7;
//SFR MSRXBUF 	= 0xcf;
//SFR MSTXBUF 	= 0xc7;
//SFR MSSTAT0 	= 0xb7;
//SFR MSSTAT1 	= 0xaf;
//SFR MSIEN0 	  = 0xa7;
//SFR MSIEN1 	  = 0x9f;
//SFR MSADDR 	  = 0x97;
//----------------------------------------------------------
//----------------------------------------------------------
//TOPCON
#define set_TOPCON      	TOPCON    |= SET_BIT0

#define clr_TOPCON      	TOPCON   &= ~SET_BIT0

//*******************************//
//SLAVE Mode
//*******************************//
#define	STCON 	MSCON
#define	SRXBUF	MSRXBUF
#define	STXBUF	MSTXBUF
#define	SSTAT0	MSSTAT0
#define	SSTAT1	MSSTAT1
#define	SIEN0		MSIEN0
#define	SIEN1		MSIEN1
#define	SSADDR	MSADDR

//STCON
#define set_I2CEN				SPICR    |= SET_BIT6
#define set_SWS    			SPICR    |= SET_BIT5
#define set_TIG       	SPICR    |= SET_BIT0
                             
#define clr_I2CEN  		  SPICR   &= ~SET_BIT6
#define clr_SWS   	  	SPICR   &= ~SET_BIT5
#define clr_TIG      		SPICR   &= ~SET_BIT0

//SRXBUF

//STXBUF

//SSTAT0
#define set_GC  				MSSTAT0    |= SET_BIT6
#define set_SUNE    		MSSTAT0    |= SET_BIT2
#define set_SOVF     		MSSTAT0    |= SET_BIT1
#define set_SNE      		MSSTAT0    |= SET_BIT0
                        
#define clr_GC  		  	MSSTAT0   &= ~SET_BIT6
#define clr_SUNE    	  MSSTAT0   &= ~SET_BIT2
#define clr_SOVF      	MSSTAT0   &= ~SET_BIT1
#define clr_SNE       	MSSTAT0   &= ~SET_BIT0

//SSTAT1
#define set_SSTBE   		MSSTAT1    |= SET_BIT5
#define set_SSTBF  	  	MSSTAT1    |= SET_BIT3
#define set_SSRBE    		MSSTAT1    |= SET_BIT2
#define set_SSRBF      	MSSTAT1    |= SET_BIT0
                        
#define clr_SSTBE   	  MSSTAT1   &= ~SET_BIT5
#define clr_SSTBF  			MSSTAT1   &= ~SET_BIT3
#define clr_SSRBE    	  MSSTAT1   &= ~SET_BIT2
#define clr_SSRBF      	MSSTAT1   &= ~SET_BIT0

//SIEN0
#define set_SEGC   				MSIEN0    |= SET_BIT6
#define set_SESUNF  	  	MSIEN0    |= SET_BIT2
#define set_SESOVF    		MSIEN0    |= SET_BIT1
#define set_SESNE      		MSIEN0    |= SET_BIT0
                      
#define clr_SEGC     	  	MSIEN0   &= ~SET_BIT6
#define clr_SESUNF  			MSIEN0   &= ~SET_BIT2
#define clr_SESOVF    	  MSIEN0   &= ~SET_BIT1
#define clr_SESNE       	MSIEN0   &= ~SET_BIT0

//SIEN1
#define set_SESBE   			MSIEN1    |= SET_BIT5
#define set_SESTBF  	  	MSIEN1    |= SET_BIT3
#define set_SESRBE    		MSIEN1    |= SET_BIT2
#define set_SESRBF      	MSIEN1    |= SET_BIT0
               
#define clr_SESBE    	  	MSIEN1   &= ~SET_BIT5
#define clr_SESTBF  			MSIEN1   &= ~SET_BIT3
#define clr_SESRBE    	  MSIEN1   &= ~SET_BIT2
#define clr_SESRBF      	MSIEN1   &= ~SET_BIT0

//SSADDR

//*******************************//
//MASTER Mode
//*******************************//
#define	MCON 		MSCON
#define	MRXBUF	MSRXBUF
#define	MTXBUF	MSTXBUF
#define	MSTAT0	MSSTAT0
#define	MSTAT1	MSSTAT1
#define	MIEN0		MSIEN0
#define	MIEN1		MSIEN1
#define	MCADDR	MSADDR

//MCON
#define set_WAIT   			STCON    |= SET_BIT5
#define set_STOP  	  	STCON    |= SET_BIT3
#define set_SRST    		STCON    |= SET_BIT2
#define set_STA     		STCON    |= SET_BIT1
#define set_BUSY      	STCON    |= SET_BIT0
                        
#define clr_WAIT   	  	STCON   &= ~SET_BIT5
#define clr_STOP  			STCON   &= ~SET_BIT3
#define clr_SRST    	  STCON   &= ~SET_BIT2
#define clr_STA       	STCON   &= ~SET_BIT1
#define clr_BUSY      	STCON   &= ~SET_BIT0

//MRXBUF

//MTXBUF

//MPRESC

//MSTAT0
#define set_DNA    			MSTAT0    |= SET_BIT4
#define set_SANA  	  	MSTAT0    |= SET_BIT3
#define set_UNF     		MSTAT0    |= SET_BIT2
#define set_OVF     		MSTAT0    |= SET_BIT1
#define set_NEND      	MSTAT0    |= SET_BIT0
                        
#define clr_DNA   	  	MSTAT0   &= ~SET_BIT4
#define clr_SANA  			MSTAT0   &= ~SET_BIT3
#define clr_UNF    	  	MSTAT0   &= ~SET_BIT2
#define clr_OVF       	MSTAT0   &= ~SET_BIT1
#define clr_NEND      	MSTAT0   &= ~SET_BIT0

//MSTAT1
#define set_MTBE    		MSTAT1    |= SET_BIT5
#define set_MSTBF  	  	MSTAT1    |= SET_BIT3
#define set_MRBE     		MSTAT1    |= SET_BIT2
#define set_MRBF     		MSTAT1    |= SET_BIT0

#define clr_MTBE  	  	MSTAT1   &= ~SET_BIT5
#define clr_MSTBF 			MSTAT1   &= ~SET_BIT3
#define clr_MRBE   	  	MSTAT1   &= ~SET_BIT2
#define clr_MRBF      	MSTAT1   &= ~SET_BIT0

//MIEN0
#define set_METNA    		MIEN0    |= SET_BIT4
#define set_MESANA  	  MIEN0    |= SET_BIT3
#define set_METUR     	MIEN0    |= SET_BIT2
#define set_MEROVER     MIEN0    |= SET_BIT1
#define set_MENEND      MIEN0    |= SET_BIT0
           
#define clr_METNA  	  	MIEN0   &= ~SET_BIT4
#define clr_MESANA 			MIEN0   &= ~SET_BIT3
#define clr_METUR   	  MIEN0   &= ~SET_BIT2
#define clr_MEROVER    	MIEN0   &= ~SET_BIT1
#define clr_MENEND     	MIEN0   &= ~SET_BIT0

//MIEN1
#define set_METBE   	  	MIEN1    |= SET_BIT5
#define set_MESTBF    		MIEN1    |= SET_BIT3
#define set_MERBE       	MIEN1    |= SET_BIT2
#define set_MERBF       	MIEN1    |= SET_BIT0
                          
#define clr_METBE  				MIEN1   &= ~SET_BIT5
#define clr_MESTBF 	  		MIEN1   &= ~SET_BIT3
#define clr_MERBE     		MIEN1   &= ~SET_BIT2
#define clr_MERBF     		MIEN1   &= ~SET_BIT0

//MCADDR

//----------------------------------------------------------
// 12.I2CM & I2CS  registers END
//----------------------------------------------------------

//----------------------------------------------------------
// 13.TOP register
//----------------------------------------------------------
//SFR UID       = 0x8e;
//SFR EEPROMCON	= 0xdc;
//----------------------------------------------------------
//----------------------------------------------------------
//UID

//EEPROMCON
#define set_EEPROM1     EEPROMCON    |= SET_BIT1
#define set_EEPROM0     EEPROMCON    |= SET_BIT0
                        
#define clr_EEPROM1   	EEPROMCON   &= ~SET_BIT1
#define clr_EEPROM0   	EEPROMCON   &= ~SET_BIT0

//----------------------------------------------------------
// 13.TOP register END
//----------------------------------------------------------

//----------------------------------------------------------
// 14.Interrupt control registers
//----------------------------------------------------------
//SFR IEN0  = 0xa8;
//SFR IEN1	= 0xb8;
//SFR IP0		= 0xa9;
//SFR IP0H	= 0xa1;
//SFR IP1		= 0xb9;
//SFR IP1H	= 0xb1;
//----------------------------------------------------------
//----------------------------------------------------------

//IEN0
#define set_EA		  EA		   = 1
#define set_EADC	  EADC	   = 1
#define set_EPWM	  EPWM	   = 1
#define set_ES0	    ES0	     = 1
#define set_ET1	    ET1	     = 1
#define set_ES1	    ES1	     = 1
#define set_ET0	    ET0	     = 1
#define set_EX0	    EX0	     = 1

#define clr_EA		  EA		   = 0
#define clr_EADC	  EADC	   = 0
#define clr_EPWM	  EPWM	   = 0
#define clr_ES0	    ES0	     = 0
#define clr_ET1	    ET1	     = 0
#define clr_ES1	    ES1	     = 0
#define clr_ET0	    ET0	     = 0
#define clr_EX0	    EX0	     = 0

//IEN1
#define set_ELVD      ELVD      = 1
#define set_ELVDCP	  ELVDCP	  = 1
#define set_ERTC      ERTC      = 1
#define set_EI2CFIFO  EI2CFIFO  = 1
#define set_EI2CRXTX  EI2CRXTX  = 1
#define set_ESPI      ESPI      = 1

#define clr_ELVD      ELVD      = 0
#define clr_ELVDCP	  ELVDCP	  = 0
#define clr_ERTC      ERTC      = 0
#define clr_EI2CFIFO  EI2CFIFO  = 0
#define clr_EI2CRXTX  EI2CRXTX  = 0
#define clr_ESPI      ESPI      = 0

//IP0	
#define set_IP0_ADC      IP0    |= SET_BIT6
#define set_IP0_PWM      IP0    |= SET_BIT5
#define set_IP0_UART0    IP0    |= SET_BIT4
#define set_IP0_Timer1   IP0    |= SET_BIT3
#define set_IP0_UART1    IP0    |= SET_BIT2
#define set_IP0_Timer0   IP0    |= SET_BIT1
#define set_IP0_PORT     IP0    |= SET_BIT0
                              
#define clr_IP0_ADC      IP0    &= ~SET_BIT6
#define clr_IP0_PWM      IP0    &= ~SET_BIT5
#define clr_IP0_UART0    IP0    &= ~SET_BIT4
#define clr_IP0_Timer1   IP0    &= ~SET_BIT3
#define clr_IP0_UART1    IP0    &= ~SET_BIT2
#define clr_IP0_Timer0   IP0    &= ~SET_BIT1
#define clr_IP0_PORT     IP0    &= ~SET_BIT0

//IP0H
#define set_IP0H_LVD     IP0H    |= SET_BIT5
#define set_IP0H_LVDCP   IP0H    |= SET_BIT4
#define set_IP0H_RTC     IP0H    |= SET_BIT3
#define set_IP0H_I2CFIFO IP0H    |= SET_BIT2
#define set_IP0H_I2CTXRX IP0H    |= SET_BIT1
#define set_IP0H_SPI     IP0H    |= SET_BIT0
               
#define clr_IP0H_LVD     IP0H    &= ~SET_BIT5
#define clr_IP0H_LVDCP   IP0H    &= ~SET_BIT4
#define clr_IP0H_RTC     IP0H    &= ~SET_BIT3
#define clr_IP0H_I2CFIFO IP0H    &= ~SET_BIT2
#define clr_IP0H_I2CTXRX IP0H    &= ~SET_BIT1
#define clr_IP0H_SPI     IP0H    &= ~SET_BIT0

//IP1	
#define set_IP1_ADC      IP1    |= SET_BIT6
#define set_IP1_PWM      IP1    |= SET_BIT5
#define set_IP1_UART0    IP1    |= SET_BIT4
#define set_IP1_Timer1   IP1    |= SET_BIT3
#define set_IP1_UART1    IP1    |= SET_BIT2 
#define set_IP1_Timer0   IP1    |= SET_BIT1
#define set_IP1_PORT     IP1    |= SET_BIT0
                            
#define clr_IP1_ADC      IP1    &= ~SET_BIT6
#define clr_IP1_PWM      IP1    &= ~SET_BIT5
#define clr_IP1_UART0    IP1    &= ~SET_BIT4
#define clr_IP1_Timer1   IP1    &= ~SET_BIT3
#define clr_IP1_UART1    IP1    &= ~SET_BIT2 
#define clr_IP1_Timer0   IP1    &= ~SET_BIT1
#define clr_IP1_PORT     IP1    &= ~SET_BIT0

//IP1H
#define set_IP1H_LVD     IP1H    |= SET_BIT5
#define set_IP1H_LVDCP   IP1H    |= SET_BIT4
#define set_IP1H_RTC     IP1H    |= SET_BIT3
#define set_IP1H_I2CFIFO IP1H    |= SET_BIT2
#define set_IP1H_I2CTXRX IP1H    |= SET_BIT1
#define set_IP1H_SPI     IP1H    |= SET_BIT0
               
#define clr_IP1H_LVD     IP1H    &= ~SET_BIT5
#define clr_IP1H_LVDCP   IP1H    &= ~SET_BIT4
#define clr_IP1H_RTC     IP1H    &= ~SET_BIT3
#define clr_IP1H_I2CFIFO IP1H    &= ~SET_BIT2
#define clr_IP1H_I2CTXRX IP1H    &= ~SET_BIT1
#define clr_IP1H_SPI     IP1H    &= ~SET_BIT0

//----------------------------------------------------------
//14.Interrupt control registers END
//----------------------------------------------------------


#endif
