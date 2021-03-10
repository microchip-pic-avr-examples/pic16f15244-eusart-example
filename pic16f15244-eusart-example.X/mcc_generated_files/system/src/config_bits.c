/**
  @Generated CCL Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    config_bits.c

  @Summary:
    This is the config_bits.c file generated using CCL

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information : 
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.31
        MPLAB             :  MPLAB X 5.45
*/

/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/

// Configuration bits: selected in the GUI

//CONFIG1
#pragma config FEXTOSC = OFF     // External Oscillator Mode Selection bits->Oscillator not enabled
#pragma config RSTOSC = HFINTOSC_1MHZ     // Power-up Default Value for COSC bits->HFINTOSC (1 MHz)
#pragma config CLKOUTEN = OFF     // Clock Out Enable bit->CLKOUT function is disabled; I/O function on RA4
#pragma config VDDAR = HI     // VDD Range Analog Calibration Selection bit->Internal analog systems are calibrated for operation between VDD = 2.3V - 5.5V

//CONFIG2
#pragma config MCLRE = EXTMCLR     // Master Clear Enable bit->If LVP = 0, MCLR pin is MCLR; If LVP = 1, RA3 pin function is MCLR
#pragma config PWRTS = PWRT_OFF     // Power-up Timer Selection bits->PWRT is disabled
#pragma config WDTE = OFF     // WDT Operating Mode bits->WDT disabled; SEN is ignored
#pragma config BOREN = ON     // Brown-out Reset Enable bits->Brown-out Reset Enabled, SBOREN bit is ignored
#pragma config BORV = LO     // Brown-out Reset Voltage Selection bit->Brown-out Reset Voltage (VBOR) set to 1.9V
#pragma config PPS1WAY = ON     // PPSLOCKED One-Way Set Enable bit->The PPSLOCKED bit can be cleared and set only once in software
#pragma config STVREN = ON     // Stack Overflow/Underflow Reset Enable bit->Stack Overflow or Underflow will cause a reset

//CONFIG4
#pragma config BBSIZE = BB512     // Boot Block Size Selection bits->512 words boot block size
#pragma config BBEN = OFF     // Boot Block Enable bit->Boot Block is disabled
#pragma config SAFEN = OFF     // SAF Enable bit->SAF is disabled
#pragma config WRTAPP = OFF     // Application Block Write Protection bit->Application Block is not write-protected
#pragma config WRTB = OFF     // Boot Block Write Protection bit->Boot Block is not write-protected
#pragma config WRTC = OFF     // Configuration Registers Write Protection bit->Configuration Registers are not write-protected
#pragma config WRTSAF = OFF     // Storage Area Flash (SAF) Write Protection bit->SAF is not write-protected
#pragma config LVP = ON     // Low Voltage Programming Enable bit->Low Voltage programming enabled. MCLR/Vpp pin function is MCLR. MCLRE Configuration bit is ignored.

//CONFIG5
#pragma config CP = OFF     // User Program Flash Memory Code Protection bit->User Program Flash Memory code protection is disabled

