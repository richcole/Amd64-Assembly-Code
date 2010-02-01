; $Id: //depot/external/ia32_fp.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_FP

%define 		INCLUDED_IA32_FP	BOOL_TRUE

;------------------------------------------------------------------------------
;	CW
;------------------------------------------------------------------------------

%define			CW_X			12
%define			CW_RC			10
%define			CW_PC			8
%define			CW_PM			5
%define			CW_UM			4
%define			CW_OM			3
%define			CW_ZM			2
%define			CW_DM			1
%define			CW_IM			0

%define			CW_RC_ZERO		3
%define			CW_RC_UP		2
%define			CW_RC_DOWN		1
%define			CW_RC_NEAR		0

%define			CW_PC_EXTENDED		3
%define			CW_PC_DOUBLE		2
%define			CW_PC_RESERVED		1
%define			CW_PC_SINGLE		0

%define			MASK_CW_X		(1 << CW_X)
%define			MASK_CW_RC		(CW_RC_ZERO << CW_RC)
%define			MASK_CW_PC		(CW_PC_EXTENDED << CW_PC)
%define			MASK_CW_PM		(1 << CW_PM)
%define			MASK_CW_UM		(1 << CW_UM)
%define			MASK_CW_OM		(1 << CW_OM)
%define			MASK_CW_ZM		(1 << CW_ZM)
%define			MASK_CW_DM		(1 << CW_DM)
%define			MASK_CW_IM		(1 << CW_IM)

;------------------------------------------------------------------------------
;	SW
;------------------------------------------------------------------------------

%define			SW_B			15
%define			SW_C3			14
%define			SW_TOP			11
%define			SW_C2			10
%define			SW_C1			9
%define			SW_C0			8
%define			SW_ES			7
%define			SW_SF			6
%define			SW_PE			5
%define			SW_UE			4
%define			SW_OE			3
%define			SW_ZE			2
%define			SW_DE			1
%define			SW_IE			0

%define			SW_TOP_7		7
%define			SW_TOP_6		6
%define			SW_TOP_5		5
%define			SW_TOP_4		4
%define			SW_TOP_3		3
%define			SW_TOP_2		2
%define			SW_TOP_1		1
%define			SW_TOP_0		0

%define			MASK_SW_B		(1 << SW_B)
%define			MASK_SW_C3		(1 << SW_C3)
%define			MASK_SW_TOP		(SW_TOP_7 << SW_TOP)
%define			MASK_SW_C2		(1 << SW_C2)
%define			MASK_SW_C1		(1 << SW_C1)
%define			MASK_SW_C0		(1 << SW_C0)
%define			MASK_SW_ES		(1 << SW_ES)
%define			MASK_SW_SF		(1 << SW_SF)
%define			MASK_SW_PE		(1 << SW_PE)
%define			MASK_SW_UE		(1 << SW_UE)
%define			MASK_SW_OE		(1 << SW_OE)
%define			MASK_SW_ZE		(1 << SW_ZE)
%define			MASK_SW_DE		(1 << SW_DE)
%define			MASK_SW_IE		(1 << SW_IE)

;------------------------------------------------------------------------------
;	TW
;------------------------------------------------------------------------------

%define			TW_TAG7			14
%define			TW_TAG6			12
%define			TW_TAG5			10
%define			TW_TAG4			8
%define			TW_TAG3			6
%define			TW_TAG2			4
%define			TW_TAG1			2
%define			TW_TAG0			0

%define			TW_TAG_EMPTY		3
%define			TW_TAG_SPECIAL		2
%define			TW_TAG_ZERO		1
%define			TW_TAG_VALID		0

%define			MASK_TW_TAG7		(TW_TAG_EMPTY << TW_TAG7)
%define			MASK_TW_TAG6		(TW_TAG_EMPTY << TW_TAG6)
%define			MASK_TW_TAG5		(TW_TAG_EMPTY << TW_TAG5)
%define			MASK_TW_TAG4		(TW_TAG_EMPTY << TW_TAG4)
%define			MASK_TW_TAG3		(TW_TAG_EMPTY << TW_TAG3)
%define			MASK_TW_TAG2		(TW_TAG_EMPTY << TW_TAG2)
%define			MASK_TW_TAG1		(TW_TAG_EMPTY << TW_TAG1)
%define			MASK_TW_TAG0		(TW_TAG_EMPTY << TW_TAG0)

;------------------------------------------------------------------------------
;	MXCSR
;------------------------------------------------------------------------------

%define			MXCSR_FZ		15
%define			MXCSR_RC		13
%define			MXCSR_PM		12
%define			MXCSR_UM		11
%define			MXCSR_OM		10
%define			MXCSR_ZM		9
%define			MXCSR_DM		8
%define			MXCSR_IM		7
%define			MXCSR_PE		5
%define			MXCSR_UE		4
%define			MXCSR_OE		3
%define			MXCSR_ZE		2
%define			MXCSR_DE		1
%define			MXCSR_IE		0

