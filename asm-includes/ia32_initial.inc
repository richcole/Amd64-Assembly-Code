; $Id: //depot/external/ia32_initial.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_INITIAL

%define 		INCLUDED_IA32_INITIAL	BOOL_TRUE

;------------------------------------------------------------------------------
;	RESET
;------------------------------------------------------------------------------

%define			RESET_EAX		00000000h	; or BIST result
%define			RESET_EBX		00000000h
%define			RESET_ECX		00000000h
%define			RESET_EDX		00000000h	; bit 15..0 = TFMS
%define			RESET_ESI		00000000h
%define			RESET_EDI		00000000h
%define			RESET_EBP		00000000h
%define			RESET_ESP		00000000h

%define			RESET_EIP		0000FFF0h

%define			RESET_EFLAGS		00000002h

%define			RESET_CS_SEL		0F000h
%define			RESET_CS_BAS		0FFFF0000h
%define			RESET_CS_LIM		0000FFFFh
%define			RESET_CS_AR		0093h		; writeable
%define			RESET_SS_SEL		0000h
%define			RESET_SS_BAS		00000000h
%define			RESET_SS_LIM		0000FFFFh
%define			RESET_SS_AR		0093h
%define			RESET_DS_SEL		0000h
%define			RESET_DS_BAS		00000000h
%define			RESET_DS_LIM		0000FFFFh
%define			RESET_DS_AR		0093h
%define			RESET_ES_SEL		0000h
%define			RESET_ES_BAS		00000000h
%define			RESET_ES_LIM		0000FFFFh
%define			RESET_ES_AR		0093h
%define			RESET_FS_SEL		0000h
%define			RESET_FS_BAS		00000000h
%define			RESET_FS_LIM		0000FFFFh
%define			RESET_FS_AR		0093h
%define			RESET_GS_SEL		0000h
%define			RESET_GS_BAS		00000000h
%define			RESET_GS_LIM		0000FFFFh
%define			RESET_GS_AR		0093h

%define			RESET_GDTR_BAS		00000000h
%define			RESET_GDTR_LIM		0000FFFFh
%define			RESET_GDTR_AR		0082h		; only visible in SMM SSM
%define			RESET_IDTR_BAS		00000000h
%define			RESET_IDTR_LIM		0000FFFFh
%define			RESET_IDTR_AR		0082h		; only visible in SMM SSM
%define			RESET_LDTR_SEL		0000h
%define			RESET_LDTR_BAS		00000000h
%define			RESET_LDTR_LIM		0000FFFFh
%define			RESET_LDTR_AR		0082h
%define			RESET_TR_SEL		0000h
%define			RESET_TR_BAS		00000000h
%define			RESET_TR_LIM		0000FFFFh
%define			RESET_TR_AR		0082h		; not really a TSS

%define			RESET_CR0		60000010h
%define			RESET_CR2		00000000h
%define			RESET_CR3		00000000h
%define			RESET_CR4		00000000h

%define			RESET_DR0		00000000h
%define			RESET_DR1		00000000h
%define			RESET_DR2		00000000h
%define			RESET_DR3		00000000h
%define			RESET_DR6		0FFFF0FF0h
%define			RESET_DR7		00000400h

%define			RESET_ST7		0.0
%define			RESET_ST6		0.0
%define			RESET_ST5		0.0
%define			RESET_ST4		0.0
%define			RESET_ST3		0.0
%define			RESET_ST2		0.0
%define			RESET_ST1		0.0
%define			RESET_ST0		0.0
%define			RESET_MM7		0
%define			RESET_MM6		0
%define			RESET_MM5		0
%define			RESET_MM4		0
%define			RESET_MM3		0
%define			RESET_MM2		0
%define			RESET_MM1		0
%define			RESET_MM0		0
%define			RESET_XMM7		0.0
%define			RESET_XMM6		0.0
%define			RESET_XMM5		0.0
%define			RESET_XMM4		0.0
%define			RESET_XMM3		0.0
%define			RESET_XMM2		0.0
%define			RESET_XMM1		0.0
%define			RESET_XMM0		0.0
%define			RESET_CW		0040h
%define			RESET_SW		0000h
%define			RESET_TW		5555h
%define			RESET_FP_FIP		0
%define			RESET_FP_FDP		0
%define			RESET_FP_OPC		0
%define			RESET_MXCSR		00001F80h

