; $Id: //depot/external/aa64_tr.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_TR

%define 		INCLUDED_AA64_TR	BOOL_TRUE

;------------------------------------------------------------------------------
;	table registers
;------------------------------------------------------------------------------

struc			MEM_GDTR64
			.LIM:			resw 1
			.BAS:			resq 1
endstruc
CHECK_C_STRUC_SIZE	MEM_GDTR64,		10

struc			MEM_IDTR64
			.LIM:			resw 1
			.BAS:			resq 1
endstruc
CHECK_C_STRUC_SIZE	MEM_IDTR64,		10

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
