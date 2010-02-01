; $Id: //depot/external/aa64_desc.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_DESC

%define 		INCLUDED_AA64_DESC	BOOL_TRUE

;------------------------------------------------------------------------------
;	64 bit descriptors
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; generic descriptor
			;------------------------------------------------------

struc			MEM_DESC64
			.1ST:			resd 1
			.2ND:			resd 1
			.3RD:			resd 1
			.4TH:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC64,		16

			;------------------------------------------------------
			; LDT (system segment) descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_LDT64
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1
			.BAS_31_24:		resb 1
			.BAS_63_32:		resd 1
						resb 1
			.TYPE64:		resb 1		; xxx00000b
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_LDT64,	MEM_DESC64_size

			;------------------------------------------------------
			; TSS (system segment) descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_TSS64
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1		; D=1 is required
			.BAS_31_24:		resb 1
			.BAS_63_32:		resd 1
						resb 1
			.TYPE64:		resb 1		; xxx00000b
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_TSS64,	MEM_DESC64_size

			;------------------------------------------------------
			; call gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_CALL64
			.OFF_15_0:		resw 1
			.SEL:			resw 1
						resb 1		; there is no PARAMETERCOUNT field
			.AR_LOW:		resb 1		; D=1 is required
			.OFF_31_16:		resw 1
			.OFF_63_32:		resd 1
						resb 1
			.TYPE64:		resb 1		; xxx00000b
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_CALL64,	MEM_DESC64_size

			;------------------------------------------------------
			; interrupt gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_INT64
			.OFF_15_0:		resw 1
			.SEL:			resw 1
			.IST_INDEX:		resb 1		; 00000xxxb
			.AR_LOW:		resb 1		; D=1 is required
			.OFF_31_16:		resw 1
			.OFF_63_32:		resd 1
						resb 1
						resb 1		; there is no TYPE64 field since the IDT and IDT64 should be separate
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_INT64,	MEM_DESC64_size

			;------------------------------------------------------
			; trap gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_TRAP64
			.OFF_15_0:		resw 1
			.SEL:			resw 1
			.IST_INDEX:		resb 1		; 00000xxxb
			.AR_LOW:		resb 1		; D=1 is required
			.OFF_31_16:		resw 1
			.OFF_63_32:		resd 1
						resb 1
						resb 1		; there is no TYPE64 field since the IDT and IDT64 should be separate
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_TRAP64,	MEM_DESC64_size

;------------------------------------------------------------------------------
;	64 bit access rights
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; code (application) segment descriptor
			;------------------------------------------------------

%define			AR_SEG_CODE_L		13

%define			MASK_AR_SEG_CODE_L	(1 << AR_SEG_CODE_L)

;------------------------------------------------------------------------------
;	IST indices
;------------------------------------------------------------------------------

%define			IST_DISABLED		0		; don't use IST
%define			IST_1			1
%define			IST_2			2
%define			IST_3			3
%define			IST_4			4
%define			IST_5			5
%define			IST_6			6
%define			IST_7			7

;------------------------------------------------------------------------------
;	macro for creating a 64 bit descriptor
;------------------------------------------------------------------------------

