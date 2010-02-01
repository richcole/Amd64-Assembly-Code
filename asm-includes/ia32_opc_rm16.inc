; $Id: //depot/external/ia32_opc_rm16.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_RM16

%define 		INCLUDED_IA32_OPC_RM16	BOOL_TRUE

;------------------------------------------------------------------------------
;	16 bit mod R/M byte fields
;------------------------------------------------------------------------------

%define			RM16_MOD		6
%define			RM16_REG		3
%define			RM16_RM			0

%define			MASK_RM16_MOD		(((1 << 2) - 1) << RM16_MOD)
%define			MASK_RM16_REG		(((1 << 3) - 1) << RM16_REG)
%define			MASK_RM16_RM		(((1 << 3) - 1) << RM16_RM)

;------------------------------------------------------------------------------
;	16 bit mod R/M byte reg field values
;------------------------------------------------------------------------------

%define			RM16_REG_AL		0
%define			RM16_REG_CL		1
%define			RM16_REG_DL		2
%define			RM16_REG_BL		3
%define			RM16_REG_AH		4
%define			RM16_REG_CH		5
%define			RM16_REG_DH		6
%define			RM16_REG_BH		7

%define			RM16_REG_AX		0
%define			RM16_REG_CX		1
%define			RM16_REG_DX		2
%define			RM16_REG_BX		3
%define			RM16_REG_SP		4
%define			RM16_REG_BP		5
%define			RM16_REG_SI		6
%define			RM16_REG_DI		7

%define			RM16_REG_EAX		0
%define			RM16_REG_ECX		1
%define			RM16_REG_EDX		2
%define			RM16_REG_EBX		3
%define			RM16_REG_ESP		4
%define			RM16_REG_EBP		5
%define			RM16_REG_ESI		6
%define			RM16_REG_EDI		7

%define			RM16_REG_MM0		0
%define			RM16_REG_MM1		1
%define			RM16_REG_MM2		2
%define			RM16_REG_MM3		3
%define			RM16_REG_MM4		4
%define			RM16_REG_MM5		5
%define			RM16_REG_MM6		6
%define			RM16_REG_MM7		7

%define			RM16_REG_XMM0		0
%define			RM16_REG_XMM1		1
%define			RM16_REG_XMM2		2
%define			RM16_REG_XMM3		3
%define			RM16_REG_XMM4		4
%define			RM16_REG_XMM5		5
%define			RM16_REG_XMM6		6
%define			RM16_REG_XMM7		7

%define			RM16_REG_ES		0
%define			RM16_REG_CS		1
%define			RM16_REG_SS		2
%define			RM16_REG_DS		3
%define			RM16_REG_FS		4
%define			RM16_REG_GS		5
%define			RM16_REG_SREG6		6
%define			RM16_REG_SREG7		7

%define			RM16_REG_CR0		0
%define			RM16_REG_CR1		1
%define			RM16_REG_CR2		2
%define			RM16_REG_CR3		3
%define			RM16_REG_CR4		4
%define			RM16_REG_CR5		5
%define			RM16_REG_CR6		6
%define			RM16_REG_CR7		7

%define			RM16_REG_DR0		0
%define			RM16_REG_DR1		1
%define			RM16_REG_DR2		2
%define			RM16_REG_DR3		3
%define			RM16_REG_DR4		4
%define			RM16_REG_DR5		5
%define			RM16_REG_DR6		6
%define			RM16_REG_DR7		7

;------------------------------------------------------------------------------
;	16 bit mod R/M byte RM field values
;------------------------------------------------------------------------------

%define			RM16_RM_BX_SI_NODISP	0
%define			RM16_RM_BX_DI_NODISP	1
%define			RM16_RM_BP_SI_NODISP	2
%define			RM16_RM_BP_DI_NODISP	3
%define			RM16_RM_SI_NODISP	4
%define			RM16_RM_DI_NODISP	5
%define			RM16_RM_DISP16		6
%define			RM16_RM_BX_NODISP	7

%define			RM16_RM_BX_SI_DISP8	0
%define			RM16_RM_BX_DI_DISP8	1
%define			RM16_RM_BP_SI_DISP8	2
%define			RM16_RM_BP_DI_DISP8	3
%define			RM16_RM_SI_DISP8	4
%define			RM16_RM_DI_DISP8	5
%define			RM16_RM_BP_DISP8	6
%define			RM16_RM_BX_DISP8	7

%define			RM16_RM_BX_SI_DISP16	0
%define			RM16_RM_BX_DI_DISP16	1
%define			RM16_RM_BP_SI_DISP16	2
%define			RM16_RM_BP_DI_DISP16	3
%define			RM16_RM_SI_DISP16	4
%define			RM16_RM_DI_DISP16	5
%define			RM16_RM_BP_DISP16	6
%define			RM16_RM_BX_DISP16	7

%define			RM16_RM_AL		0
%define			RM16_RM_CL		1
%define			RM16_RM_DL		2
%define			RM16_RM_BL		3
%define			RM16_RM_AH		4
%define			RM16_RM_CH		5
%define			RM16_RM_DH		6
%define			RM16_RM_BH		7

%define			RM16_RM_AX		0
%define			RM16_RM_CX		1
%define			RM16_RM_DX		2
%define			RM16_RM_BX		3
%define			RM16_RM_SP		4
%define			RM16_RM_BP		5
%define			RM16_RM_SI		6
%define			RM16_RM_DI		7

%define			RM16_RM_EAX		0
%define			RM16_RM_ECX		1
%define			RM16_RM_EDX		2
%define			RM16_RM_EBX		3
%define			RM16_RM_ESP		4
%define			RM16_RM_EBP		5
%define			RM16_RM_ESI		6
%define			RM16_RM_EDI		7

%define			RM16_RM_MM0		0
%define			RM16_RM_MM1		1
%define			RM16_RM_MM2		2
%define			RM16_RM_MM3		3
%define			RM16_RM_MM4		4
%define			RM16_RM_MM5		5
%define			RM16_RM_MM6		6
%define			RM16_RM_MM7		7

%define			RM16_RM_XMM0		0
%define			RM16_RM_XMM1		1
%define			RM16_RM_XMM2		2
%define			RM16_RM_XMM3		3
%define			RM16_RM_XMM4		4
%define			RM16_RM_XMM5		5
%define			RM16_RM_XMM6		6
%define			RM16_RM_XMM7		7

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
