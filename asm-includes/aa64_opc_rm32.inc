; $Id: //depot/external/aa64_opc_rm32.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_OPC_RM32

%define 		INCLUDED_AA64_OPC_RM32	BOOL_TRUE

;------------------------------------------------------------------------------
;	32 bit mod R/M byte reg field values
;------------------------------------------------------------------------------

%define			RM32_REG_SPL		4
%define			RM32_REG_BPL		5
%define			RM32_REG_SIL		6
%define			RM32_REG_DIL		7

%define			RM32_REG_R8B		8
%define			RM32_REG_R9B		9
%define			RM32_REG_R11B		10
%define			RM32_REG_R11B		11
%define			RM32_REG_R12B		12
%define			RM32_REG_R13B		13
%define			RM32_REG_R14B		14
%define			RM32_REG_R15B		15

%define			RM32_REG_R8W		8
%define			RM32_REG_R9W		9
%define			RM32_REG_R11W		10
%define			RM32_REG_R11W		11
%define			RM32_REG_R12W		12
%define			RM32_REG_R13W		13
%define			RM32_REG_R14W		14
%define			RM32_REG_R15W		15

%define			RM32_REG_R8D		8
%define			RM32_REG_R9D		9
%define			RM32_REG_R11D		10
%define			RM32_REG_R11D		11
%define			RM32_REG_R12D		12
%define			RM32_REG_R13D		13
%define			RM32_REG_R14D		14
%define			RM32_REG_R15D		15

%define			RM32_REG_R8		8
%define			RM32_REG_R9		9
%define			RM32_REG_R11		10
%define			RM32_REG_R11		11
%define			RM32_REG_R12		12
%define			RM32_REG_R13		13
%define			RM32_REG_R14		14
%define			RM32_REG_R15		15

%define			RM32_REG_XMM8		8
%define			RM32_REG_XMM9		9
%define			RM32_REG_XMM10		10
%define			RM32_REG_XMM11		11
%define			RM32_REG_XMM12		12
%define			RM32_REG_XMM13		13
%define			RM32_REG_XMM14		14
%define			RM32_REG_XMM15		15

%define			RM32_REG_CR8		8
%define			RM32_REG_CR9		9
%define			RM32_REG_CR10		10
%define			RM32_REG_CR11		11
%define			RM32_REG_CR12		12
%define			RM32_REG_CR13		13
%define			RM32_REG_CR14		14
%define			RM32_REG_CR15		15

%define			RM32_REG_DR8		8
%define			RM32_REG_DR9		9
%define			RM32_REG_DR10		10
%define			RM32_REG_DR11		11
%define			RM32_REG_DR12		12
%define			RM32_REG_DR13		13
%define			RM32_REG_DR14		14
%define			RM32_REG_DR15		15

;------------------------------------------------------------------------------
;	32 bit mod R/M byte RM field values
;------------------------------------------------------------------------------

%define			RM32_RM_RIP_DISP32_NO_REX 5	; only in PM64
%define			RM32_RM_EIP_DISP32_NO_REX 5	; only in PM64 with ADSIZE prefix

%define			RM32_RM_RIP_DISP32	13	; only in PM64
%define			RM32_RM_EIP_DISP32	13	; only in PM64 with ADSIZE prefix

%define			RM32_RM_R8_NODISP	8
%define			RM32_RM_R9_NODISP	9
%define			RM32_RM_R10_NODISP	10
%define			RM32_RM_R11_NODISP	11
%define			RM32_RM_SIB_NODISP	12
;			RM32_RM_RIP/EIP_DISP32	13	; see above
%define			RM32_RM_R14_NODISP	14
%define			RM32_RM_R15_NODISP	15

%define			RM32_RM_R8_DISP8	8
%define			RM32_RM_R9_DISP8	9
%define			RM32_RM_R10_DISP8	10
%define			RM32_RM_R11_DISP8	11
%define			RM32_RM_SIB_DISP8	12
%define			RM32_RM_R13_DISP8	13
%define			RM32_RM_R14_DISP8	14
%define			RM32_RM_R15_DISP8	15

%define			RM32_RM_R8_DISP32	8
%define			RM32_RM_R9_DISP32	9
%define			RM32_RM_R10_DISP32	10
%define			RM32_RM_R11_DISP32	11
%define			RM32_RM_SIB_DISP32	12
%define			RM32_RM_R13_DISP32	13
%define			RM32_RM_R14_DISP32	14
%define			RM32_RM_R15_DISP32	15

%define			RM32_RM_R8B		8
%define			RM32_RM_R9B		9
%define			RM32_RM_R10B		10
%define			RM32_RM_R11B		11
%define			RM32_RM_R12B		12
%define			RM32_RM_R13B		13
%define			RM32_RM_R14B		14
%define			RM32_RM_R15B		15

%define			RM32_RM_R8W		8
%define			RM32_RM_R9W		9
%define			RM32_RM_R10W		10
%define			RM32_RM_R11W		11
%define			RM32_RM_R12W		12
%define			RM32_RM_R13W		13
%define			RM32_RM_R14W		14
%define			RM32_RM_R15W		15

%define			RM32_RM_R8D		8
%define			RM32_RM_R9D		9
%define			RM32_RM_R10D		10
%define			RM32_RM_R11D		11
%define			RM32_RM_R12D		12
%define			RM32_RM_R13D		13
%define			RM32_RM_R14D		14
%define			RM32_RM_R15D		15

%define			RM32_RM_R8		8
%define			RM32_RM_R9		9
%define			RM32_RM_R10		10
%define			RM32_RM_R11		11
%define			RM32_RM_R12		12
%define			RM32_RM_R13		13
%define			RM32_RM_R14		14
%define			RM32_RM_R15		15

%define			RM32_RM_XMM8		8
%define			RM32_RM_XMM9		9
%define			RM32_RM_XMM10		10
%define			RM32_RM_XMM11		11
%define			RM32_RM_XMM12		12
%define			RM32_RM_XMM13		13
%define			RM32_RM_XMM14		14
%define			RM32_RM_XMM15		15

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