%define			RESET_MSR_TSC		0		; usually starts incrementing a little early

%define			RESET_MSR_TR12		00000000h
%define			RESET_MSR_MISC_CTL	0		; PSN is enabled
%define			RESET_MSR_EFER		00000000h

%define			RESET_MSR_SEP_CS	0000h
%define			RESET_MSR_SEP_ESP	00000000h
%define			RESET_MSR_SEP_EIP	00000000h

%define			RESET_MSR_STAR_SEL_RET	0000h
%define			RESET_MSR_STAR_SEL_CALL	0000h
%define			RESET_MSR_STAR_EIP	00000000h

%define			RESET_MSR_PAT_HIGH	((MSR_PAT_PA_UC << (MSR_PAT_PA7 - BITS_DWORD)) | (MSR_PAT_PA_UC_WEAK << (MSR_PAT_PA6 - BITS_DWORD)) | (MSR_PAT_PA_WT << (MSR_PAT_PA5 - BITS_DWORD)) | (MSR_PAT_PA_WB << (MSR_PAT_PA4 - BITS_DWORD)) + 8000000h)

%define			RESET_MSR_PAT_LOW	((MSR_PAT_PA_UC << MSR_PAT_PA3) | (MSR_PAT_PA_UC_WEAK << MSR_PAT_PA2) | (MSR_PAT_PA_WT << MSR_PAT_PA1) | (MSR_PAT_PA_WB << MSR_PAT_PA0))

; $TODO: add RESET values of MTRRs $

%define			RESET_MSR_MCAR		00000000h
%define			RESET_MSR_MCTR		00000000h

; $TODO: add RESET values of MC MSRs $

%define			RESET_MSR_APIC_BASE	0FEE00900h	; if BSP
%define			RESET_MSR_APIC_BASE_2	0FEE00800h	; if not BSP

%define			RESET_SMBASE		00030000h

%define			RESET_IO_RESTART_EIP	00000000h
%define			RESET_IO_RESTART_ECX	00000000h
%define			RESET_IO_RESTART_ESI	00000000h
%define			RESET_IO_RESTART_EDI	00000000h

%define			RESET_IN_SMM		BOOL_FALSE
%define			RESET_IN_HLT		BOOL_FALSE
%define			RESET_IN_SHUTDOWN	BOOL_FALSE
%define			RESET_IN_FP_FREEZE	BOOL_FALSE

%define			RESET_LATCH_INIT	BOOL_FALSE
%define			RESET_LATCH_SMI		BOOL_FALSE
%define			RESET_LATCH_NMI		BOOL_FALSE

%define			RESET_BLOCK_INIT	BOOL_FALSE
%define			RESET_BLOCK_SMI		BOOL_FALSE
%define			RESET_BLOCK_NMI		BOOL_FALSE

%define			RESET_A20M_KBC		1		; A20M# = deasserted high
%define			RESET_A20M_PS2		0		; A20M# = asserted low

%define			RESET_A20M		(RESET_A20M_KBC | RESET_A20M_PS2)

%define			RESET_FERR		1		; FERR# = deasserted high

;------------------------------------------------------------------------------
;	INIT
;------------------------------------------------------------------------------

%define			INIT_EAX		00000000h
%define			INIT_EBX		RESET_EBX
%define			INIT_ECX		RESET_ECX
%define			INIT_EDX		RESET_EDX	; bit 15..0 = TFMS
%define			INIT_ESI		RESET_ESI
%define			INIT_EDI		RESET_EDI
%define			INIT_EBP		RESET_EBP
%define			INIT_ESP		RESET_ESP

