/*****************************************************************************************
* For GPIO setting 
*****************************************************************************************/
//------------------- Define Port as Push Pull mode -------------------
#define P00_PushPull_Mode						clr_P0OEN0
#define P01_PushPull_Mode						clr_P0OEN1
#define P02_PushPull_Mode						clr_P0OEN2
#define P03_PushPull_Mode						clr_P0OEN3		//It's not can be used for output port
#define P04_PushPull_Mode						clr_P0OEN4
#define P05_PushPull_Mode						clr_P0OEN5
#define P06_PushPull_Mode						clr_P0OEN6
#define P07_PushPull_Mode						clr_P0OEN7
#define P10_PushPull_Mode						clr_P1OEN0
#define P11_PushPull_Mode						clr_P1OEN1
#define P12_PushPull_Mode						clr_P1OEN2
#define P13_PushPull_Mode						clr_P1OEN3
#define P14_PushPull_Mode						clr_P1OEN4
#define P15_PushPull_Mode						clr_P1OEN5
#define P16_PushPull_Mode						clr_P1OEN6
#define P17_PushPull_Mode						clr_P1OEN7
#define P20_PushPull_Mode						clr_P2OEN0
#define P21_PushPull_Mode						clr_P2OEN1
//------------------- Define Port as Input Only mode -------------------
#define P00_Input_Mode							set_P0OEN0;set_P0PUN0;set_P0PDN0
#define P01_Input_Mode							set_P0OEN1;set_P0PUN1;set_P0PDN1
#define P02_Input_Mode							set_P0OEN2;set_P0PUN2;set_P0PDN2
#define P03_Input_Mode							set_P0OEN3;set_P0PUN3;set_P0PDN3
#define P04_Input_Mode							set_P0OEN4;set_P0PUN4;set_P0PDN4
#define P05_Input_Mode							set_P0OEN5;set_P0PUN5;set_P0PDN5
#define P06_Input_Mode							set_P0OEN6;set_P0PUN6;set_P0PDN6
#define P07_Input_Mode							set_P0OEN7;set_P0PUN7;set_P0PDN7
#define P10_Input_Mode							set_P1OEN0;set_P1PUN0;set_P1PDN0
#define P11_Input_Mode							set_P1OEN1;set_P1PUN1;set_P1PDN1
#define P12_Input_Mode							set_P1OEN2;set_P1PUN2;set_P1PDN2
#define P13_Input_Mode							set_P1OEN3;set_P1PUN3;set_P1PDN3
#define P14_Input_Mode							set_P1OEN4;set_P1PUN4;set_P1PDN4
#define P15_Input_Mode							set_P1OEN5;set_P1PUN5;set_P1PDN5
#define P16_Input_Mode							set_P1OEN6;set_P1PUN6;set_P1PDN6
#define P17_Input_Mode							set_P1OEN7;set_P1PUN7;set_P1PDN7
#define P20_Input_Mode							set_P2OEN0;set_P2PUN0;set_P2PDN0
#define P21_Input_Mode							set_P2OEN1;set_P2PUN1;set_P2PDN1
//------------------- Define Port as Input Pullup mode -------------------
#define P00_Input_Pullup_Mode				set_P0OEN0;clr_P0PUN0;set_P0PDN0
#define P01_Input_Pullup_Mode				set_P0OEN1;clr_P0PUN1;set_P0PDN1
#define P02_Input_Pullup_Mode				set_P0OEN2;clr_P0PUN2;set_P0PDN2
#define P03_Input_Pullup_Mode				set_P0OEN3;clr_P0PUN3;set_P0PDN3
#define P04_Input_Pullup_Mode				set_P0OEN4;clr_P0PUN4;set_P0PDN4
#define P05_Input_Pullup_Mode				set_P0OEN5;clr_P0PUN5;set_P0PDN5
#define P06_Input_Pullup_Mode				set_P0OEN6;clr_P0PUN6;set_P0PDN6
#define P07_Input_Pullup_Mode				set_P0OEN7;clr_P0PUN7;set_P0PDN7
#define P10_Input_Pullup_Mode				set_P1OEN0;clr_P1PUN0;set_P1PDN0
#define P11_Input_Pullup_Mode				set_P1OEN1;clr_P1PUN1;set_P1PDN1
#define P12_Input_Pullup_Mode				set_P1OEN2;clr_P1PUN2;set_P1PDN2
#define P13_Input_Pullup_Mode				set_P1OEN3;clr_P1PUN3;set_P1PDN3
#define P14_Input_Pullup_Mode				set_P1OEN4;clr_P1PUN4;set_P1PDN4
#define P15_Input_Pullup_Mode				set_P1OEN5;clr_P1PUN5;set_P1PDN5
#define P16_Input_Pullup_Mode				set_P1OEN6;clr_P1PUN6;set_P1PDN6
#define P17_Input_Pullup_Mode				set_P1OEN7;clr_P1PUN7;set_P1PDN7
#define P20_Input_Pullup_Mode				set_P2OEN0;clr_P2PUN0;set_P2PDN0
#define P21_Input_Pullup_Mode				set_P2OEN1;clr_P2PUN1;set_P2PDN1
//------------------- Define Port as Input Pulldown mode -------------------
#define P00_Input_Pulldown_Mode			set_P0OEN0;set_P0PUN0;clr_P0PDN0
#define P01_Input_Pulldown_Mode			set_P0OEN1;set_P0PUN1;clr_P0PDN1
#define P02_Input_Pulldown_Mode			set_P0OEN2;set_P0PUN2;clr_P0PDN2
#define P03_Input_Pulldown_Mode			set_P0OEN3;set_P0PUN3;clr_P0PDN3
#define P04_Input_Pulldown_Mode			set_P0OEN4;set_P0PUN4;clr_P0PDN4
#define P05_Input_Pulldown_Mode			set_P0OEN5;set_P0PUN5;clr_P0PDN5
#define P06_Input_Pulldown_Mode			set_P0OEN6;set_P0PUN6;clr_P0PDN6
#define P07_Input_Pulldown_Mode			set_P0OEN7;set_P0PUN7;clr_P0PDN7
#define P10_Input_Pulldown_Mode			set_P1OEN0;set_P1PUN0;clr_P1PDN0
#define P11_Input_Pulldown_Mode			set_P1OEN1;set_P1PUN1;clr_P1PDN1
#define P12_Input_Pulldown_Mode			set_P1OEN2;set_P1PUN2;clr_P1PDN2
#define P13_Input_Pulldown_Mode			set_P1OEN3;set_P1PUN3;clr_P1PDN3
#define P14_Input_Pulldown_Mode			set_P1OEN4;set_P1PUN4;clr_P1PDN4
#define P15_Input_Pulldown_Mode			set_P1OEN5;set_P1PUN5;clr_P1PDN5
#define P16_Input_Pulldown_Mode			set_P1OEN6;set_P1PUN6;clr_P1PDN6
#define P17_Input_Pulldown_Mode			set_P1OEN7;set_P1PUN7;clr_P1PDN7
#define P20_Input_Pulldown_Mode			set_P2OEN0;set_P2PUN0;clr_P2PDN0
#define P21_Input_Pulldown_Mode			set_P2OEN1;set_P2PUN1;clr_P2PDN1
//-------------------Define Port as Oen Drain mode -------------------
#define P00_OpenDrain_Mode_EN			 	clr_P0ODN0
#define P01_OpenDrain_Mode_EN			 	clr_P0ODN1
#define P02_OpenDrain_Mode_EN			 	clr_P0ODN2
#define P03_OpenDrain_Mode_EN			 	clr_P0ODN3
#define P04_OpenDrain_Mode_EN			 	clr_P0ODN4
#define P05_OpenDrain_Mode_EN			 	clr_P0ODN5
#define P06_OpenDrain_Mode_EN			 	clr_P0ODN6
#define P07_OpenDrain_Mode_EN			 	clr_P0ODN7
#define P10_OpenDrain_Mode_EN			 	clr_P1ODN0
#define P11_OpenDrain_Mode_EN			 	clr_P1ODN1
#define P12_OpenDrain_Mode_EN			 	clr_P1ODN2
#define P13_OpenDrain_Mode_EN			 	clr_P1ODN3
#define P14_OpenDrain_Mode_EN			 	clr_P1ODN4
#define P15_OpenDrain_Mode_EN			 	clr_P1ODN5
#define P16_OpenDrain_Mode_EN			 	clr_P1ODN6
#define P17_OpenDrain_Mode_EN			 	clr_P1ODN7
#define P20_OpenDrain_Mode_EN			 	clr_P2ODN0
#define P21_OpenDrain_Mode_EN			 	clr_P2ODN1
																		
