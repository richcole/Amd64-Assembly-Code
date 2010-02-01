; $Id: //depot/external/ia32_smm.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_SMM

%define 		INCLUDED_IA32_SMM	BOOL_TRUE

;------------------------------------------------------------------------------
;	basic SMM stuff
;------------------------------------------------------------------------------

%define			SMM_SMBASE		RESET_SMBASE
%define			SMM_SMI_OFF		8000h		; relative to SMM_SMBASE
%define			SMM_SSM_OFF		7E00h		; relative to SMM_SMI_OFF

			;------------------------------------------------------
			; common SSM stuff
			;------------------------------------------------------

%define			SSM_REVISION		0002h		; current CPUs use this value
%define			SSM_HAS_RELOCATION	17
%define			SSM_HAS_IO_RESTART	16

%define			MASK_SSM_HAS_RELOCATION	(1 << SSM_HAS_RELOCATION)
%define			MASK_SSM_HAS_IO_RESTART	(1 << SSM_HAS_IO_RESTART)

%define			SSM_IO_RESTART_NO	0000h
%define			SSM_IO_RESTART_YES	00FFh

%define			SSM_HLT_RESTART_NO	0000h
%define			SSM_HLT_RESTART_YES	0001h

			;------------------------------------------------------
			; Intel P6-core specific SSM stuff
			;------------------------------------------------------

%define			SSM_P6_A20M		5

%define			MASK_SSM_P6_A20M	(1 << SSM_P6_A20M)
%define			MASK_SSM_P6_A20M_FLAT	(0 << SSM_P6_A20M) ; A20M# was flat before SMI#
%define			MASK_SSM_P6_A20M_WRAP	(1 << SSM_P6_A20M) ; A20M# was wrap before SMI#
%define			MASK_SSM_P6_A20M_NORMAL	(0 << SSM_P6_A20M) ; treat A20M# normal after RSM
%define			MASK_SSM_P6_A20M_INVERT	(1 << SSM_P6_A20M) ; invert A20M# after RSM

%define			SSM_P6_SHUTDOWN		0

%define			MASK_SSM_P6_SHUTDOWN	(1 << SSM_P6_SHUTDOWN)
%define			MASK_SSM_P6_SHUTDOWN_NO	(0 << SSM_P6_SHUTDOWN)
%define			MASK_SSM_P6_SHUTDOWN_YES (1 << SSM_P6_SHUTDOWN)

;------------------------------------------------------------------------------
;	SMM entry state after SMI#
;------------------------------------------------------------------------------

%define			SMI_CS_SEL		(SMM_SMBASE >> 4) ; Intel P5-core: always 3000h
%define			SMI_CS_BAS		SMM_SMBASE
%define			SMI_CS_LIM		MAX_SREG_LIM
%define			SMI_CS_AR		(RESET_CS_AR | MASK_AR_SEG_CODE_G) ; writeable

%define			SMI_SS_SEL		RESET_SS_SEL
%define			SMI_SS_BAS		RESET_SS_BAS
%define			SMI_SS_LIM		MAX_SREG_LIM
%define			SMI_SS_AR		(RESET_SS_AR | MASK_AR_SEG_DATA_G)

%define			SMI_DS_SEL		RESET_DS_SEL
%define			SMI_DS_BAS		RESET_DS_BAS
%define			SMI_DS_LIM		MAX_SREG_LIM
%define			SMI_DS_AR		(RESET_DS_AR | MASK_AR_SEG_DATA_G)

%define			SMI_ES_SEL		RESET_ES_SEL
%define			SMI_ES_BAS		RESET_ES_BAS
%define			SMI_ES_LIM		MAX_SREG_LIM
%define			SMI_ES_AR		(RESET_ES_AR | MASK_AR_SEG_DATA_G)

%define			SMI_FS_SEL		RESET_FS_SEL
%define			SMI_FS_BAS		RESET_FS_BAS
%define			SMI_FS_LIM		MAX_SREG_LIM
%define			SMI_FS_AR		(RESET_FS_AR | MASK_AR_SEG_DATA_G)

%define			SMI_GS_SEL		RESET_GS_SEL
%define			SMI_GS_BAS		RESET_GS_BAS
%define			SMI_GS_LIM		MAX_SREG_LIM
%define			SMI_GS_AR		(RESET_GS_AR | MASK_AR_SEG_DATA_G)

%define			SMI_EFLAGS		RESET_EFLAGS

%define			SMI_EIP			SMM_SMI_OFF

