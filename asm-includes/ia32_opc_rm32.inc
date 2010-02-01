; $Id: //depot/external/ia32_opc_rm32.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_RM32

%define 		INCLUDED_IA32_OPC_RM32	BOOL_TRUE

;------------------------------------------------------------------------------
;	32 bit mod R/M byte fields
;------------------------------------------------------------------------------

%define			RM32_MOD		6
%define			RM32_REG		3
%define			RM32_RM			0

%define			MASK_RM32_MOD		(((1 << 2) - 1) << RM32_MOD)
%define			MASK_RM32_REG		(((1 << 3) - 1) << RM32_REG)
%define			MASK_RM32_RM		(((1 << 3) - 1) << RM32_RM)

;------------------------------------------------------------------------------
;	32 bit mod R/M byte reg field values
;------------------------------------------------------------------------------

%define			RM32_REG_AL		0
%define			RM32_REG_CL		1
%define			RM32_REG_DL		2
%define			RM32_REG_BL		3
%define			RM32_REG_AH		4
%define			RM32_REG_CH		5
%define			RM32_REG_DH		6
%define			RM32_REG_BH		7

%define			RM32_REG_AX		0
%define			RM32_REG_CX		1
%define			RM32_REG_DX		2
%define			RM32_REG_BX		3
%define			RM32_REG_SP		4
%define			RM32_REG_BP		5
%define			RM32_REG_SI		6
%define			RM32_REG_DI		7

%define			RM32_REG_EAX		0
%define			RM32_REG_ECX		1
%define			RM32_REG_EDX		2
%define			RM32_REG_EBX		3
%define			RM32_REG_ESP		4
%define			RM32_REG_EBP		5
%define			RM32_REG_ESI		6
%define			RM32_REG_EDI		7

%define			RM32_REG_MM0		0
%define			RM32_REG_MM1		1
%define			RM32_REG_MM2		2
%define			RM32_REG_MM3		3
%define			RM32_REG_MM4		4
%define			RM32_REG_MM5		5
%define			RM32_REG_MM6		6
%define			RM32_REG_MM7		7

%define			RM32_REG_XMM0		0
%define			RM32_REG_XMM1		1
%define			RM32_REG_XMM2		2
%define			RM32_REG_XMM3		3
%define			RM32_REG_XMM4		4
%define			RM32_REG_XMM5		5
%define			RM32_REG_XMM6		6
%define			RM32_REG_XMM7		7

%define			RM32_REG_ES		0
%define			RM32_REG_CS		1
%define			RM32_REG_SS		2
%define			RM32_REG_DS		3
%define			RM32_REG_FS		4
%define			RM32_REG_GS		5
%define			RM32_REG_SREG6		6
%define			RM32_REG_SREG7		7

%define			RM32_REG_CR0		0
%define			RM32_REG_CR1		1
%define			RM32_REG_CR2		2
%define			RM32_REG_CR3		3
%define			RM32_REG_CR4		4
%define			RM32_REG_CR5		5
%define			RM32_REG_CR6		6
%define			RM32_REG_CR7		7

%define			RM32_REG_DR0		0
%define			RM32_REG_DR1		1
%define			RM32_REG_DR2		2
%define			RM32_REG_DR3		3
%define			RM32_REG_DR4		4
%define			RM32_REG_DR5		5
%define			RM32_REG_DR6		6
%define			RM32_REG_DR7		7

;------------------------------------------------------------------------------
;	32 bit mod R/M byte RM field values
;------------------------------------------------------------------------------

%define			RM32_RM_EAX_NODISP	0
%define			RM32_RM_ECX_NODISP	1
%define			RM32_RM_EDX_NODISP	2
%define			RM32_RM_EBX_NODISP	3
%define			RM32_RM_SIB_NODISP	4
%define			RM32_RM_DISP32		5
%define			RM32_RM_ESI_NODISP	6
%define			RM32_RM_EDI_NODISP	7

%define			RM32_RM_EAX_DISP8	0
%define			RM32_RM_ECX_DISP8	1
%define			RM32_RM_EDX_DISP8	2
%define			RM32_RM_EBX_DISP8	3
%define			RM32_RM_SIB_DISP8	4
%define			RM32_RM_EBP_DISP8	5
%define			RM32_RM_ESI_DISP8	6
%define			RM32_RM_EDI_DISP8	7

%define			RM32_RM_EAX_DISP32	0
%define			RM32_RM_ECX_DISP32	1
%define			RM32_RM_EDX_DISP32	2
%define			RM32_RM_EBX_DISP32	3
%define			RM32_RM_SIB_DISP32	4
%define			RM32_RM_EBP_DISP32	5
%define			RM32_RM_ESI_DISP32	6
%define			RM32_RM_EDI_DISP32	7

%define			RM32_RM_AL		0
%define			RM32_RM_CL		1
%define			RM32_RM_DL		2
%define			RM32_RM_BL		3
%define			RM32_RM_AH		4
%define			RM32_RM_CH		5
%define			RM32_RM_DH		6
%define			RM32_RM_BH		7

%define			RM32_RM_AX		0
%define			RM32_RM_CX		1
%define			RM32_RM_DX		2
%define			RM32_RM_BX		3
%define			RM32_RM_SP		4
%define			RM32_RM_BP		5
%define			RM32_RM_SI		6
%define			RM32_RM_DI		7

%define			RM32_RM_EAX		0
%define			RM32_RM_ECX		1
%define			RM32_RM_EDX		2
%define			RM32_RM_EBX		3
%define			RM32_RM_ESP		4
%define			RM32_RM_EBP		5
%define			RM32_RM_ESI		6
%define			RM32_RM_EDI		7

%define			RM32_RM_MM0		0
%define			RM32_RM_MM1		1
%define			RM32_RM_MM2		2
%define			RM32_RM_MM3		3
%define			RM32_RM_MM4		4
%define			RM32_RM_MM5		5
%define			RM32_RM_MM6		6
%define			RM32_RM_MM7		7

%define			RM32_RM_XMM0		0
%define			RM32_RM_XMM1		1
%define			RM32_RM_XMM2		2
%define			RM32_RM_XMM3		3
%define			RM32_RM_XMM4		4
%define			RM32_RM_XMM5		5
%define			RM32_RM_XMM6		6
%define			RM32_RM_XMM7		7

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
