; $Id: //depot/external/main.asm#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_MAIN_HEAD

%define 		INCLUDED_MAIN_HEAD	BOOL_TRUE

;------------------------------------------------------------------------------
;	NASM stuff
;------------------------------------------------------------------------------

%locals .

%define off offset	; since there is a "seg", using "off" is cleaner

;------------------------------------------------------------------------------
;	datatypes
;------------------------------------------------------------------------------

%define			BOOL_FALSE		0		; our own arbitrary definition
%define			BOOL_TRUE		1		; our own arbitrary definition

			; $WARN: The following two don't work for FP data, ie. OWORD, REAL4, REAL8, or REAL10. $

%define			ALL_BITS_CLEAR		0		; okay for unsigned and signed
%define			ALL_BITS_SET		-1		; okay for unsigned and signed

%define			BITS_BIT		0001
%define			BITS_NIBBLE		0004
%define			BITS_BYTE		0008
%define			BITS_UBYTE		BITS_BYTE
%define			BITS_SBYTE		(BITS_BYTE - 1)
%define			BITS_WORD		0016
%define			BITS_UWORD		BITS_WORD
%define			BITS_SWORD		(BITS_WORD - 1)
%define			BITS_DWORD		0032
%define			BITS_UDWORD		BITS_DWORD
%define			BITS_SDWORD		(BITS_DWORD - 1)
%define			BITS_FWORD		0048
%define			BITS_QWORD		0064
%define			BITS_OWORD		0128
%define			BITS_TBYTE		0080
%define			BITS_TWORD		BITS_TBYTE

%define			BITS_PARA		BITS_NIBBLE
%define			BITS_KILO		10
%define			BITS_PAGE		12
%define			BITS_SEG		16
%define			BITS_MEGA		20
%define			BITS_GIGA		30

%define			BYTES_BYTE		1
%define			BYTES_UBYTE		BYTES_BYTE
%define			BYTES_SBYTE		BYTES_BYTE
%define			BYTES_WORD		(BYTES_BYTE * 0002)
%define			BYTES_UWORD		BYTES_WORD
%define			BYTES_SWORD		BYTES_WORD
%define			BYTES_DWORD		(BYTES_BYTE * 0004)
%define			BYTES_UDWORD		BYTES_DWORD
%define			BYTES_SDWORD		BYTES_DWORD
%define			BYTES_FWORD		(BYTES_BYTE * 0006)
%define			BYTES_QWORD		(BYTES_BYTE * 0008)
%define			BYTES_OWORD		(BYTES_BYTE * 0016)
%define			BYTES_TBYTE		(BYTES_BYTE * 0010)
%define			BYTES_TWORD		BYTES_TBYTE

%define			BYTES_PARA		(1 << BITS_PARA)
%define			BYTES_KILO		(1 << BITS_KILO)
%define			BYTES_PAGE		(1 << BITS_PAGE)
%define			BYTES_SEG		(1 << BITS_SEG)
%define			BYTES_MEGA		(1 << BITS_MEGA)
%define			BYTES_2MEGA		(2 * BYTES_MEGA)
%define			BYTES_4MEGA		(4 * BYTES_MEGA)
%define			BYTES_GIGA		(1 << BITS_GIGA)

;------------------------------------------------------------------------------
;	minimum and maximum values for datatypes
;------------------------------------------------------------------------------

%define			MIN_BIT			0
%define			MAX_BIT			1
%define			MIN_NIBBLE		0
%define			MAX_NIBBLE		((1 << BITS_NIBBLE) - 1)
%define			MIN_BYTE		0
%define			MAX_BYTE		((1 << BITS_BYTE) - 1)
%define			MIN_UBYTE		MIN_BYTE
%define			MAX_UBYTE		MAX_BYTE
%define			MIN_SBYTE		(0 - (1 << BITS_SBYTE))
%define			MAX_SBYTE		((1 << BITS_SBYTE) - 1)
%define			MIN_WORD		0
%define			MAX_WORD		((1 << BITS_WORD) - 1)
%define			MIN_UWORD		MIN_WORD
%define			MAX_UWORD		MAX_WORD
%define			MIN_SWORD		(0 - (1 << BITS_SWORD))
%define			MAX_SWORD		((1 << BITS_SWORD) - 1)
%define			MIN_DWORD		0
%define			MAX_DWORD		((1 << BITS_DWORD) - 1)
%define			MIN_UDWORD		MIN_DWORD
%define			MAX_UDWORD		MAX_DWORD
%define			MIN_SDWORD		(0 - (1 << BITS_SDWORD))
%define			MAX_SDWORD		((1 << BITS_SDWORD) - 1)