%macro			make_c_desc64 3-8 0,0,0,0,0	; table, name, type                                     ; if type=AVL
							; table, name, type, dword1, dword2, dword3, dword4     ; if type=CUSTOM
							; table, name, type, subtype, bas64, lim, ar, leave_G   ; if type=SEG (*) and subtype=LDT/TSS
							; table, name, type, subtype, sel, off64, ar            ; if type=GATE and subtype=CALL
							; table, name, type, subtype, sel, off64, ar, ist_index ; if type=GATE and subtype=INT/TRAP
							;
							; (*) By default ar.G is forced to 1 if lim needs more than 20 bits. This
							;     may not always be desired; hence it can be disabled by specifying a
							;     value (other than 0) for the 8th macro parameter.

			%ifidn %1,GDT
			 %ifndef defined_GDT
			  %error there is no GDT
			 %endif
			%elifidn %1,LDT
			 %ifndef defined_LDT
			  %error there is no LDT
			 %endif
			%elifidn %1,IDT64
			 %ifndef defined_IDT64
			  %error there is no IDT64
			 %endif
			%else
			 %error the descriptor table must be GDT, LDT, or IDT64
			%endif

			%ifidni %3,SEG
			 %if (%6) > ((1 << 20) - 1)
			  %if ((%6) & MAX_PAGE) <> MAX_PAGE
			   %error since this segment limit requires G=1, the lowest BITS_PAGE bits must be 1
			  %endif
			  %assign temp1 ((%6) >> BITS_PAGE)
			  %ifidni %8,0
			   %assign temp2 ((%7) | MASK_AR_SEG_G)
			  %else
			   %assign temp2 (%7)
			  %endif
			 %else
			  %assign temp1 (%6)
			  %assign temp2 (%7)
			 %endif
			%endif

			%ifidni %3,GATE
			 %ifidni %4,CALL
			  %if (%8) <> 0
			   %error the 64 bit call gate descriptor does not include a parameter count field
			  %endif
			 %endif
			%endif

			%ifidni %3,GATE
			 %ifidni %4,INT
			  %if (%8) < 0
			   %error the 64 bit interrupt gate descriptor IST index must be positive
			  %endif
			  %if (%8) > 7
			   %error the 64 bit interrupt gate descriptor IST index must not be greater than 7
			  %endif
			 %endif
			%endif

			%ifidni %3,GATE
			 %ifidni %4,TRAP
			  %if (%8) < 0
			   %error the 64 bit trap gate descriptor IST index must be positive
			  %endif
			  %if (%8) > 7
			   %error the 64 bit trap gate descriptor IST index must not be greater than 7
			  %endif
			 %endif
			%endif

 %ifidn %1,GDT
  %ifndef defined_SEL_%1_%2
   %define defined_SEL_%1_%2 BOOL_TRUE
   SEL_%1_%2		equ	($ - %1)
  %endif
 %endif

 %ifidn %1,LDT
  %ifndef defined_SEL_%1_%2
   %define defined_SEL_%1_%2 BOOL_TRUE
   SEL_%1_%2		equ	(($ - %1) | MASK_SEL_TI)
  %endif
 %endif

 %ifndef defined_DESC_%1_%2
  %define defined_DESC_%1_%2 BOOL_TRUE
  DESC_%1_%2:
 %endif

			%ifidni %3,AVL
			 times MEM_DESC64_size db ALL_BITS_CLEAR
			%elifidni %3,CUSTOM
			 istruc MEM_DESC64
			  at MEM_DESC64.1ST,			dd (%4)
			  at MEM_DESC64.2ND,			dd (%5)
			  at MEM_DESC64.3RD,			dd (%6)
			  at MEM_DESC64.4TH,			dd (%7)
			 iend
			%elifidni %3,SEG
			 %ifidni %4,LDT
			  %ifnidn %1,GDT
			   %error 64 bit LDT segment descriptors can only reside in the GDT
			  %endif
			  istruc MEM_DESC_SEG_LDT64
			   at MEM_DESC_SEG_LDT64.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_LDT64.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_LDT64.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_LDT64.AR,		dw (((((((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh)) | MASK_AR_SEG_LDT_P) & (~ MASK_AR_SEG_LDT_S)) & (~ MASK_AR_SEG_LDT_GATE)) | MASK_AR_SEG_LDT_TYPE)
			   at MEM_DESC_SEG_LDT64.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			   at MEM_DESC_SEG_LDT64.BAS_63_32,	dd (((%5) >> 32) & MAX_DWORD)
			   at MEM_DESC_SEG_LDT64.TYPE64,	db 00000b
			  iend
			 %elifidni %4,TSS
			  %ifnidn %1,GDT
			   %error 64 bit TSS segment descriptors can only reside in the GDT
			  %endif
			  istruc MEM_DESC_SEG_TSS64
			   at MEM_DESC_SEG_TSS64.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_TSS64.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_TSS64.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_TSS64.AR,		dw ((((((((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh)) | MASK_AR_SEG_TSS_P) & (~ MASK_AR_SEG_TSS_S)) | MASK_AR_SEG_TSS_D) & (~ MASK_AR_SEG_TSS_GATE)) | MASK_AR_SEG_TSS_TYPE)
			   at MEM_DESC_SEG_TSS64.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			   at MEM_DESC_SEG_TSS64.BAS_63_32,	dd (((%5) >> 32) & MAX_DWORD)
			   at MEM_DESC_SEG_TSS64.TYPE64,	db 00000b
			  iend
			 %else
			  %error the 64 bit segment descriptor subtype must be LDT or TSS
			 %endif
			%elifidni %3,GATE
			 %ifidni %4,CALL
			  %ifidn %1,IDT64
			   %error 64 bit call gate descriptors can't reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_CALL64
			   at MEM_DESC_GATE_CALL64.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_CALL64.SEL,		dw (%5)
			   at MEM_DESC_GATE_CALL64.AR_LOW,	db ((((((%7) | MASK_AR_GATE_CALL_P) & (~ MASK_AR_GATE_CALL_S)) | MASK_AR_GATE_CALL_D) | MASK_AR_GATE_CALL_GATE) | MASK_AR_GATE_CALL_TYPE)
			   at MEM_DESC_GATE_CALL64.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			   at MEM_DESC_GATE_CALL64.OFF_63_32,	dw (((%6) >> 32) & MAX_DWORD)
			   at MEM_DESC_GATE_CALL64.TYPE64,	db 00000b
			  iend
			 %elifidni %4,INT
			  %ifnidn %1,IDT64
			   %error 64 bit interrupt gate descriptors can only reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_INT64
			   at MEM_DESC_GATE_INT64.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_INT64.SEL,		dw (%5)
			   at MEM_DESC_GATE_INT64.IST_INDEX,	db (%8)
			   at MEM_DESC_GATE_INT64.AR_LOW,	db ((((((%7) | MASK_AR_GATE_INT_P) & (~ MASK_AR_GATE_INT_S)) | MASK_AR_GATE_INT_D) | MASK_AR_GATE_INT_GATE) | MASK_AR_GATE_INT_TYPE)
			   at MEM_DESC_GATE_INT64.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			   at MEM_DESC_GATE_INT64.OFF_63_32,	dw (((%6) >> 32) & MAX_DWORD)
			  iend
			 %elifidni %4,TRAP
			  %ifnidn %1,IDT64
			   %error 64 bit trap gate descriptors can only reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_TRAP64
			   at MEM_DESC_GATE_TRAP64.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_TRAP64.SEL,		dw (%5)
			   at MEM_DESC_GATE_TRAP64.IST_INDEX,	db (%8)
			   at MEM_DESC_GATE_TRAP64.AR_LOW,	db ((((((%7) | MASK_AR_GATE_TRAP_P) & (~ MASK_AR_GATE_TRAP_S)) | MASK_AR_GATE_TRAP_D) | MASK_AR_GATE_TRAP_GATE) | MASK_AR_GATE_TRAP_TYPE)
			   at MEM_DESC_GATE_TRAP64.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			   at MEM_DESC_GATE_TRAP64.OFF_63_32,	dw (((%6) >> 32) & MAX_DWORD)
			  iend
			 %else
			  %error the 64 bit gate descriptor subtype must be CALL, INT, or TRAP
			 %endif
			%else
			 %error the 64 bit descriptor type must be AVL, CUSTOM, SEG, or GATE
			%endif

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
