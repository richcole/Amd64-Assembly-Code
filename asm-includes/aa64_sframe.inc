; $Id: //depot/external/aa64_sframe.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_SFRAME

%define 		INCLUDED_AA64_SFRAME	BOOL_TRUE

;------------------------------------------------------------------------------
;	PUSHAQ and POPAQ stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_PUSHAQ
			.RDI:			resq 1
			.RSI:			resq 1
			.RBP:			resq 1
			.RSP:			resq 1		; ignored on POPAQ
			.RBX:			resq 1
			.RDX:			resq 1
			.RCX:			resq 1
			.RAX:			resq 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_PUSHAQ,	64

struc			MEM_SFRAME_POPAQ
			.RDI:			resq 1
			.RSI:			resq 1
			.RBP:			resq 1
			.RSP:			resq 1		; ignored
			.RBX:			resq 1
			.RDX:			resq 1
			.RCX:			resq 1
			.RAX:			resq 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_POPAQ,	64

;------------------------------------------------------------------------------
;	64 bit far transfer stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_64
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_64,		16

;------------------------------------------------------------------------------
;	64 bit interrupt gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT64
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
			.EFLAGS:		resd 1
						resd 1
			.RSP:			resq 1
			.SS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT64,	40

;------------------------------------------------------------------------------
;	64 bit interrupt gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT64E
			.ERROR:			resw 1
						resw 1
						resd 1
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
			.EFLAGS:		resd 1
						resd 1
			.RSP:			resq 1
			.SS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT64E,	48

;------------------------------------------------------------------------------
;	64 bit trap gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP64
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
			.EFLAGS:		resd 1
						resd 1
			.RSP:			resq 1
			.SS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP64,	40

;------------------------------------------------------------------------------
;	64 bit trap gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP64E
			.ERROR:			resw 1
						resw 1
						resd 1
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
			.EFLAGS:		resd 1
						resd 1
			.RSP:			resq 1
			.SS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP64E,	48

;------------------------------------------------------------------------------
;	64 bit call gate stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_CALL64
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL64,	16

struc			MEM_SFRAME_CALL64_CPL
			.RIP:			resq 1
			.CS:			resw 1
						resw 1
						resd 1
			.RSP:			resq 1
			.SS:			resw 1
						resw 1
						resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL64_CPL,	32

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
