; $Id: //depot/external/ia32_except.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_EXCEPT

%define 		INCLUDED_IA32_EXCEPT	BOOL_TRUE

;------------------------------------------------------------------------------
;	exceptions
;------------------------------------------------------------------------------

%define			EXCEPT_DE		00h		; divide error
%define			EXCEPT_DB		01h		; debug
%define			EXCEPT_NMI		INTER_NMI	; NMI
%define			EXCEPT_BP		03h		; breakpoint
%define			EXCEPT_OF		04h		; overflow
%define			EXCEPT_BR		05h		; boundary range exceeded
%define			EXCEPT_UD		06h		; undefined opcode
%define			EXCEPT_NM		07h		; device not available
%define			EXCEPT_DF		08h		; double fault
%define			EXCEPT_387		09h		; 80387 segment overrun
%define			EXCEPT_TS		0Ah		; invalid TSS
%define			EXCEPT_NP		0Bh		; not present
%define			EXCEPT_SS		0Ch		; stack segment
%define			EXCEPT_GP		0Dh		; general protection
%define			EXCEPT_PF		0Eh		; page fault
%define			EXCEPT_INTR		0Fh		; spurious INTR (in DOS)
%define			EXCEPT_MF		10h		; math fault
%define			EXCEPT_AC		11h		; alignment checking
%define			EXCEPT_MC		12h		; machine check
%define			EXCEPT_XF		13h		; extended math fault (SSE)

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