%define			MASK_SMI_CR0		(MASK_CR0_PG | MASK_CR0_TS | MASK_CR0_EM | MASK_CR0_PE)

%define			SMI_CR4			RESET_CR4

%define			SMI_DR7			RESET_DR7

%define			SMI_IN_SMM		BOOL_TRUE
%define			SMI_IN_HLT		BOOL_FALSE
%define			SMI_IN_SHUTDOWN		BOOL_FALSE
%define			SMI_IN_FP_FREEZE	BOOL_FALSE	; but FERR# remains unchanged!

			; SMI_LATCH_INIT	-> depends on whether both INIT and SMI# were recognized
%define			SMI_LATCH_SMI		BOOL_FALSE
			; SMI_LATCH_NMI		-> depends on whether both SMI# and NMI were recognized

%define			SMI_BLOCK_INIT		BOOL_TRUE
%define			SMI_BLOCK_SMI		BOOL_TRUE
%define			SMI_BLOCK_NMI		BOOL_TRUE

;------------------------------------------------------------------------------
;	state after IRET(D)
;------------------------------------------------------------------------------

%define			IRET_BLOCK_INIT		BOOL_FALSE
%define			IRET_BLOCK_NMI		BOOL_FALSE

;------------------------------------------------------------------------------
;	state after RSM
;------------------------------------------------------------------------------

%define			RSM_IN_SMM		BOOL_FALSE
			; RSM_IN_HLT		-> depends on SSM.HLT_RESTART
			; RSM_IN_SHUTDOWN	-> SMI# service is not guaranteed in shutdown state
			; RSM_IN_FP_FREEZE	-> FP instruction gets re-executed, re-enters FP freeze

%define			RSM_BLOCK_INIT		BOOL_FALSE
%define			RSM_BLOCK_SMI		BOOL_FALSE
			; RSM_BLOCK_NMI		-> should restore pre-SMI# state (not all processors do that)

;------------------------------------------------------------------------------
;	common SSM
;------------------------------------------------------------------------------

struc			MEM_SSM
						resb 0F8h
			.SMBASE			resd 1
			.REVISION		resd 1
			.IO_RESTART		resw 1
			.HLT_RESTART		resw 1
						resb 0A4h
			.ES_SEL			resw 1
						resw 1
			.CS_SEL			resw 1
						resw 1
			.SS_SEL			resw 1
						resw 1
			.DS_SEL			resw 1
						resw 1
			.FS_SEL			resw 1
						resw 1
			.GS_SEL			resw 1
						resw 1
			.LDTR_SEL		resw 1
						resw 1
			.TR_SEL			resw 1
						resw 1
			.DR7			resd 1
			.DR6			resd 1
			.EAX			resd 1
			.ECX			resd 1
			.EDX			resd 1
			.EBX			resd 1
			.ESP			resd 1
			.EBP			resd 1
			.ESI			resd 1
			.EDI			resd 1
			.EIP			resd 1
			.EFLAGS			resd 1
			.CR3			resd 1
			.CR0			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SSM,		512

;------------------------------------------------------------------------------
;	Intel P5-core SSM
;------------------------------------------------------------------------------

struc			MEM_SSM_P5
						resb 0F8h
			.SMBASE			resd 1
			.REVISION		resd 1
			.IO_RESTART		resw 1
			.HLT_RESTART		resw 1
			.IO_RESTART_EDI		resd 1
			.IO_RESTART_ECX		resd 1
			.IO_RESTART_ESI		resd 1
			.IO_RESTART_EIP		resd 1
						resb 10h
			.ALT_DR6		resw 1
			.RSM_CONTROL		resw 1
			.CR4			resd 1
						resb 04h
			.ES_LIM:		resd 1
			.ES_BAS:		resd 1
			.ES_AR:			resw 1
						resw 1
			.CS_LIM:		resd 1
			.CS_BAS:		resd 1
			.CS_AR:			resw 1
						resw 1
			.SS_LIM:		resd 1
			.SS_BAS:		resd 1
			.SS_AR:			resw 1
						resw 1
			.DS_LIM:		resd 1
			.DS_BAS:		resd 1
			.DS_AR:			resw 1
						resw 1
			.FS_LIM:		resd 1
			.FS_BAS:		resd 1
			.FS_AR:			resw 1
						resw 1
			.GS_LIM:		resd 1
			.GS_BAS:		resd 1
			.GS_AR:			resw 1
						resw 1
			.LDTR_LIM:		resd 1
			.LDTR_BAS:		resd 1
			.LDTR_AR:		resw 1
						resw 1
			.GDTR_LIM:		resd 1
			.GDTR_BAS:		resd 1
			.GDTR_AR:		resw 1
						resw 1
			.IDTR_LIM:		resd 1
			.IDTR_BAS:		resd 1
			.IDTR_AR:		resw 1
						resw 1
			.TR_LIM:		resd 1
			.TR_BAS:		resd 1
			.TR_AR:			resw 1
						resw 1
			.ES_SEL			resw 1
						resw 1
			.CS_SEL			resw 1
						resw 1
			.SS_SEL			resw 1
						resw 1
			.DS_SEL			resw 1
						resw 1
			.FS_SEL			resw 1
						resw 1
			.GS_SEL			resw 1
						resw 1
			.LDTR_SEL		resw 1
						resw 1
			.TR_SEL			resw 1
						resw 1
			.DR7			resd 1
			.DR6			resd 1
			.EAX			resd 1
			.ECX			resd 1
			.EDX			resd 1
			.EBX			resd 1
			.ESP			resd 1
			.EBP			resd 1
			.ESI			resd 1
			.EDI			resd 1
			.EIP			resd 1
			.EFLAGS			resd 1
			.CR3			resd 1
			.CR0			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SSM_P5,		512