#define P00_OpenDrain_Mode_DIS		 	set_P0ODN0
#define P01_OpenDrain_Mode_DIS		 	set_P0ODN1
#define P02_OpenDrain_Mode_DIS		 	set_P0ODN2
#define P03_OpenDrain_Mode_DIS		 	set_P0ODN3
#define P04_OpenDrain_Mode_DIS		 	set_P0ODN4
#define P05_OpenDrain_Mode_DIS		 	set_P0ODN5
#define P06_OpenDrain_Mode_DIS		 	set_P0ODN6
#define P07_OpenDrain_Mode_DIS		 	set_P0ODN7
#define P10_OpenDrain_Mode_DIS		 	set_P1ODN0
#define P11_OpenDrain_Mode_DIS		 	set_P1ODN1
#define P12_OpenDrain_Mode_DIS		 	set_P1ODN2
#define P13_OpenDrain_Mode_DIS		 	set_P1ODN3
#define P14_OpenDrain_Mode_DIS		 	set_P1ODN4
#define P15_OpenDrain_Mode_DIS		 	set_P1ODN5
#define P16_OpenDrain_Mode_DIS		 	set_P1ODN6
#define P17_OpenDrain_Mode_DIS		 	set_P1ODN7
#define P20_OpenDrain_Mode_DIS		 	set_P2ODN0
#define P21_OpenDrain_Mode_DIS		 	set_P2ODN1
//--------- Define all port as default IO mode ---------
#define Set_All_GPIO_Default_IO_Mode			PORTMUX1L=0x00;PORTMUX1H=0x00;PORTMUX2=0x00;PORTMUX3=0x00;PORTMUX4=0x00

