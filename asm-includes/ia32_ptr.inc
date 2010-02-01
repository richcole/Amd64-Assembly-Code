; $Id: //depot/external/ia32_ptr.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_PTR

%define 		INCLUDED_IA32_PTR	BOOL_TRUE

;------------------------------------------------------------------------------
;	pointers
;------------------------------------------------------------------------------

struc			MEM_PTR_16_16
			.IP:			resw 1
			.CS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_PTR_16_16,		4

struc			MEM_PTR_16_32
			.EIP:			resd 1
			.CS:			resw 1
endstruc
CHECK_C_STRUC_SIZE	MEM_PTR_16_32,		6

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