;------------------------------------------------------------------------------
;	Intel P6-core SSM
;------------------------------------------------------------------------------

struc			MEM_SSM_P6
						resb 0F8h
			.SMBASE			resd 1
			.REVISION		resd 1
			.IO_RESTART		resw 1
			.HLT_RESTART		resw 1
			.IO_RESTART_EDI		resd 1
			.IO_RESTART_ECX		resd 1
			.IO_RESTART_ESI		resd 1
			.IO_RESTART_EIP		resd 1
			.CR4			resd 1
			.A20M			resw 1
						resb 01h
			.UNKNOWN		resb 1
						resb 02h
			.SMM_STATUS		resw 1
			.CPL			resb 1
						resb 02h
			.SHUTDOWN		resb 1
			.ALT_DR6		resw 1
			.RSM_CONTROL		resw 1
			.SREG_STATUS0		resd 1
			.DS_SEL_x:		resw 1
			.DS_AR:			resw 1
			.DS_LIM:		resd 1
			.DS_BAS:		resd 1
			.FS_SEL_x:		resw 1
			.FS_AR:			resw 1
			.FS_LIM:		resd 1
			.FS_BAS:		resd 1
			.GS_SEL_x:		resw 1
			.GS_AR:			resw 1
			.GS_LIM:		resd 1
			.GS_BAS:		resd 1
			.IDTR_SEL_x:		resw 1
			.IDTR_AR:		resw 1
			.IDTR_LIM:		resd 1
			.IDTR_BAS:		resd 1
			.TR_SEL_x:		resw 1
			.TR_AR:			resw 1
			.TR_LIM:		resd 1
			.TR_BAS:		resd 1
			.SREG_STATUS1		resd 1
			.GDTR_SEL_x:		resw 1
			.GDTR_AR:		resw 1
			.GDTR_LIM:		resd 1
			.GDTR_BAS:		resd 1
			.LDTR_SEL_x:		resw 1
			.LDTR_AR:		resw 1
			.LDTR_LIM:		resd 1
			.LDTR_BAS:		resd 1
			.ES_SEL_x:		resw 1
			.ES_AR:			resw 1
			.ES_LIM:		resd 1
			.ES_BAS:		resd 1
			.CS_SEL_x:		resw 1
			.CS_AR:			resw 1
			.CS_LIM:		resd 1
			.CS_BAS:		resd 1
			.SS_SEL_x:		resw 1
			.SS_AR:			resw 1
			.SS_LIM:		resd 1
			.SS_BAS:		resd 1
			.ES_SEL			resw 1
						resw 1
			.CS_SEL			resw 1
						resw 1
			.SS_SEL			resw 1
						resw 1
			.DS_SEL			resw 1
						resw 1
			.FS_SEL			resw 1
						resw 1
			.GS_SEL			resw 1
						resw 1
			.LDTR_SEL		resw 1
						resw 1
			.TR_SEL			resw 1
						resw 1
			.DR7			resd 1
			.DR6			resd 1
			.EAX			resd 1
			.ECX			resd 1
			.EDX			resd 1
			.EBX			resd 1
			.ESP			resd 1
			.EBP			resd 1
			.ESI			resd 1
			.EDI			resd 1
			.EIP			resd 1
			.EFLAGS			resd 1
			.CR3			resd 1
			.CR0			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SSM_P6,		512

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