#define Rst_All_GPIO_IO_PORTMUX_Mode			PORTMUX1L=0xFF;PORTMUX1H=0xFF;PORTMUX2=0xFF;PORTMUX3=0xFF;PORTMUX4=0xFF;\
																					PORTMUX1L=0x00;PORTMUX1H=0x00;PORTMUX2=0x00;PORTMUX3=0x00;PORTMUX4=0x00

/*****************************************************************************************
* For TIMER setting is base on " option -> C51 -> Preprocesser Symbols -> Define "
*****************************************************************************************/
#ifdef FOSC_160000		// if Fsys = 16MHz 
		#define TIMER_DIV1_VALUE_1us				65536-16				//16/16000000 				= 1 	uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_10us				65536-160				//160/16000000 				= 10 	uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_100us			65536-1600			//1600/16000000 			= 100 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_200us			65536-3200			//3200/16000000 			= 200 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_500us			65536-8000			//8000/16000000 			= 500 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_1ms				65536-16000			//16000/16000000 			= 1 	mS, 		// Timer divider = 1

		#define TIMER_DIV8_VALUE_10us				65536-20				//20*8/16000000 			= 10 uS,    	// Timer divider = 8
		#define TIMER_DIV8_VALUE_100us			65536-200				//200*8/16000000 			= 100 us			// Timer divider = 8
		#define TIMER_DIV8_VALUE_200us			65536-400				//400*8/16000000 			= 200 us			// Timer divider = 8
		#define TIMER_DIV8_VALUE_500us			65536-1000			//1000*8/16000000 		= 500 us			// Timer divider = 8
    #define TIMER_DIV8_VALUE_1ms				65536-2000			//2000*8/16000000 		= 1 mS,   		// Timer divider = 8
    #define TIMER_DIV8_VALUE_10ms				65536-20000			//20000*8/16000000 		= 10 mS,   		// Timer divider = 8
		
		#define TIMER_DIV64_VALUE_100us			65536-25				//25*64/16000000 			= 100 us			// Timer	divider = 16
		#define TIMER_DIV64_VALUE_1ms				65536-250				//250*64/16000000 		= 1 ms				// Timer	divider = 16
		#define TIMER_DIV64_VALUE_10ms			65536-2500			//2500*64/16000000 		= 10 ms				// Timer	divider = 16
		#define TIMER_DIV64_VALUE_100ms			65536-25000			//25000*64/16000000 	= 100 ms			// Timer	divider = 16
		
		#define TIMER_DIV256_VALUE_2ms			65536-125				//125*256/16000000 		= 2 ms 					// Timer divider = 256
		#define	TIMER_DIV256_VALUE_10ms			65536-625				//625*256/16000000 		= 10 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_100ms		65536-6250			//6250*256/16000000 	= 100 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_200ms		65536-12500			//12500*256/16000000 	= 200 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_500ms		65536-31250			//31250*256/16000000 	= 500 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_1s				65536-62500			//62500*256/16000000 	= 1 	s.  			// Timer Divider = 256
