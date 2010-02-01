; $Id: //depot/external/ia32_desc.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_DESC

%define 		INCLUDED_IA32_DESC	BOOL_TRUE

;------------------------------------------------------------------------------
;	descriptors
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; generic descriptor
			;------------------------------------------------------

struc			MEM_DESC
			.1ST:			resd 1
			.2ND:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC,		8

			;------------------------------------------------------
			; code (application) segment descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_CODE
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1
			.BAS_31_24:		resb 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_CODE,	MEM_DESC_size

			;------------------------------------------------------
			; data (application) segment descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_DATA
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1
			.BAS_31_24:		resb 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_DATA,	MEM_DESC_size

			;------------------------------------------------------
			; LDT (system segment) descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_LDT
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1
			.BAS_31_24:		resb 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_LDT,	MEM_DESC_size

			;------------------------------------------------------
			; TSS (system segment) descriptor
			;------------------------------------------------------

struc			MEM_DESC_SEG_TSS
			.LIM_15_0:		resw 1
			.BAS_15_0:		resw 1
			.BAS_23_16:		resb 1
			.AR:			resw 1
			.BAS_31_24:		resb 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_SEG_TSS,	MEM_DESC_size

			;------------------------------------------------------
			; call gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_CALL
			.OFF_15_0:		resw 1
			.SEL:			resw 1
			.PARAMETERCOUNT:	resb 1
			.AR_LOW:		resb 1
			.OFF_31_16:		resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_CALL,	MEM_DESC_size

			;------------------------------------------------------
			; task gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_TASK
						resw 1
			.SEL:			resw 1
						resb 1
			.AR_LOW:		resb 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_TASK,	MEM_DESC_size

			;------------------------------------------------------
			; interrupt gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_INT
			.OFF_15_0:		resw 1
			.SEL:			resw 1
						resb 1
			.AR_LOW:		resb 1
			.OFF_31_16:		resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_INT,	MEM_DESC_size

			;------------------------------------------------------
			; trap gate descriptor
			;------------------------------------------------------

struc			MEM_DESC_GATE_TRAP
			.OFF_15_0:		resw 1
			.SEL:			resw 1
						resb 1
			.AR_LOW:		resb 1
			.OFF_31_16:		resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_DESC_GATE_TRAP,	MEM_DESC_size

;------------------------------------------------------------------------------
;	access rights
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; G bit
			;------------------------------------------------------

%define			AR_SEG_G		15

%define			MASK_AR_SEG_G		(1 << AR_SEG_G)

			;------------------------------------------------------
			; DPL values
			;------------------------------------------------------

%define			AR_DPL_3		DPL_3
%define			AR_DPL_2		DPL_2
%define			AR_DPL_1		DPL_1
%define			AR_DPL_0		DPL_0

			;------------------------------------------------------
			; code (application) segment descriptor
			;------------------------------------------------------

%define			AR_SEG_CODE_G		AR_SEG_G
%define			AR_SEG_CODE_D		14
%define			AR_SEG_CODE_AVL		12
%define			AR_SEG_CODE_LIM_19_16	8
%define			AR_SEG_CODE_P		7
%define			AR_SEG_CODE_DPL		5
%define			AR_SEG_CODE_S		4		; 1
%define			AR_SEG_CODE_X		3		; 1, is 0 after RESET/INIT/SMI#
%define			AR_SEG_CODE_C		2
%define			AR_SEG_CODE_R		1
%define			AR_SEG_CODE_A		0

%define			MASK_AR_SEG_CODE_G	MASK_AR_SEG_G
%define			MASK_AR_SEG_CODE_D	(1 << AR_SEG_CODE_D)
%define			MASK_AR_SEG_CODE_AVL	(1 << AR_SEG_CODE_AVL)
%define			MASK_AR_SEG_CODE_LIM_19_16 (MAX_NIBBLE << AR_SEG_CODE_LIM_19_16)
%define			MASK_AR_SEG_CODE_P	(1 << AR_SEG_CODE_P)
%define			MASK_AR_SEG_CODE_DPL	(AR_DPL_3 << AR_SEG_CODE_DPL)
%define			MASK_AR_SEG_CODE_S	(1 << AR_SEG_CODE_S)
%define			MASK_AR_SEG_CODE_X	(1 << AR_SEG_CODE_X)
%define			MASK_AR_SEG_CODE_C	(1 << AR_SEG_CODE_C)
%define			MASK_AR_SEG_CODE_R	(1 << AR_SEG_CODE_R)
%define			MASK_AR_SEG_CODE_A	(1 << AR_SEG_CODE_A)

			;------------------------------------------------------
			; data (application) segment descriptor
			;------------------------------------------------------

