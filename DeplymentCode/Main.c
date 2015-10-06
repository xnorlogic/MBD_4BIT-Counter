/* 
 * File:   Main.c
 * Author: Andres R.
 * Created on January 27, 2015, 6:59 PM
 */
#include<xc.h>
#include<pic.h>
#include<stdlib.h>
#include "PIC16F73_4_BIT_CNT.h"         /* Model's header file */
#include "rtwtypes.h"                   /* MathWorks types     */

//PIC16F76 device configurations-----------------------------------------------------------------
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bit (Code protection off)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#define _XTAL_FREQ 16000000
//-----------------------------------------------------------------------------------------------

// I/O Variables entry/exit points to the mode, defined on PIC16F73 IN-OUT -- MBD 4_BIT_CNT.xlxs-
#define	P_Button RB1
#define	BIT_0	RB2
#define	BIT_1	RB3
#define	BIT_2	RB4
#define	BIT_3	RB5
//-----------------------------------------------------------------------------------------------

//DELAY FUNCTIONS @16Mhz-------------------------------------------------------------------------
//In the future this functions will be implemented in an specific MY_Delays.h
void mydelay_ms(unsigned int cycles) {
    unsigned int i;

    for (i = 1; i <= cycles; i++) {
        __delay_ms(1);
    }
}
void mydelay_sec(unsigned int cycles) {
    unsigned int i;

    for (i = 1; i <= cycles; i++) {
        mydelay_ms(1000);
    }
}
//-----------------------------------------------------------------------------------------------

void 4_BIT_COUNTER(void){

      //Overrun to be implemented
	  //static boolean_T OverrunFlag = 0;
	  /*
	  if (OverrunFlag) {
		rtmSetErrorStatus(PIC16F73_4_BIT_CNT_M, "Overrun");
		return;
	  }
	  */
	  
	  //OverrunFlag = TRUE;
	  
	  /* Step the model */
	  PIC16F73_4_BIT_CNT_step();
	  
	  //OverrunFlag = FALSE;
}
void main(){

    PIC16F73_4_BIT_CNT_initialize();

	//MAIN TARGET DEVICE CONFIGS-------------
		STATUSbits.RP0=0;
		STATUSbits.RP1=0;
		PORTA =0;
		PORTB =0;
		PORTC =0;
		STATUSbits.RP0=1;
		//CONFIG PORT A AS DIGITAL OUTPUTS
		ADCON1bits.PCFG0=0;
		ADCON1bits.PCFG1=1;
		ADCON1bits.PCFG2=1;
		//PORT B assignments
		TRISB=0x02;
		PORTB=0;
		//PORT A assignments
		TRISA=0;
		PORTA=0;
		//PORT C assignments
		TRISC=0;                   
		PORTC=0;                    
		STATUSbits.RP0=0;
	//--------------------------------------

    //LED PROVE OUT-------------------------
		BIT_0	=1;
		BIT_1	=1;
		BIT_2	=1;
		BIT_3	=1;
		mydelay_sec(5);
    //--------------------------------------

    while(1)
    {
	    //Asign the push button to the model input
        PIC16F73_4_BIT_CNT_U.RB1_I	=	P_Button;
        
		//CALL THE 4 BIT COUNTER FUNCTION
        4_BIT_COUNTER();    		

		//Asign Bits to the LED output to show the states if the counter
        BIT_0	=	PIC16F73_4_BIT_CNT_Y.RB2_O;
        BIT_1	=	PIC16F73_4_BIT_CNT_Y.RB3_O;
        BIT_2	=	PIC16F73_4_BIT_CNT_Y.RB4_O;
        BIT_3	=	PIC16F73_4_BIT_CNT_Y.RB5_O;
		
        mydelay_ms(200);
    }

    PIC16F73_4_BIT_CNT_terminate();
}
