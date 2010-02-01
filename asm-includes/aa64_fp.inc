; $Id: //depot/external/aa64_fp.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_FP

%define 		INCLUDED_AA64_FP	BOOL_TRUE

;------------------------------------------------------------------------------
;	LM FXSAVE/FXRSTOR state
;------------------------------------------------------------------------------

struc			MEM_FXSAVE_LM
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
			.XMM8_1:		resd 1
			.XMM8_2:		resd 1
			.XMM8_3:		resd 1
			.XMM8_4:		resd 1
			.XMM9_1:		resd 1
			.XMM9_2:		resd 1
			.XMM9_3:		resd 1
			.XMM9_4:		resd 1
			.XMM10_1:		resd 1
			.XMM10_2:		resd 1
			.XMM10_3:		resd 1
			.XMM10_4:		resd 1
			.XMM11_1:		resd 1
			.XMM11_2:		resd 1
			.XMM11_3:		resd 1
			.XMM11_4:		resd 1
			.XMM12_1:		resd 1
			.XMM12_2:		resd 1
			.XMM12_3:		resd 1
			.XMM12_4:		resd 1
			.XMM13_1:		resd 1
			.XMM13_2:		resd 1
			.XMM13_3:		resd 1
			.XMM13_4:		resd 1
			.XMM14_1:		resd 1
			.XMM14_2:		resd 1
			.XMM14_3:		resd 1
			.XMM14_4:		resd 1
			.XMM15_1:		resd 1
			.XMM15_2:		resd 1
			.XMM15_3:		resd 1
			.XMM15_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXSAVE_LM,		512

struc			MEM_FXRSTOR_LM
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
			.XMM8_1:		resd 1
			.XMM8_2:		resd 1
			.XMM8_3:		resd 1
			.XMM8_4:		resd 1
			.XMM9_1:		resd 1
			.XMM9_2:		resd 1
			.XMM9_3:		resd 1
			.XMM9_4:		resd 1
			.XMM10_1:		resd 1
			.XMM10_2:		resd 1
			.XMM10_3:		resd 1
			.XMM10_4:		resd 1
			.XMM11_1:		resd 1
			.XMM11_2:		resd 1
			.XMM11_3:		resd 1
			.XMM11_4:		resd 1
			.XMM12_1:		resd 1
			.XMM12_2:		resd 1
			.XMM12_3:		resd 1
			.XMM12_4:		resd 1
			.XMM13_1:		resd 1
			.XMM13_2:		resd 1
			.XMM13_3:		resd 1
			.XMM13_4:		resd 1
			.XMM14_1:		resd 1
			.XMM14_2:		resd 1
			.XMM14_3:		resd 1
			.XMM14_4:		resd 1
			.XMM15_1:		resd 1
			.XMM15_2:		resd 1
			.XMM15_3:		resd 1
			.XMM15_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXRSTOR_LM,		512

;------------------------------------------------------------------------------
;	64 bit LM FXSAVE/FXRSTOR state
;------------------------------------------------------------------------------

struc			MEM_FXSAVE_LM64
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.OPC:			resw 1
			.FIP_OFF:		resq 1
			.FDP_OFF:		resq 1
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
			.XMM8_1:		resd 1
			.XMM8_2:		resd 1
			.XMM8_3:		resd 1
			.XMM8_4:		resd 1
			.XMM9_1:		resd 1
			.XMM9_2:		resd 1
			.XMM9_3:		resd 1
			.XMM9_4:		resd 1
			.XMM10_1:		resd 1
			.XMM10_2:		resd 1
			.XMM10_3:		resd 1
			.XMM10_4:		resd 1
			.XMM11_1:		resd 1
			.XMM11_2:		resd 1
			.XMM11_3:		resd 1
			.XMM11_4:		resd 1
			.XMM12_1:		resd 1
			.XMM12_2:		resd 1
			.XMM12_3:		resd 1
			.XMM12_4:		resd 1
			.XMM13_1:		resd 1
			.XMM13_2:		resd 1
			.XMM13_3:		resd 1
			.XMM13_4:		resd 1
			.XMM14_1:		resd 1
			.XMM14_2:		resd 1
			.XMM14_3:		resd 1
			.XMM14_4:		resd 1
			.XMM15_1:		resd 1
			.XMM15_2:		resd 1
			.XMM15_3:		resd 1
			.XMM15_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXSAVE_LM64,	512

struc			MEM_FXRSTOR_LM64
			.CW:			resw 1
			.SW:			resw 1
			.TW:			resw 1
			.OPC:			resw 1
			.FIP_OFF:		resq 1
			.FDP_OFF:		resq 1
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
			.XMM8_1:		resd 1
			.XMM8_2:		resd 1
			.XMM8_3:		resd 1
			.XMM8_4:		resd 1
			.XMM9_1:		resd 1
			.XMM9_2:		resd 1
			.XMM9_3:		resd 1
			.XMM9_4:		resd 1
			.XMM10_1:		resd 1
			.XMM10_2:		resd 1
			.XMM10_3:		resd 1
			.XMM10_4:		resd 1
			.XMM11_1:		resd 1
			.XMM11_2:		resd 1
			.XMM11_3:		resd 1
			.XMM11_4:		resd 1
			.XMM12_1:		resd 1
			.XMM12_2:		resd 1
			.XMM12_3:		resd 1
			.XMM12_4:		resd 1
			.XMM13_1:		resd 1
			.XMM13_2:		resd 1
			.XMM13_3:		resd 1
			.XMM13_4:		resd 1
			.XMM14_1:		resd 1
			.XMM14_2:		resd 1
			.XMM14_3:		resd 1
			.XMM14_4:		resd 1
			.XMM15_1:		resd 1
			.XMM15_2:		resd 1
			.XMM15_3:		resd 1
			.XMM15_4:		resd 1
						resb (512-($-$$))
endstruc
CHECK_C_STRUC_SIZE	MEM_FXRSTOR_LM64,	512

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