%define			AR_SEG_DATA_G		AR_SEG_G
%define			AR_SEG_DATA_B		14
%define			AR_SEG_DATA_AVL		12
%define			AR_SEG_DATA_LIM_19_16	8
%define			AR_SEG_DATA_P		7
%define			AR_SEG_DATA_DPL		5
%define			AR_SEG_DATA_S		4		; 1
%define			AR_SEG_DATA_X		3		; 0, can be set to 1 if W=1
%define			AR_SEG_DATA_E		2
%define			AR_SEG_DATA_W		1
%define			AR_SEG_DATA_A		0

%define			MASK_AR_SEG_DATA_G	MASK_AR_SEG_G
%define			MASK_AR_SEG_DATA_B	(1 << AR_SEG_DATA_B)
%define			MASK_AR_SEG_DATA_AVL	(1 << AR_SEG_DATA_AVL)
%define			MASK_AR_SEG_DATA_LIM_19_16 (MAX_NIBBLE << AR_SEG_DATA_LIM_19_16)
%define			MASK_AR_SEG_DATA_P	(1 << AR_SEG_DATA_P)
%define			MASK_AR_SEG_DATA_DPL	(AR_DPL_3 << AR_SEG_DATA_DPL)
%define			MASK_AR_SEG_DATA_S	(1 << AR_SEG_DATA_S)
%define			MASK_AR_SEG_DATA_X	(1 << AR_SEG_DATA_X)
%define			MASK_AR_SEG_DATA_E	(1 << AR_SEG_DATA_E)
%define			MASK_AR_SEG_DATA_W	(1 << AR_SEG_DATA_W)
%define			MASK_AR_SEG_DATA_A	(1 << AR_SEG_DATA_A)

			;------------------------------------------------------
			; system segment descriptor types
			;------------------------------------------------------

			;			00b		; reserved
%define			AR_TYPE_SEG_TSS		01b
%define			AR_TYPE_SEG_LDT		10b
			;			11b		; TSS with B=1

			;------------------------------------------------------
			; LDT (system segment) descriptor
			;------------------------------------------------------

%define			AR_SEG_LDT_G		AR_SEG_G
%define			AR_SEG_LDT_LIM_19_16	8
%define			AR_SEG_LDT_P		7
%define			AR_SEG_LDT_DPL		5
%define			AR_SEG_LDT_S		4		; 0
			;			3		; has no D bit
%define			AR_SEG_LDT_GATE		2		; 0
%define			AR_SEG_LDT_TYPE		0

%define			MASK_AR_SEG_LDT_G	MASK_AR_SEG_G
%define			MASK_AR_SEG_LDT_LIM_19_16 (MAX_NIBBLE << AR_SEG_LDT_LIM_19_16)
%define			MASK_AR_SEG_LDT_P	(1 << AR_SEG_LDT_P)
%define			MASK_AR_SEG_LDT_DPL	(AR_DPL_3 << AR_SEG_LDT_DPL)
%define			MASK_AR_SEG_LDT_S	(1 << AR_SEG_LDT_S)
%define			MASK_AR_SEG_LDT_GATE	(1 << AR_SEG_LDT_GATE)
%define			MASK_AR_SEG_LDT_TYPE	(AR_TYPE_SEG_LDT << AR_SEG_LDT_TYPE)

			;------------------------------------------------------
			; TSS (system segment) descriptor
			;------------------------------------------------------

%define			AR_SEG_TSS_G		AR_SEG_G
%define			AR_SEG_TSS_LIM_19_16	8
%define			AR_SEG_TSS_P		7
%define			AR_SEG_TSS_DPL		5
%define			AR_SEG_TSS_S		4		; 0
%define			AR_SEG_TSS_D		3
%define			AR_SEG_TSS_GATE		2		; 0
%define			AR_SEG_TSS_B		1
%define			AR_SEG_TSS_TYPE		0		; bit 0 is 0 after RESET/INIT