#endif

#ifdef FOSC_80000		// if Fsys = 8MHz 
		#define TIMER_DIV1_VALUE_1us				65536-8					//16/16000000 				= 1 	uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_10us				65536-80				//160/16000000 				= 10 	uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_100us			65536-800				//1600/16000000 			= 100 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_200us			65536-1600			//3200/16000000 			= 200 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_500us			65536-4000			//8000/16000000 			= 500 uS,  		// Timer divider = 1
		#define TIMER_DIV1_VALUE_1ms				65536-8000			//16000/16000000 			= 1 	mS, 		// Timer divider = 1

		#define TIMER_DIV8_VALUE_10us				65536-10				//20*8/16000000 			= 10 uS,    	// Timer divider = 8
		#define TIMER_DIV8_VALUE_100us			65536-100				//200*8/16000000 			= 100 us			// Timer divider = 8
		#define TIMER_DIV8_VALUE_200us			65536-200				//400*8/16000000 			= 200 us			// Timer divider = 8
		#define TIMER_DIV8_VALUE_500us			65536-500				//1000*8/16000000 		= 500 us			// Timer divider = 8
    #define TIMER_DIV8_VALUE_1ms				65536-1000			//2000*8/16000000 		= 1 mS,   		// Timer divider = 8
    #define TIMER_DIV8_VALUE_10ms				65536-10000			//20000*8/16000000 		= 10 mS,   		// Timer divider = 8
		
		#define TIMER_DIV64_VALUE_100us			65536-12				//25*64/16000000 			= 100 us			// Timer	divider = 16
		#define TIMER_DIV64_VALUE_1ms				65536-125				//250*64/16000000 		= 1 ms				// Timer	divider = 16
		#define TIMER_DIV64_VALUE_10ms			65536-1250			//2500*64/16000000 		= 10 ms				// Timer	divider = 16
		#define TIMER_DIV64_VALUE_100ms			65536-12500			//25000*64/16000000 	= 100 ms			// Timer	divider = 16
		
		#define TIMER_DIV256_VALUE_2ms			65536-72				//125*256/16000000 		= 2 ms 					// Timer divider = 256
		#define	TIMER_DIV256_VALUE_10ms			65536-312				//625*256/16000000 		= 10 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_100ms		65536-3125			//6250*256/16000000 	= 100 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_200ms		65536-6250			//12500*256/16000000 	= 200 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_500ms		65536-15625			//31250*256/16000000 	= 500 ms.  			// Timer Divider = 256
		#define	TIMER_DIV256_VALUE_1s				65536-31250			//62500*256/16000000 	= 1 	s.  			// Timer Divider = 256
#endif

//-------------------- Timer0 function define --------------------
#define		TIMER0_MODE0_ENABLE		TMOD&=0x0F
#define		TIMER0_MODE1_ENABLE		TMOD&=0x0F;TMOD|=0x10
#define		TIMER0_MODE2_ENABLE		TMOD&=0x0F;TMOD|=0x20
#define		TIMER0_MODE3_ENABLE		TMOD&=0x0F;TMOD|=0x3F
//-------------------- Timer1 function define --------------------
#define		TIMER1_MODE0_ENABLE		TMOD&=0xF0
#define		TIMER1_MODE1_ENABLE		TMOD&=0xF0;TMOD|=0x01
#define		TIMER1_MODE2_ENABLE		TMOD&=0xF0;TMOD|=0x02
#define		TIMER1_MODE3_ENABLE		TMOD&=0xF0;TMOD|=0xF3

