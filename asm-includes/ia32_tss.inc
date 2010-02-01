; $Id: //depot/external/ia32_tss.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_TSS

%define 		INCLUDED_IA32_TSS	BOOL_TRUE

;------------------------------------------------------------------------------
;	16 bit TSS
;------------------------------------------------------------------------------

struc			MEM_TSS16
			.TR_SEL:		resw 1
			.SP0:			resw 1		; static
			.SS0:			resw 1		; static
			.SP1:			resw 1		; static
			.SS1:			resw 1		; static
			.SP2:			resw 1		; static
			.SS2:			resw 1		; static
			.IP:			resw 1
			.FLAGS:			resw 1
			.AX:			resw 1
			.CX:			resw 1
			.DX:			resw 1
			.BX:			resw 1
			.SP:			resw 1
			.BP:			resw 1
			.SI:			resw 1
			.DI:			resw 1
			.ES:			resw 1
			.CS:			resw 1
			.SS:			resw 1
			.DS:			resw 1
			.LDTR_SEL:		resw 1		; static
endstruc
CHECK_C_STRUC_SIZE	MEM_TSS16,		44

;------------------------------------------------------------------------------
;	32 bit TSS
;------------------------------------------------------------------------------

struc			MEM_TSS32
			.TR_SEL			resw 1
						resw 1
			.ESP0			resd 1		; static
			.SS0			resw 1		; static
						resw 1
			.ESP1			resd 1		; static
			.SS1			resw 1		; static
						resw 1
			.ESP2			resd 1		; static
			.SS2			resw 1		; static
						resw 1
			.CR3			resd 1		; static
			.EIP			resd 1
			.EFLAGS			resd 1
			.EAX			resd 1
			.ECX			resd 1
			.EDX			resd 1
			.EBX			resd 1
			.ESP			resd 1
			.EBP			resd 1
			.ESI			resd 1
			.EDI			resd 1
			.ES			resw 1
						resw 1
			.CS			resw 1
						resw 1
			.SS			resw 1
						resw 1
			.DS			resw 1
						resw 1
			.FS			resw 1
						resw 1
			.GS			resw 1
						resw 1
			.LDTR_SEL		resw 1		; static
						resw 1
			.T_BIT			resw 1		; static
			.IOPB_OFF		resw 1		; static
endstruc
CHECK_C_STRUC_SIZE	MEM_TSS32,		104

;------------------------------------------------------------------------------
;	IRB
;------------------------------------------------------------------------------

struc			MEM_IRB
			.INT_07_00		resb 1
			.INT_0F_08		resb 1
			.INT_17_10		resb 1
			.INT_1F_18		resb 1
			.INT_27_20		resb 1
			.INT_2F_28		resb 1
			.INT_37_30		resb 1
			.INT_3F_38		resb 1
			.INT_47_40		resb 1
			.INT_4F_48		resb 1
			.INT_57_50		resb 1
			.INT_5F_58		resb 1
			.INT_67_60		resb 1
			.INT_6F_68		resb 1
			.INT_77_70		resb 1
			.INT_7F_78		resb 1
			.INT_87_80		resb 1
			.INT_8F_88		resb 1
			.INT_97_90		resb 1
			.INT_9F_98		resb 1
			.INT_A7_A0		resb 1
			.INT_AF_A8		resb 1
			.INT_B7_B0		resb 1
			.INT_BF_B8		resb 1
			.INT_C7_C0		resb 1
			.INT_CF_C8		resb 1
			.INT_D7_D0		resb 1
			.INT_DF_D8		resb 1
			.INT_E7_E0		resb 1
			.INT_EF_E8		resb 1
			.INT_F7_F0		resb 1
			.INT_FF_F8		resb 1
endstruc
CHECK_C_STRUC_SIZE	MEM_IRB,		32

;------------------------------------------------------------------------------
;	meaning of bits in IRB and IOPB
;------------------------------------------------------------------------------

%define			IRB_BIT_IVT		0
%define			IRB_BIT_IDT		1

%define			IOPB_BIT_ALLOW		0
%define			IOPB_BIT_DENY		1

;------------------------------------------------------------------------------
;	macros for calculating the IOPB offset and bit mask of a given port
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; ...during compile-time
			;------------------------------------------------------

%macro			CALC_C_IOPB 3		; port, offset, mask

			%if (%1) < MIN_WORD
			 %error port can't be negative
			%endif

			%if (%1) > (MAX_WORD + BYTES_DWORD - 1)
			 %error port is not valid
			%endif

%define			%2			((%1) >> 3)
%define			%3			(1 << ((%1) & 7))

%endmacro

			;------------------------------------------------------
			; ...during run-time
			;------------------------------------------------------

%macro			CALC_R_IOPB 3		; port (EDX), offset (DX), mask (AL)

			%if OPT_C_TEST_ARCH = TEST_ARCH_AA64
			 ; $ZERO: RDX.63-32 $
			%endif

			%ifnidni %1,edx
			 %error port must be in EDX
			%endif
			%ifnidni %2,dx
			 %error the target for the IOPB offset must be DX
			%endif
			%ifnidni %3,al
			 %error the target for the IOPB mask must be AL
			%endif

			push	cx

			mov	cl,dl
			and	cl,7
			inc	cl
			mov	al,00h
			stc
			rcl	al,cl

			pop	cx

			rol	edx,10h
			push	dx
			rol	edx,10h

			cmp	edx,(MAX_WORD + BYTES_DWORD - 1)
			jbe	short %%do
			mov	edx,-1
			mov	al,-1
%%do:
			shr	edx,3
			rol	edx,10h
			pop	dx
			rol	edx,10h

			; DX = AL = -1 if port is not valid

%endmacro

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