%define			MASK_AR_SEG_TSS_G	MASK_AR_SEG_G
%define			MASK_AR_SEG_TSS_LIM_19_16 (MAX_NIBBLE << AR_SEG_TSS_LIM_19_16)
%define			MASK_AR_SEG_TSS_P	(1 << AR_SEG_TSS_P)
%define			MASK_AR_SEG_TSS_DPL	(AR_DPL_3 << AR_SEG_TSS_DPL)
%define			MASK_AR_SEG_TSS_S	(1 << AR_SEG_TSS_S)
%define			MASK_AR_SEG_TSS_D	(1 << AR_SEG_TSS_D)
%define			MASK_AR_SEG_TSS_GATE	(1 << AR_SEG_TSS_GATE)
%define			MASK_AR_SEG_TSS_B	(1 << AR_SEG_TSS_B)
%define			MASK_AR_SEG_TSS_TYPE	(AR_TYPE_SEG_TSS << AR_SEG_TSS_TYPE)

			;------------------------------------------------------
			; gate descriptor types
			;------------------------------------------------------

%define			AR_TYPE_GATE_CALL	00b
%define			AR_TYPE_GATE_TASK	01b
%define			AR_TYPE_GATE_INT	10b
%define			AR_TYPE_GATE_TRAP	11b

			;------------------------------------------------------
			; call gate descriptor
			;------------------------------------------------------

%define			AR_GATE_CALL_P		7
%define			AR_GATE_CALL_DPL	5
%define			AR_GATE_CALL_S		4		; 0
%define			AR_GATE_CALL_D		3
%define			AR_GATE_CALL_GATE	2		; 1
%define			AR_GATE_CALL_TYPE	0

%define			MASK_AR_GATE_CALL_P	(1 << AR_GATE_CALL_P)
%define			MASK_AR_GATE_CALL_DPL	(AR_DPL_3 << AR_GATE_CALL_DPL)
%define			MASK_AR_GATE_CALL_S	(1 << AR_GATE_CALL_S)
%define			MASK_AR_GATE_CALL_D	(1 << AR_GATE_CALL_D)
%define			MASK_AR_GATE_CALL_GATE	(1 << AR_GATE_CALL_GATE)
%define			MASK_AR_GATE_CALL_TYPE	(AR_TYPE_GATE_CALL << AR_GATE_CALL_TYPE)

			;------------------------------------------------------
			; task gate descriptor
			;------------------------------------------------------

%define			AR_GATE_TASK_P		7
%define			AR_GATE_TASK_DPL	5
%define			AR_GATE_TASK_S		4		; 0
			;			3		; has no D bit
%define			AR_GATE_TASK_GATE	2		; 1
%define			AR_GATE_TASK_TYPE	0

%define			MASK_AR_GATE_TASK_P	(1 << AR_GATE_TASK_P)
%define			MASK_AR_GATE_TASK_DPL	(AR_DPL_3 << AR_GATE_TASK_DPL)
%define			MASK_AR_GATE_TASK_S	(1 << AR_GATE_TASK_S)
%define			MASK_AR_GATE_TASK_GATE	(1 << AR_GATE_TASK_GATE)
%define			MASK_AR_GATE_TASK_TYPE	(AR_TYPE_GATE_TASK << AR_GATE_TASK_TYPE)

			;------------------------------------------------------
			; interrupt gate descriptor
			;------------------------------------------------------

%define			AR_GATE_INT_P		7
%define			AR_GATE_INT_DPL		5
%define			AR_GATE_INT_S		4		; 0
%define			AR_GATE_INT_D		3
%define			AR_GATE_INT_GATE	2		; 1
%define			AR_GATE_INT_TYPE	0

%define			MASK_AR_GATE_INT_P	(1 << AR_GATE_INT_P)
%define			MASK_AR_GATE_INT_DPL	(AR_DPL_3 << AR_GATE_INT_DPL)
%define			MASK_AR_GATE_INT_S	(1 << AR_GATE_INT_S)
%define			MASK_AR_GATE_INT_D	(1 << AR_GATE_INT_D)
%define			MASK_AR_GATE_INT_GATE	(1 << AR_GATE_INT_GATE)
%define			MASK_AR_GATE_INT_TYPE	(AR_TYPE_GATE_INT << AR_GATE_INT_TYPE)

			;------------------------------------------------------
			; trap gate descriptor
			;------------------------------------------------------