//-------------------- Timer2 function define --------------------
#define TIMER2_DIV_4			T2MOD|=0x10;T2MOD&=0x9F
#define TIMER2_DIV_16			T2MOD|=0x20;T2MOD&=0xAF
#define TIMER2_DIV_32			T2MOD|=0x30;T2MOD&=0xBF
#define TIMER2_DIV_64			T2MOD|=0x40;T2MOD&=0xCF
#define TIMER2_DIV_128		T2MOD|=0x50;T2MOD&=0xDF
#define TIMER2_DIV_256		T2MOD|=0x60;T2MOD&=0xEF
#define TIMER2_DIV_512		T2MOD|=0x70

#define TIMER2_Auto_Reload_Delay_Mode				T2CON&=~SET_BIT0;T2MOD|=SET_BIT7;T2MOD|=SET_BIT3
#define TIMER2_Auto_Reload_Capture_Mode			T2CON&=~SET_BIT0;T2MOD|=SET_BIT7
#define	TIMER2_Compare_Capture_Mode					T2CON|=SET_BIT0;T2MOD&=~SET_BIT7;T2MOD|=SET_BIT2
//-------------------- Timer2 Capture define --------------------
//--- Falling Edge -----
#define IC0_P12_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0
#define	IC1_P11_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x01;
#define	IC2_P10_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x02;
#define	IC3_P00_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x03;
#define	IC3_P04_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x04;
#define	IC4_P01_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x05;
#define	IC5_P03_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x06;
#define	IC6_P05_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x07;
#define	IC7_P15_CAP0_FallingEdge_Capture		CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xCF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x08;

#define IC0_P12_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F
#define	IC1_P11_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x10;
#define	IC2_P10_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x20;
#define	IC3_P00_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x30;
#define	IC3_P04_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x40;
#define	IC4_P01_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x50;
#define	IC5_P03_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x60;
#define	IC6_P05_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x70;
#define	IC7_P15_CAP1_FallingEdge_Capture		CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF3;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x80;

#define IC0_P12_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0
#define	IC1_P11_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x10;
#define	IC2_P10_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x20;
#define	IC3_P00_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x30;
#define	IC3_P04_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x40;
#define	IC4_P01_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x50;
#define	IC5_P03_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x60;
#define	IC6_P05_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x70;
#define	IC7_P15_CAP2_FallingEdge_Capture		CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFC;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x80;

//----- Rising edge ----
#define IC0_P12_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0
#define	IC1_P11_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x01;
#define	IC2_P10_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x02;
#define	IC3_P00_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x03;
#define	IC3_P04_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x04;
#define	IC4_P01_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x05;
#define	IC5_P03_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x06;
#define	IC6_P05_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x07;
#define	IC7_P15_CAP0_RisingEdge_Capture			CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xDF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x08;

#define IC0_P12_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F
#define	IC1_P11_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x10;
#define	IC2_P10_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x20;
#define	IC3_P00_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x30;
#define	IC3_P04_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x40;
#define	IC4_P01_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x50;
#define	IC5_P03_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x60;
#define	IC6_P05_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x70;
#define	IC7_P15_CAP1_RisingEdge_Capture			CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xF7;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x80;

#define IC0_P12_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0
#define	IC1_P11_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x01;
#define	IC2_P10_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x02;
#define	IC3_P00_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x03;
#define	IC3_P04_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x04;
#define	IC4_P01_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x05;
#define	IC5_P03_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x06;
#define	IC6_P05_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x07;
#define	IC7_P15_CAP3_RisingEdge_Capture			CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFD;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x08;

//-----BOTH  edge ----
#define IC0_P12_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0
#define	IC1_P11_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x01;
#define	IC2_P10_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x02;
#define	IC3_P00_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x03;
#define	IC3_P04_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x04;
#define	IC4_P01_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x05;
#define	IC5_P03_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x06;
#define	IC6_P05_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x07;
#define	IC7_P15_CAP0_BothEdge_Capture				CAPCON0|=SET_BIT4;CAPCON1|=0x30;CAPCON1&=0xBF;CAPCON2|=SET_BIT4;CAPCON3&=0xF0;CAPCON3|=0x08;

#define IC0_P12_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F
#define	IC1_P11_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x10;
#define	IC2_P10_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x20;
#define	IC3_P00_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x30;
#define	IC3_P04_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x40;
#define	IC4_P01_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x50;
#define	IC5_P03_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x60;
#define	IC6_P05_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x70;
#define	IC7_P15_CAP1_BothEdge_Capture				CAPCON0|=SET_BIT5;CAPCON1|=0x0C;CAPCON1&=0xEF;CAPCON2|=SET_BIT5;CAPCON3&=0x0F;CAPCON3|=0x80;