%define			MIN_PARA		0
%define			MAX_PARA		(BYTES_PARA - 1)
%define			MIN_KILO		0
%define			MAX_KILO		(BYTES_KILO - 1)
%define			MIN_PAGE		0
%define			MAX_PAGE		(BYTES_PAGE - 1)
%define			MIN_SEG			0
%define			MAX_SEG			(BYTES_SEG - 1)
%define			MIN_MEGA		0
%define			MAX_MEGA		(BYTES_MEGA - 1)
%define			MIN_2MEGA		0
%define			MAX_2MEGA		(BYTES_2MEGA - 1)
%define			MIN_4MEGA		0
%define			MAX_4MEGA		(BYTES_4MEGA - 1)
%define			MIN_GIGA		0
%define			MAX_GIGA		(BYTES_GIGA - 1)

;------------------------------------------------------------------------------
;	macro for safety (size) check on structures
;------------------------------------------------------------------------------

%macro CHECK_C_STRUC_SIZE 2
 %if %1_size <> (%2)
  %error structure has unexpected size
 %endif
%endmacro

;------------------------------------------------------------------------------
;	compile time option default definitions
;------------------------------------------------------------------------------

%define			TEST_ARCH_IA32		0032h	; IA-32
%define			TEST_ARCH_AA64		0064h	; AA-64

			%ifndef OPT_C_TEST_ARCH
			 %define OPT_C_TEST_ARCH TEST_ARCH_AA64
			%endif

;------------------------------------------------------------------------------
;	include files that don't generate any code and/or data
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; IA-32 stuff
			;------------------------------------------------------

%include		"ia32_bits.inc"

%include		"ia32_eflags.inc"
%include		"ia32_sreg.inc"
%include		"ia32_tr.inc"
%include		"ia32_crx.inc"
%include		"ia32_drx.inc"
%include		"ia32_fp.inc"
%include		"ia32_msr.inc"

%include		"ia32_opc_1.inc"
%include		"ia32_opc_2.inc"
%include		"ia32_opc_grp.inc"
%include		"ia32_opc_fpu.inc"
%include		"ia32_opc_mmx.inc"
%include		"ia32_opc_sse.inc"
%include		"ia32_opc_k3d.inc"
%include		"ia32_opc_misc.inc"
%include		"ia32_opc_rm16.inc"
%include		"ia32_opc_rm32.inc"
%include		"ia32_opc_sib.inc"
%include		"ia32_opc_enc.inc"

%include		"ia32_ptr.inc"
%include		"ia32_sframe.inc"
%include		"ia32_sel.inc"
%include		"ia32_desc.inc"
%include		"ia32_tss.inc"
%include		"ia32_paging.inc"
%include		"ia32_smm.inc"

%include		"ia32_cc.inc"
%include		"ia32_except.inc"
%include		"ia32_inter.inc"
%include		"ia32_legacy.inc"
%include		"ia32_mode.inc"
%include		"ia32_initial.inc"
%include		"ia32_cpuid.inc"

%if OPT_C_TEST_ARCH = TEST_ARCH_AA64

			;------------------------------------------------------
			; AA-64 stuff
			;------------------------------------------------------

 %include		"aa64_bits.inc"

 %include		"aa64_reg.inc"
 %include		"aa64_tr.inc"
 %include		"aa64_crx.inc"
 %include		"aa64_fp.inc"
 %include		"aa64_msr.inc"		; $WARN: overrides part of the IA-32 definitions $

 %include		"aa64_opc_1.inc"
 %include		"aa64_opc_rm32.inc"
 %include		"aa64_opc_sib.inc"
 %include		"aa64_opc_rex.inc"

 %include		"aa64_sframe.inc"
 %include		"aa64_desc.inc"
 %include		"aa64_tss.inc"
 %include		"aa64_paging.inc"	; $WARN: overrides part of the IA-32 definitions $
 %include		"aa64_smm.inc"

 %include		"aa64_initial.inc"
 %include		"aa64_cpuid.inc"

%endif

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
