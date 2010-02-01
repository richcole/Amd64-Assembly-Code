; $Id: //depot/external/ia32_sreg.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_SREG

%define 		INCLUDED_IA32_SREG	BOOL_TRUE

;------------------------------------------------------------------------------
;	minimum/maximum segment register limits
;------------------------------------------------------------------------------

%define			MIN_SREG_LIM		MIN_DWORD
%define			MAX_SREG_LIM		MAX_DWORD

;------------------------------------------------------------------------------
;	Intel P5-core segment register (aka descriptor cache)
;------------------------------------------------------------------------------

struc			MEM_SREG_P5
			.LIM:			resd 1
			.BAS:			resd 1
			.AR:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SREG_P5,		12

;------------------------------------------------------------------------------
;	Intel P6-core segment register (aka descriptor cache)
;------------------------------------------------------------------------------

struc			MEM_SREG_P6
			.SEL:			resw 1
			.AR:			resw 1
			.LIM:			resd 1
			.BAS:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SREG_P6,		12

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