%define			MXCSR_RC_ZERO		3
%define			MXCSR_RC_UP		2
%define			MXCSR_RC_DOWN		1
%define			MXCSR_RC_NEAR		0

%define			MASK_MXCSR_FZ		(1 << MXCSR_FZ)
%define			MASK_MXCSR_RC		(MXCSR_RC_ZERO << MXCSR_RC)
%define			MASK_MXCSR_PM		(1 << MXCSR_PM)
%define			MASK_MXCSR_UM		(1 << MXCSR_UM)
%define			MASK_MXCSR_OM		(1 << MXCSR_OM)
%define			MASK_MXCSR_ZM		(1 << MXCSR_ZM)
%define			MASK_MXCSR_DM		(1 << MXCSR_DM)
%define			MASK_MXCSR_IM		(1 << MXCSR_IM)
%define			MASK_MXCSR_PE		(1 << MXCSR_PE)
%define			MASK_MXCSR_UE		(1 << MXCSR_UE)
%define			MASK_MXCSR_OE		(1 << MXCSR_OE)
%define			MASK_MXCSR_ZE		(1 << MXCSR_ZE)
%define			MASK_MXCSR_DE		(1 << MXCSR_DE)
%define			MASK_MXCSR_IE		(1 << MXCSR_IE)

;------------------------------------------------------------------------------
;	F(N)INIT
;------------------------------------------------------------------------------

%define			FINIT_CW		037Fh
%define			FINIT_SW		0000h
%define			FINIT_TW		0FFFFh
%define			FINIT_FP_FIP		0
%define			FINIT_FP_FDP		0
%define			FINIT_FP_OPC		0

;------------------------------------------------------------------------------
;	FSTENV/FLDENV state
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; 16 bit real mode
			;------------------------------------------------------

struc			MEM_FSTENV16_RM
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.FIP_LOW:		resw 1		; bits 15..0
			.FIP_HIGH_OPC:		resw 1		; bits 19..16, 0b, bits 10..0
			.FDP_LOW:		resw 1		; bits 15..0
			.FDP_HIGH:		resw 1		; bits 19..16, 0000_0000_0000b
endstruc
CHECK_C_STRUC_SIZE	MEM_FSTENV16_RM,	14

struc			MEM_FLDENV16_RM
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.FIP_LOW:		resw 1		; bits 15..0
			.FIP_HIGH_OPC:		resw 1		; bits 19..16, 0b, bits 10..0
			.FDP_LOW:		resw 1		; bits 15..0
			.FDP_HIGH:		resw 1		; bits 19..16, 0000_0000_0000b
endstruc
CHECK_C_STRUC_SIZE	MEM_FLDENV16_RM,	14

			;------------------------------------------------------
			; 32 bit real mode
			;------------------------------------------------------

struc			MEM_FSTENV32_RM
			.CW:			resw 1
						resw 1
			.SW:			resw 1
						resw 1
			.TW:			resw 1
						resw 1
			.FIP_LOW:		resw 1		; bits 15..0
						resw 1
			.FIP_HIGH_OPC:		resd 1		; 0000b, bits 31..16, 0b, bits 10..0
			.FDP_LOW:		resw 1		; bits 15..0
						resw 1
			.FDP_HIGH:		resd 1		; 0000b, bits 31..16, 0000_0000_0000b
endstruc
CHECK_C_STRUC_SIZE	MEM_FSTENV32_RM,	28

struc			MEM_FLDENV32_RM
			.CW:			resw 1
						resw 1
			.SW:			resw 1
						resw 1
			.TW:			resw 1
						resw 1
			.FIP_LOW:		resw 1		; bits 15..0
						resw 1
			.FIP_HIGH_OPC:		resd 1		; 0000b, bits 31..16, 0b, bits 10..0
			.FDP_LOW:		resw 1		; bits 15..0
						resw 1
			.FDP_HIGH:		resd 1		; 0000b, bits 31..16, 0000_0000_0000b
endstruc
CHECK_C_STRUC_SIZE	MEM_FLDENV32_RM,	28

			;------------------------------------------------------
			; 16 bit protected mode
			;------------------------------------------------------

struc			MEM_FSTENV16_PM
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.FIP_OFF:		resw 1
			.FIP_SEL:		resw 1
			.FDP_OFF:		resw 1
			.FDP_SEL:		resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_FSTENV16_PM,	14

struc			MEM_FLDENV16_PM
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.FIP_OFF:		resw 1
			.FIP_SEL:		resw 1
			.FDP_OFF:		resw 1
			.FDP_SEL:		resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_FLDENV16_PM,	14

			;------------------------------------------------------
			; 32 bit protected mode
			;------------------------------------------------------

