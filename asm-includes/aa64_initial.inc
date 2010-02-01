; $Id: //depot/external/aa64_initial.inc#3 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_INITIAL

%define 		INCLUDED_AA64_INITIAL	BOOL_TRUE

;------------------------------------------------------------------------------
;	RESET
;------------------------------------------------------------------------------

%define			RESET_RAX		0000000000000000h	; or BIST result
%define			RESET_RBX		0000000000000000h
%define			RESET_RCX		0000000000000000h
%define			RESET_RDX		0000000000000000h	; bit 15..0 = TFMS
%define			RESET_RSI		0000000000000000h
%define			RESET_RDI		0000000000000000h
%define			RESET_RBP		0000000000000000h
%define			RESET_RSP		0000000000000000h

%define			RESET_R8		0000000000000000h
%define			RESET_R9		0000000000000000h
%define			RESET_R10		0000000000000000h
%define			RESET_R11		0000000000000000h
%define			RESET_R12		0000000000000000h
%define			RESET_R13		0000000000000000h
%define			RESET_R14		0000000000000000h
%define			RESET_R15		0000000000000000h

%define			RESET_RIP		000000000000FFF0h

%define			RESET_FS_BAS64		0000000000000000h
%define			RESET_GS_BAS64		0000000000000000h

%define			RESET_GDTR_BAS64	0000000000000000h
%define			RESET_IDTR_BAS64	0000000000000000h
%define			RESET_LDTR_BAS64	0000000000000000h
%define			RESET_TR_BAS64		0000000000000000h

%define			RESET_CR8		0000000000000000h

%define			RESET_XMM8		0.0
%define			RESET_XMM9		0.0
%define			RESET_XMM10		0.0
%define			RESET_XMM11		0.0
%define			RESET_XMM12		0.0
%define			RESET_XMM13		0.0
%define			RESET_XMM14		0.0
%define			RESET_XMM15		0.0

%define			RESET_FP_FIP64		0
%define			RESET_FP_FDP64		0

%define			RESET_MSR_LSTAR		0000000000000000h
%define			RESET_MSR_CSTAR		0000000000000000h

%define			RESET_MSR_FS_BAS	RESET_FS_BAS64
%define			RESET_MSR_GS_BAS	RESET_GS_BAS64

%define			RESET_SMBASE64		0000000000030000h

%define			RESET_IO_RESTART_RIP	0000000000000000h
%define			RESET_IO_RESTART_RCX	0000000000000000h
%define			RESET_IO_RESTART_RSI	0000000000000000h
%define			RESET_IO_RESTART_RDI	0000000000000000h

;------------------------------------------------------------------------------
;	INIT
;------------------------------------------------------------------------------

%define			INIT_RAX		0000000000000000h
%define			INIT_RBX		RESET_RBX
%define			INIT_RCX		RESET_RCX
%define			INIT_RDX		RESET_RDX		; bit 15..0 = TFMS
%define			INIT_RSI		RESET_RSI
%define			INIT_RDI		RESET_RDI
%define			INIT_RBP		RESET_RBP
%define			INIT_RSP		RESET_RSP

%define			INIT_R8			RESET_R8
%define			INIT_R9			RESET_R9
%define			INIT_R10		RESET_R10
%define			INIT_R11		RESET_R11
%define			INIT_R12		RESET_R12
%define			INIT_R13		RESET_R13
%define			INIT_R14		RESET_R14
%define			INIT_R15		RESET_R15

%define			INIT_RIP		RESET_RIP

%define			INIT_FS_BAS64		RESET_FS_BAS64
%define			INIT_GS_BAS64		RESET_GS_BAS64

%define			INIT_GDTR_BAS64		RESET_GDTR_BAS64
%define			INIT_IDTR_BAS64		RESET_IDTR_BAS64
%define			INIT_LDTR_BAS64		RESET_LDTR_BAS64
%define			INIT_TR_BAS64		RESET_TR_BAS64

%define			INIT_CR8		0000000000000000h

%define			INIT_XMM8		RESET_XMM8
%define			INIT_XMM9		RESET_XMM9
%define			INIT_XMM10		RESET_XMM10
%define			INIT_XMM11		RESET_XMM11
%define			INIT_XMM12		RESET_XMM12
%define			INIT_XMM13		RESET_XMM13
%define			INIT_XMM14		RESET_XMM14
%define			INIT_XMM15		RESET_XMM15

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
