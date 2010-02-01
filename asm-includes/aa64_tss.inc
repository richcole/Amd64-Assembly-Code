; $Id: //depot/external/aa64_tss.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_TSS

%define 		INCLUDED_AA64_TSS	BOOL_TRUE

;------------------------------------------------------------------------------
;	64 bit TSS
;------------------------------------------------------------------------------

struc			MEM_TSS64
						resd 1
			.RSP0			resq 1		; static
			.RSP1			resq 1		; static
			.RSP2			resq 1		; static
						resq 1		; static
			.IST_RSP1		resq 1		; static
			.IST_RSP2		resq 1		; static
			.IST_RSP3		resq 1		; static
			.IST_RSP4		resq 1		; static
			.IST_RSP5		resq 1		; static
			.IST_RSP6		resq 1		; static
			.IST_RSP7		resq 1		; static
						resb 10
			.IOPB_OFF		resw 1		; static
endstruc
CHECK_C_STRUC_SIZE	MEM_TSS64,		104

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