%define			INIT_EIP		RESET_EIP

%define			INIT_EFLAGS		RESET_EFLAGS

%define			INIT_CS_SEL		RESET_CS_SEL
%define			INIT_CS_BAS		RESET_CS_BAS
%define			INIT_CS_LIM		RESET_CS_LIM
%define			INIT_CS_AR		RESET_CS_AR	; writeable
%define			INIT_SS_SEL		RESET_SS_SEL
%define			INIT_SS_BAS		RESET_SS_BAS
%define			INIT_SS_LIM		RESET_SS_LIM
%define			INIT_SS_AR		RESET_SS_AR
%define			INIT_DS_SEL		RESET_DS_SEL
%define			INIT_DS_BAS		RESET_DS_BAS
%define			INIT_DS_LIM		RESET_DS_LIM
%define			INIT_DS_AR		RESET_DS_AR
%define			INIT_ES_SEL		RESET_ES_SEL
%define			INIT_ES_BAS		RESET_ES_BAS
%define			INIT_ES_LIM		RESET_ES_LIM
%define			INIT_ES_AR		RESET_ES_AR
%define			INIT_FS_SEL		RESET_FS_SEL
%define			INIT_FS_BAS		RESET_FS_BAS
%define			INIT_FS_LIM		RESET_FS_LIM
%define			INIT_FS_AR		RESET_FS_AR
%define			INIT_GS_SEL		RESET_GS_SEL
%define			INIT_GS_BAS		RESET_GS_BAS
%define			INIT_GS_LIM		RESET_GS_LIM
%define			INIT_GS_AR		RESET_GS_AR

%define			INIT_GDTR_BAS		RESET_GDTR_BAS
%define			INIT_GDTR_LIM		RESET_GDTR_LIM
%define			INIT_GDTR_AR		RESET_GDTR_AR	; only visible in SMM SSM
%define			INIT_IDTR_BAS		RESET_IDTR_BAS
%define			INIT_IDTR_LIM		RESET_IDTR_LIM
%define			INIT_IDTR_AR		RESET_IDTR_AR	; only visible in SMM SSM
%define			INIT_LDTR_SEL		RESET_LDTR_SEL
%define			INIT_LDTR_BAS		RESET_LDTR_BAS
%define			INIT_LDTR_LIM		RESET_LDTR_LIM
%define			INIT_LDTR_AR		RESET_LDTR_AR
%define			INIT_TR_SEL		RESET_TR_SEL
%define			INIT_TR_BAS		RESET_TR_BAS
%define			INIT_TR_LIM		RESET_TR_LIM
%define			INIT_TR_AR		RESET_TR_AR	; not really a TSS

%define			INIT_CR0		00000010h	; bit 30..29 unchanged
%define			INIT_CR2		RESET_CR2
%define			INIT_CR3		RESET_CR3
%define			INIT_CR4		RESET_CR4

%define			INIT_DR0		RESET_DR0
%define			INIT_DR1		RESET_DR1
%define			INIT_DR2		RESET_DR2
%define			INIT_DR3		RESET_DR3
%define			INIT_DR6		RESET_DR6
%define			INIT_DR7		RESET_DR7

%define			INIT_IN_SMM		BOOL_FALSE
%define			INIT_IN_HLT		BOOL_FALSE
%define			INIT_IN_SHUTDOWN	BOOL_FALSE
%define			INIT_IN_FP_FREEZE	BOOL_FALSE	; but FERR# remains unchanged!

%define			INIT_LATCH_SMI		BOOL_FALSE
%define			INIT_LATCH_NMI		BOOL_FALSE

%define			INIT_BLOCK_SMI		BOOL_FALSE
%define			INIT_BLOCK_NMI		BOOL_FALSE

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