struc			MEM_FSTENV32_PM
			.CW:			resw 1
						resw 1
			.SW:			resw 1
						resw 1
			.TW:			resw 1
						resw 1
			.FIP_OFF:		resd 1
			.FIP_SEL:		resw 1
			.OPC:			resw 1		; 0000_0b, bits 10..0
			.FDP_OFF:		resd 1
			.FDP_SEL:		resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_FSTENV32_PM,	28

struc			MEM_FLDENV32_PM
			.CW:			resw 1
						resw 1
			.SW:			resw 1
						resw 1
			.TW:			resw 1
						resw 1
			.FIP_OFF:		resd 1
			.FIP_SEL:		resw 1
			.OPC:			resw 1		; 0000_0b, bits 10..0
			.FDP_OFF:		resd 1
			.FDP_SEL:		resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_FLDENV32_PM,	28

;------------------------------------------------------------------------------
;	FXSAVE/FXRSTOR state
;------------------------------------------------------------------------------

struc			MEM_FXSAVE
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.OPC:			resw 1
			.FIP_OFF:		resd 1
			.FIP_SEL:		resw 1
						resb 2
			.FDP_OFF:		resd 1
			.FDP_SEL:		resw 1
						resb 2
			.MXCSR:			resd 1
						resb 4
			.ST0_MM0:		rest 1
						resb 6
			.ST1_MM1:		rest 1
						resb 6
			.ST2_MM2:		rest 1
						resb 6
			.ST3_MM3:		rest 1
						resb 6
			.ST4_MM4:		rest 1
						resb 6
			.ST5_MM5:		rest 1
						resb 6
			.ST6_MM6:		rest 1
						resb 6
			.ST7_MM7:		rest 1
						resb 6
			.XMM0_1:		resd 1
			.XMM0_2:		resd 1
			.XMM0_3:		resd 1
			.XMM0_4:		resd 1
			.XMM1_1:		resd 1
			.XMM1_2:		resd 1
			.XMM1_3:		resd 1
			.XMM1_4:		resd 1
			.XMM2_1:		resd 1
			.XMM2_2:		resd 1
			.XMM2_3:		resd 1
			.XMM2_4:		resd 1
			.XMM3_1:		resd 1
			.XMM3_2:		resd 1
			.XMM3_3:		resd 1
			.XMM3_4:		resd 1
			.XMM4_1:		resd 1
			.XMM4_2:		resd 1
			.XMM4_3:		resd 1
			.XMM4_4:		resd 1
			.XMM5_1:		resd 1
			.XMM5_2:		resd 1
			.XMM5_3:		resd 1
			.XMM5_4:		resd 1
			.XMM6_1:		resd 1
			.XMM6_2:		resd 1
			.XMM6_3:		resd 1
			.XMM6_4:		resd 1
			.XMM7_1:		resd 1
			.XMM7_2:		resd 1
			.XMM7_3:		resd 1
			.XMM7_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXSAVE,		512

struc			MEM_FXRSTOR
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.OPC:			resw 1
			.FIP_OFF:		resd 1
			.FIP_SEL:		resw 1
						resb 2
			.FDP_OFF:		resd 1
			.FDP_SEL:		resw 1
						resb 2
			.MXCSR:			resd 1
						resb 4
			.ST0_MM0:		rest 1
						resb 6
			.ST1_MM1:		rest 1
						resb 6
			.ST2_MM2:		rest 1
						resb 6
			.ST3_MM3:		rest 1
						resb 6
			.ST4_MM4:		rest 1
						resb 6
			.ST5_MM5:		rest 1
						resb 6
			.ST6_MM6:		rest 1
						resb 6
			.ST7_MM7:		rest 1
						resb 6
			.XMM0_1:		resd 1
			.XMM0_2:		resd 1
			.XMM0_3:		resd 1
			.XMM0_4:		resd 1
			.XMM1_1:		resd 1
			.XMM1_2:		resd 1
			.XMM1_3:		resd 1
			.XMM1_4:		resd 1
			.XMM2_1:		resd 1
			.XMM2_2:		resd 1
			.XMM2_3:		resd 1
			.XMM2_4:		resd 1
			.XMM3_1:		resd 1
			.XMM3_2:		resd 1
			.XMM3_3:		resd 1
			.XMM3_4:		resd 1
			.XMM4_1:		resd 1
			.XMM4_2:		resd 1
			.XMM4_3:		resd 1
			.XMM4_4:		resd 1
			.XMM5_1:		resd 1
			.XMM5_2:		resd 1
			.XMM5_3:		resd 1
			.XMM5_4:		resd 1
			.XMM6_1:		resd 1
			.XMM6_2:		resd 1
			.XMM6_3:		resd 1
			.XMM6_4:		resd 1
			.XMM7_1:		resd 1
			.XMM7_2:		resd 1
			.XMM7_3:		resd 1
			.XMM7_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXRSTOR,		512

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
