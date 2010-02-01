; $Id: //depot/external/ia32_inter.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_INTER

%define 		INCLUDED_IA32_INTER	BOOL_TRUE

;------------------------------------------------------------------------------
;	interrupts
;------------------------------------------------------------------------------

%define			INTER_NMI		02h		; NMI

%define			INTER_IRQ0		00h		; timer
%define			INTER_IRQ1		01h		; keyboard
%define			INTER_IRQ2		02h		; PIC2
%define			INTER_IRQ3		03h		; COM2
%define			INTER_IRQ4		04h		; COM1
%define			INTER_IRQ5		05h		; LPT2
%define			INTER_IRQ6		06h		; FDD
%define			INTER_IRQ7		07h		; LPT1 or spurious

%define			INTER_IRQ8		08h		; RTC
%define			INTER_IRQ9		09h		;
%define			INTER_IRQ10		0Ah		;
%define			INTER_IRQ11		0Bh		;
%define			INTER_IRQ12		0Ch		; PS/2
%define			INTER_IRQ13		0Dh		; FPU
%define			INTER_IRQ14		0Eh		; HDD1
%define			INTER_IRQ15		0Fh		; HDD2

;------------------------------------------------------------------------------
;	end of file
;------------------------------------------------------------------------------

%endif

;------------------------------------------------------------------------------
;
;  *************************************************************************
;  *                                                                       *
;  * This software is provided "as is", and any warranties are disclaimed. *
;  * In no event shall the copyright holder(s), author(s), contributor(s), *
;  * or distributor(s) be liable for any damages arising in any way out of *
;  * the use of this software.                                             *
;  *                                                                       *
;  *************************************************************************
;
;EOF