#define IC0_P12_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0
#define	IC1_P11_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x01;
#define	IC2_P10_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x02;
#define	IC3_P00_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x03;
#define	IC3_P04_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x04;
#define	IC4_P01_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x05;
#define	IC5_P03_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x06;
#define	IC6_P05_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x07;
#define	IC7_P15_CAP3_BothEdge_Capture				CAPCON0|=SET_BIT6;CAPCON1|=0x03;CAPCON1&=0xFB;CAPCON2|=SET_BIT6;CAPCON4&=0xF0;CAPCON4|=0x08;

#define TIMER2_IC2_DISABLE									CAPCON0&=~SET_BIT6			 
#define TIMER2_IC1_DISABLE									CAPCON0&=~SET_BIT5			
#define TIMER2_IC0_DISABLE									CAPCON0&=~SET_BIT4	



/*****************************************************************************************
* For PWM setting 
*****************************************************************************************/
//--------- PMW clock source select define ---------------------
#define		PWM_CLOCK_FSYS					CKCON&=0xBF
#define		PWM_CLOCK_TIMER1				CKCON|=0x40
//--------- PWM clock devide define ----------------------------
#define		PWM_CLOCK_DIV_2					PWMCON1|=0x01;PWMCON1&=0xF9
#define		PWM_CLOCK_DIV_4					PWMCON1|=0x02;PWMCON1&=0xFA
#define		PWM_CLOCK_DIV_8					PWMCON1|=0x03;PWMCON1&=0xFB
#define		PWM_CLOCK_DIV_16				PWMCON1|=0x04;PWMCON1&=0xFC
#define		PWM_CLOCK_DIV_32				PWMCON1|=0x05;PWMCON1&=0xFD
#define		PWM_CLOCK_DIV_64				PWMCON1|=0x06;PWMCON1&=0xFE
#define		PWM_CLOCK_DIV_128				PWMCON1|=0x07
//--------- PWM I/O select define ------------------------------
#define		PWM5_P15_OUTPUT_ENABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1|=0x20;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.5 as PWM5 output enable
#define		PWM5_P03_OUTPUT_ENABLE		PIOCON0|=0x20																										//P0.3 as PWM5
#define		PWM4_P01_OUTPUT_ENABLE		PIOCON0|=0x10																										//P0.1 as PWM4 output enable
#define		PWM3_P04_OUTPUT_ENABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1|=0x08;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P0.4 as PWM3 output enable
#define		PWM3_P00_OUTPUT_ENABLE		PIOCON0|=0x08																										//P0.0 as PWM3 
#define		PWM2_P05_OUTPUT_ENABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1|=0x04;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.0 as PWM2 output enable
#define		PWM2_P10_OUTPUT_ENABLE		PIOCON0|=0x04																										//P1.0 as PWM2
#define		PWM1_P14_OUTPUT_ENABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1|=0x02;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.4 as PWM1 output enable
#define		PWM1_P11_OUTPUT_ENABLE		PIOCON0|=0x02																										//P1.1 as PWM1 
#define		PWM0_P12_OUTPUT_ENABLE		PIOCON0|=0x01																										//P1.2 as PWM0 output enable
#define 	ALL_PWM_OUTPUT_ENABLE			PIOCON0=0xFF;PIOCON1=0xFF
#define		PWM5_P15_OUTPUT_DISABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1&=0xDF;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.5 as PWM5 output disable
#define		PWM5_P03_OUTPUT_DISABLE		PIOCON0&=0xDF																										//P0.3 as PWM5
#define		PWM4_P01_OUTPUT_DISABLE		PIOCON0&=0xEF																										//P0.1 as PWM4 output disable
#define		PWM3_P04_OUTPUT_DISABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1&=0xF7;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P0.4 as PWM3 output disable
#define		PWM3_P00_OUTPUT_DISABLE		PIOCON0&=0xF7																										//P0.0 as PWM3 
#define		PWM2_P05_OUTPUT_DISABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1&=0xFB;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.0 as PWM2 output disable
#define		PWM2_P10_OUTPUT_DISABLE		PIOCON0&=0xFB																										//P1.0 as PWM2
#define		PWM1_P14_OUTPUT_DISABLE		BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;SFRS|=0x01;PIOCON1&=0xFD;TA=0xAA;TA=0x55;SFRS&=0xFE;EA=BIT_TMP				//P1.4 as PWM1 output disable
#define		PWM1_P11_OUTPUT_DISABLE		PIOCON0&=0xFD																										//P1.1 as PWM1 
#define		PWM0_P12_OUTPUT_DISABLE		PIOCON0&=0xFE																										//P1.2 as PWM0 output disable
#define 	ALL_PWM_OUTPUT_DISABLE		PIOCON0=0x00;PIOCON1=0x00
//--------- PWM I/O Polarity Control ---------------------------
#define		PWM5_OUTPUT_INVERSE			PNP|=0x20				
#define		PWM4_OUTPUT_INVERSE			PNP|=0x10				
#define		PWM3_OUTPUT_INVERSE			PNP|=0x08				
#define		PWM2_OUTPUT_INVERSE			PNP|=0x04				
#define		PWM1_OUTPUT_INVERSE			PNP|=0x02				
#define		PWM0_OUTPUT_INVERSE			PNP|=0x01				
#define		PWM_OUTPUT_ALL_INVERSE	PNP=0xFF
#define		PWM5_OUTPUT_NORMAL			PNP&=0xDF				
#define		PWM4_OUTPUT_NORMAL			PNP&=0xEF				
#define		PWM3_OUTPUT_NORMAL			PNP&=0xF7				
#define		PWM2_OUTPUT_NORMAL			PNP&=0xFB				
#define		PWM1_OUTPUT_NORMAL			PNP&=0xFD				
#define		PWM0_OUTPUT_NORMAL			PNP&=0xFE				
#define		PWM_OUTPUT_ALL_NORMAL		PNP=0x00
//--------- PWM type define ------------------------------------
#define		PWM_EDGE_TYPE						PWMCON1&=~SET_BIT4
#define		PWM_CENTER_TYPE					PWMCON1|=SET_BIT4
//--------- PWM mode define ------------------------------------
#define		PWM_IMDEPENDENT_MODE		PWMCON1&=0x3F
#define		PWM_COMPLEMENTARY_MODE	PWMCON1|=0x40;PWMCON1&=0x7F
#define		PWM_SYNCHRONIZED_MODE		PWMCON1|=0x80;PWMCON1&=0xBF
#define 	PWM_GP_MODE_ENABLE			PWMCON1|=0x20
#define		PWM_GP_MODE_DISABLE			PWMCON1&=0xDF
//--------- PMW interrupt setting ------------------------------
#define		PWM_FALLING_INT					PWMCON0&=0xF3
#define		PWM_RISING_INT					PWMCON0|=0x04;PWMCON0&=0xF7
#define		PWM_CENTRAL_POINT_INT		PWMCON0|=0x08;PWMCON0&=0xFB
#define		PWM_PERIOD_END_INT			PWMCON0|=0x0C
//--------- PWM interrupt pin select ---------------------------
#define		PWM_INT_PWM0						PWMCON0&=0xFC
#define		PWM_INT_PWM2						PWMCON0|=0x01;PWMCON0&=0xFD
#define		PWM_INT_PWM4						PWMCON0|=0x02;PWMCON0&=0xFE
#define		PWM_INT_PMW6						PWMCON0|=0x03
//--------- PWM Dead time setting ------------------------------
#define 	PWM45_DEADTIME_ENABLE			BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PDTEN|=0x04;EA=BIT_TMP
#define 	PWM34_DEADTIME_ENABLE			BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PDTEN|=0x02;EA=BIT_TMP
#define 	PWM01_DEADTIME_ENABLE			BIT_TMP=EA;EA=0;TA=0xAA;TA=0x55;PDTEN|=0x01;EA=BIT_TMP

