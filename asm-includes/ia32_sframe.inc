; $Id: //depot/external/ia32_sframe.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_SFRAME

%define 		INCLUDED_IA32_SFRAME	BOOL_TRUE

;------------------------------------------------------------------------------
;	PUSHA and POPA stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_PUSHA
			.DI:			resw 1
			.SI:			resw 1
			.BP:			resw 1
			.SP:			resw 1		; ignored on POPA
			.BX:			resw 1
			.DX:			resw 1
			.CX:			resw 1
			.AX:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_PUSHA,	16

struc			MEM_SFRAME_POPA
			.DI:			resw 1
			.SI:			resw 1
			.BP:			resw 1
			.SP:			resw 1		; ignored
			.BX:			resw 1
			.DX:			resw 1
			.CX:			resw 1
			.AX:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_POPA,	16

;------------------------------------------------------------------------------
;	PUSHAD and POPAD stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_PUSHAD
			.EDI:			resd 1
			.ESI:			resd 1
			.EBP:			resd 1
			.ESP:			resd 1		; ignored on POPAD
			.EBX:			resd 1
			.EDX:			resd 1
			.ECX:			resd 1
			.EAX:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_PUSHAD,	32

struc			MEM_SFRAME_POPAD
			.EDI:			resd 1
			.ESI:			resd 1
			.EBP:			resd 1
			.ESP:			resd 1		; ignored
			.EBX:			resd 1
			.EDX:			resd 1
			.ECX:			resd 1
			.EAX:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_POPAD,	32

;------------------------------------------------------------------------------
;	16 bit far transfer stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_16
			.IP:			resw 1
			.CS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_16,		4

;------------------------------------------------------------------------------
;	16 bit interrupt gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT16			; same CPL
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16,	6

struc			MEM_SFRAME_INT16_CPL			; different CPL
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16_CPL,	10

struc			MEM_SFRAME_INT16_VM			; virtual 8086 mode
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
			.ES:			resw 1
			.DS:			resw 1
			.FS:			resw 1
			.GS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16_VM,	18

;------------------------------------------------------------------------------
;	16 bit interrupt gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT16E			; same CPL
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16E,	8

struc			MEM_SFRAME_INT16E_CPL			; different CPL
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16E_CPL,	12

struc			MEM_SFRAME_INT16E_VM			; virtual 8086 mode
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
			.ES:			resw 1
			.DS:			resw 1
			.FS:			resw 1
			.GS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT16E_VM,	20

;------------------------------------------------------------------------------
;	32 bit far transfer stack frame
;------------------------------------------------------------------------------

struc			MEM_SFRAME_32
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_32,		8

;------------------------------------------------------------------------------
;	32 bit interrupt gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT32			; same CPL
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32,	12

struc			MEM_SFRAME_INT32_CPL			; different CPL
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32_CPL,	20

struc			MEM_SFRAME_INT32_VM			; virtual 8086 mode
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
			.ES:			resw 1
						resw 1
			.DS:			resw 1
						resw 1
			.FS:			resw 1
						resw 1
			.GS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32_VM,	36

;------------------------------------------------------------------------------
;	32 bit interrupt gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_INT32E			; same CPL
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32E,	16

struc			MEM_SFRAME_INT32E_CPL			; different CPL
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32E_CPL,	24

struc			MEM_SFRAME_INT32E_VM			; virtual 8086 mode
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
			.ES:			resw 1
						resw 1
			.DS:			resw 1
						resw 1
			.FS:			resw 1
						resw 1
			.GS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_INT32E_VM,	40

;------------------------------------------------------------------------------
;	16 bit trap gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP16			; same CPL
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16,	6

struc			MEM_SFRAME_TRAP16_CPL			; different CPL
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16_CPL,	10

struc			MEM_SFRAME_TRAP16_VM			; virtual 8086 mode
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
			.ES:			resw 1
			.DS:			resw 1
			.FS:			resw 1
			.GS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16_VM,	18

;------------------------------------------------------------------------------
;	16 bit trap gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP16E			; same CPL
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16E,	8

struc			MEM_SFRAME_TRAP16E_CPL			; different CPL
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16E_CPL,	12

struc			MEM_SFRAME_TRAP16E_VM			; virtual 8086 mode
			.ERROR:			resw 1
			.IP:			resw 1
			.CS:			resw 1
			.FLAGS:			resw 1
			.SP:			resw 1
			.SS:			resw 1
			.ES:			resw 1
			.DS:			resw 1
			.FS:			resw 1
			.GS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP16E_VM,	20

;------------------------------------------------------------------------------
;	32 bit trap gate stack frame without error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP32			; same CPL
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32,	12

