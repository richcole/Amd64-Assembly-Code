; $Id: //depot/external/ia32_tr.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_TR

%define 		INCLUDED_IA32_TR	BOOL_TRUE

;------------------------------------------------------------------------------
;	table registers
;------------------------------------------------------------------------------

struc			MEM_GDTR
			.LIM:			resw 1
			.BAS:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_GDTR,		6

struc			MEM_IDTR
			.LIM:			resw 1
			.BAS:			resd 1
endstruc
CHECK_C_STRUC_SIZE	MEM_IDTR,		6

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