/*****************************************************************************************
* For ADC setting 
*****************************************************************************************/
#define Enable_ADC_AIN0					ADCON2&=0xF0;ADCON2|=Bin(00000000);set_ADPORTEN0		//P10
#define Enable_ADC_AIN1					ADCON2&=0xF0;ADCON2|=Bin(00000001);set_ADPORTEN1		//P11
#define Enable_ADC_AIN2					ADCON2&=0xF0;ADCON2|=Bin(00000010);set_ADPORTEN2		//P12
#define Enable_ADC_AIN3					ADCON2&=0xF0;ADCON2|=Bin(00000011);set_ADPORTEN3		//P13
#define Enable_ADC_AIN4					ADCON2&=0xF0;ADCON2|=Bin(00000100);set_ADPORTEN4		//P14
#define Enable_ADC_AIN5					ADCON2&=0xF0;ADCON2|=Bin(00000101);set_ADPORTEN5		//P15
#define Enable_ADC_AIN6					ADCON2&=0xF0;ADCON2|=Bin(00000110);set_ADPORTEN6		//P16
#define Enable_ADC_AIN7					ADCON2&=0xF0;ADCON2|=Bin(00000111);set_ADPORTEN7		//P17
#define Enable_ADC_AIN8					ADCON2&=0xF0;ADCON2|=Bin(00001000);set_ADPORTEN8		//P20
#define Enable_ADC_AIN9					ADCON2&=0xF0;ADCON2|=Bin(00001001);set_ADPORTEN9		//P21
#define Enable_ADC_AVDD_4DIV		ADCON2&=0xF0;ADCON2|=Bin(00001010);							 		//VDD/4
#define Enable_ADC_BandGap			ADCON2&=0xF0;ADCON2|=Bin(00001011);							 		//Band-gap 1.22V
#define Enable_ADC_GNDA					ADCON2&=0xF0;ADCON2|=Bin(00001100);							 		//GND