struc			MEM_SFRAME_TRAP32_CPL			; different CPL
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32_CPL,	20

struc			MEM_SFRAME_TRAP32_VM			; virtual 8086 mode
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
			.ES:			resw 1
						resw 1
			.DS:			resw 1
						resw 1
			.FS:			resw 1
						resw 1
			.GS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32_VM,	36

;------------------------------------------------------------------------------
;	32 bit trap gate stack frame with error code
;------------------------------------------------------------------------------

struc			MEM_SFRAME_TRAP32E			; same CPL
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32E,	16

struc			MEM_SFRAME_TRAP32E_CPL			; different CPL
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32E_CPL,	24

struc			MEM_SFRAME_TRAP32E_VM			; virtual 8086 mode
			.ERROR:			resw 1
						resw 1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			.EFLAGS:		resd 1
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
			.ES:			resw 1
						resw 1
			.DS:			resw 1
						resw 1
			.FS:			resw 1
						resw 1
			.GS:			resw 1
						resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_SFRAME_TRAP32E_VM,	40

;------------------------------------------------------------------------------
;	macro for creating enumerated call gate parameter
;------------------------------------------------------------------------------

%macro			make_c_mem_sframe_call_enum_Pn 4	; name, num, type, value
			%1%2			%3 %4
%endmacro

;------------------------------------------------------------------------------
;	16 bit call gate stack frame with 0..31 parameters
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; macro for creating one 16 bit call gate stack frame
			;------------------------------------------------------

%macro			make_c_mem_sframe_call16_Pn 1		; par

			%if %1 < 0
			 %error call gates only support 0..31 parameters
			%endif

			%if %1 > 31
			 %error call gates only support up to 31 parameters
			%endif

 struc			MEM_SFRAME_CALL16_P%1
			.IP:			resw 1
			.CS:			resw 1
			%if %1 <> 0
			 %assign temp0 %1
			 %rep %1
			  make_c_mem_sframe_call_enum_Pn .PARAMETER,temp0,resw,1
			  %assign temp0 temp0+1
			 %endrep
			%endif
 endstruc
 CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL16_P%1,	4+(BYTES_WORD*%1)

 struc			MEM_SFRAME_CALL16_CPL_P%1
			.IP:			resw 1
			.CS:			resw 1
			%if %1 <> 0
			 %assign temp0 %1
			 %rep %1
			  make_c_mem_sframe_call_enum_Pn .PARAMETER,temp0,resw,1
			  %assign temp0 temp0+1
			 %endrep
			%endif
			.SP:			resw 1
			.SS:			resw 1
 endstruc
 CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL16_CPL_P%1,8+(BYTES_WORD*%1)

%endmacro

			;------------------------------------------------------
			; create all 32 possible 16 bit call gate stack frames
			;------------------------------------------------------

			%assign temp1 0
			%rep 32
			 make_c_mem_sframe_call16_Pn temp1
			 %assign temp1 temp1+1
			%endrep

;------------------------------------------------------------------------------
;	32 bit call gate stack frame with 0..31 parameters
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; macro for creating one 32 bit call gate stack frame
			;------------------------------------------------------

%macro			make_c_mem_sframe_call32_Pn 1		; par

			%if %1 < 0
			 %error call gates only support 0..31 parameters
			%endif

			%if %1 > 31
			 %error call gates only support up to 31 parameters
			%endif

 struc			MEM_SFRAME_CALL32_P%1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			%if %1 <> 0
			 %assign temp0 %1
			 %rep %1
			  make_c_mem_sframe_call_enum_Pn .PARAMETER,temp0,resd,1
			  %assign temp0 temp0+1
			 %endrep
			%endif
 endstruc
 CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL32_P%1,	8+(BYTES_DWORD*%1)

 struc			MEM_SFRAME_CALL32_CPL_P%1
			.EIP:			resd 1
			.CS:			resw 1
						resw 1
			%if %1 <> 0
			 %assign temp0 %1
			 %rep %1
			  make_c_mem_sframe_call_enum_Pn .PARAMETER,temp0,resd,1
			  %assign temp0 temp0+1
			 %endrep
			%endif
			.ESP:			resd 1
			.SS:			resw 1
						resw 1
 endstruc
 CHECK_C_STRUC_SIZE	MEM_SFRAME_CALL32_CPL_P%1,16+(BYTES_DWORD*%1)

%endmacro

			;------------------------------------------------------
			; create all 32 possible 32 bit call gate stack frames
			;------------------------------------------------------

			%assign temp1 0
			%rep 32
			 make_c_mem_sframe_call32_Pn temp1
			 %assign temp1 temp1+1
			%endrep

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