%define			AR_GATE_TRAP_P		7
%define			AR_GATE_TRAP_DPL	5
%define			AR_GATE_TRAP_S		4		; 0
%define			AR_GATE_TRAP_D		3
%define			AR_GATE_TRAP_GATE	2		; 1
%define			AR_GATE_TRAP_TYPE	0

%define			MASK_AR_GATE_TRAP_P	(1 << AR_GATE_TRAP_P)
%define			MASK_AR_GATE_TRAP_DPL	(AR_DPL_3 << AR_GATE_TRAP_DPL)
%define			MASK_AR_GATE_TRAP_S	(1 << AR_GATE_TRAP_S)
%define			MASK_AR_GATE_TRAP_D	(1 << AR_GATE_TRAP_D)
%define			MASK_AR_GATE_TRAP_GATE	(1 << AR_GATE_TRAP_GATE)
%define			MASK_AR_GATE_TRAP_TYPE	(AR_TYPE_GATE_TRAP << AR_GATE_TRAP_TYPE)

;------------------------------------------------------------------------------
;	macro for creating a descriptor
;------------------------------------------------------------------------------

%macro			make_c_desc 3-8 0,0,0,0,0	; table, name, type                                 ; if type=AVL
							; table, name, type, dword1, dword2                 ; if type=CUSTOM
							; table, name, type, subtype, bas, lim, ar, leave_G ; if type=SEG (*) and subtype=CODE/DATA/LDT/TSS
							; table, name, type, subtype, sel, off, ar, par     ; if type=GATE and subtype=CALL
							; table, name, type, subtype, sel, ar               ; if type=GATE and subtype=TASK
							; table, name, type, subtype, sel, off, ar          ; if type=GATE and subtype=INT/TRAP
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
			%elifidn %1,IDT
			 %ifndef defined_IDT
			  %error there is no IDT
			 %endif
			%else
			 %error the descriptor table must be GDT, LDT, or IDT
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
			  %if (%8) < 0
			   %error the call gate descriptor parameter count must be positive
			  %endif
			  %if (%8) > 31
			   %error the call gate descriptor parameter count must not be greater than 31
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
			 times MEM_DESC_size db ALL_BITS_CLEAR
			%elifidni %3,CUSTOM
			 istruc MEM_DESC
			  at MEM_DESC.1ST,			dd (%4)
			  at MEM_DESC.2ND,			dd (%5)
			 iend
			%elifidni %3,SEG
			 %ifidni %4,CODE
			  %ifidn %1,IDT
			   %error code segment descriptors can't reside in the IDT
			  %endif
			  istruc MEM_DESC_SEG_CODE
			   at MEM_DESC_SEG_CODE.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_CODE.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_CODE.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_CODE.AR,		dw (((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh) | MASK_AR_SEG_CODE_P | MASK_AR_SEG_CODE_S | MASK_AR_SEG_CODE_X)
			   at MEM_DESC_SEG_CODE.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			  iend
			 %elifidni %4,DATA
			  %ifidn %1,IDT
			   %error data segment descriptors can't reside in the IDT
			  %endif
			  %if (temp2 & MASK_AR_SEG_DATA_X) = MASK_AR_SEG_DATA_X
			   %if (temp2 & MASK_AR_SEG_DATA_W) = 0
			    %error DS.ar.X=1 requires DS.ar.W=1
			   %endif
			  %endif
			  istruc MEM_DESC_SEG_DATA
			   at MEM_DESC_SEG_DATA.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_DATA.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_DATA.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_DATA.AR,		dw (((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh) | MASK_AR_SEG_DATA_P | MASK_AR_SEG_DATA_S) ; X=1 is okay if W=1
			   at MEM_DESC_SEG_DATA.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			  iend
			 %elifidni %4,LDT
			  %ifnidn %1,GDT
			   %error LDT segment descriptors can only reside in the GDT
			  %endif
			  istruc MEM_DESC_SEG_LDT
			   at MEM_DESC_SEG_LDT.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_LDT.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_LDT.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_LDT.AR,		dw (((((((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh)) | MASK_AR_SEG_LDT_P) & (~ MASK_AR_SEG_LDT_S)) & (~ MASK_AR_SEG_LDT_GATE)) | MASK_AR_SEG_LDT_TYPE)
			   at MEM_DESC_SEG_LDT.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			  iend
			 %elifidni %4,TSS
			  %ifnidn %1,GDT
			   %error TSS segment descriptors can only reside in the GDT
			  %endif
			  istruc MEM_DESC_SEG_TSS
			   at MEM_DESC_SEG_TSS.LIM_15_0,	dw (temp1 & MAX_WORD)
			   at MEM_DESC_SEG_TSS.BAS_15_0,	dw ((%5) & MAX_WORD)
			   at MEM_DESC_SEG_TSS.BAS_23_16,	db (((%5) >> 16) & MAX_BYTE)
			   at MEM_DESC_SEG_TSS.AR,		dw (((((((temp1 >> 8) & 0F00h) | (temp2 & 0F0FFh)) | MASK_AR_SEG_TSS_P) & (~ MASK_AR_SEG_TSS_S)) & (~ MASK_AR_SEG_TSS_GATE)) | MASK_AR_SEG_TSS_TYPE)
			   at MEM_DESC_SEG_TSS.BAS_31_24,	db (((%5) >> 24) & MAX_BYTE)
			  iend
			 %else
			  %error the segment descriptor subtype must be CODE, DATA, LDT, or TSS
			 %endif
			%elifidni %3,GATE
			 %ifidni %4,CALL
			  %ifidn %1,IDT
			   %error call gate descriptors can't reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_CALL
			   at MEM_DESC_GATE_CALL.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_CALL.SEL,		dw (%5)
			   at MEM_DESC_GATE_CALL.PARAMETERCOUNT,db (%8)
			   at MEM_DESC_GATE_CALL.AR_LOW,	db (((((%7) | MASK_AR_GATE_CALL_P) & (~ MASK_AR_GATE_CALL_S)) | MASK_AR_GATE_CALL_GATE) | MASK_AR_GATE_CALL_TYPE)
			   at MEM_DESC_GATE_CALL.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			  iend
			 %elifidni %4,TASK
			  istruc MEM_DESC_GATE_TASK
			   at MEM_DESC_GATE_TASK.SEL,		dw (%5)
			   at MEM_DESC_GATE_TASK.AR_LOW,	db (((((%6) | MASK_AR_GATE_TASK_P) & (~ MASK_AR_GATE_TASK_S)) | MASK_AR_GATE_TASK_GATE) | MASK_AR_GATE_TASK_TYPE)
			  iend
			 %elifidni %4,INT
			  %ifnidn %1,IDT
			   %error interrupt gate descriptors can only reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_INT
			   at MEM_DESC_GATE_INT.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_INT.SEL,		dw (%5)
			   at MEM_DESC_GATE_INT.AR_LOW,		db (((((%7) | MASK_AR_GATE_INT_P) & (~ MASK_AR_GATE_INT_S)) | MASK_AR_GATE_INT_GATE) | MASK_AR_GATE_INT_TYPE)
			   at MEM_DESC_GATE_INT.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			  iend
			 %elifidni %4,TRAP
			  %ifnidn %1,IDT
			   %error trap gate descriptors can only reside in the IDT
			  %endif
			  istruc MEM_DESC_GATE_TRAP
			   at MEM_DESC_GATE_TRAP.OFF_15_0,	dw ((%6) & MAX_WORD)
			   at MEM_DESC_GATE_TRAP.SEL,		dw (%5)
			   at MEM_DESC_GATE_TRAP.AR_LOW,	db (((((%7) | MASK_AR_GATE_TRAP_P) & (~ MASK_AR_GATE_TRAP_S)) | MASK_AR_GATE_TRAP_GATE) | MASK_AR_GATE_TRAP_TYPE)
			   at MEM_DESC_GATE_TRAP.OFF_31_16,	dw (((%6) >> 16) & MAX_WORD)
			  iend
			 %else
			  %error the gate descriptor subtype must be CALL, TASK, INT, or TRAP
			 %endif
			%else
			 %error the descriptor type must be AVL, CUSTOM, SEG, or GATE
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