#define SET_ADC_12BIT_MODE			set_MODE
#define SET_ADC_10BIT_MODE			clr_MODE

#define SET_ADC_Vref_1V5				ADCON3&=0x0F;ADCON3|=Bin(00000000)
#define SET_ADC_Vref_2V					ADCON3&=0x0F;ADCON3|=Bin(00010000)
#define SET_ADC_Vref_3V					ADCON3&=0x0F;ADCON3|=Bin(00100000)
#define SET_ADC_Vref_4V					ADCON3&=0x0F;ADCON3|=Bin(00110000)
#define SET_ADC_Vref_AVDDI			ADCON3&=0x0F;ADCON3|=Bin(01000000)
#define SET_ADC_Vref_ANA_OUT[9]	ADCON3&=0x0F;ADCON3|=Bin(01010000)

#define ADC_RUN									set_GO
#define ADC_STOP								clr_GO

#define Enable_ADC_Compare			set_EC
#define Disable_ADC_Compare			clr_EC

#define ADC_Sample_Hold_Time_4ADCLK			ADT&=0x0F;ADT|=Bin(00000000)
#define ADC_Sample_Hold_Time_8ADCLK			ADT&=0x0F;ADT|=Bin(00010000)
#define ADC_Sample_Hold_Time_12ADCLK		ADT&=0x0F;ADT|=Bin(00100000)
#define ADC_Sample_Hold_Time_20ADCLK		ADT&=0x0F;ADT|=Bin(00110000)
#define ADC_Sample_Hold_Time_36ADCLK		ADT&=0x0F;ADT|=Bin(01000000)
#define ADC_Sample_Hold_Time_68ADCLK		ADT&=0x0F;ADT|=Bin(01010000)
#define ADC_Sample_Hold_Time_132ADCLK		ADT&=0x0F;ADT|=Bin(01100000)
#define ADC_Sample_Hold_Time_260ADCLK		ADT&=0x0F;ADT|=Bin(01110000)

#define ADC_Time_2Fsys									ADT&=0xF0;ADT|=Bin(00000000)
#define ADC_Time_4Fsys									ADT&=0xF0;ADT|=Bin(00000001)
#define ADC_Time_8Fsys									ADT&=0xF0;ADT|=Bin(00000010)
#define ADC_Time_16Fsys									ADT&=0xF0;ADT|=Bin(00000011)
#define ADC_Time_32Fsys									ADT&=0xF0;ADT|=Bin(00000100)
#define ADC_Time_64Fsys									ADT&=0xF0;ADT|=Bin(00000101)
#define ADC_Time_128Fsys								ADT&=0xF0;ADT|=Bin(00000110)
#define ADC_Time_256Fsys								ADT&=0xF0;ADT|=Bin(00000111)

