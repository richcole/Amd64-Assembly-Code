; $Id: //depot/external/ia32_sel.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_SEL

%define 		INCLUDED_IA32_SEL	BOOL_TRUE

;------------------------------------------------------------------------------
;	selector
;------------------------------------------------------------------------------

%define			SEL_TI			2
%define			SEL_RPL			0

%define			SEL_RPL_3		RPL_3
%define			SEL_RPL_2		RPL_2
%define			SEL_RPL_1		RPL_1
%define			SEL_RPL_0		RPL_0

%define			MASK_SEL_TI		(1 << SEL_TI)
%define			MASK_SEL_RPL		(SEL_RPL_3 << SEL_RPL)

%define			MASK_SEL_RPL_3		(SEL_RPL_3 << SEL_RPL)
%define			MASK_SEL_RPL_2		(SEL_RPL_2 << SEL_RPL)
%define			MASK_SEL_RPL_1		(SEL_RPL_1 << SEL_RPL)
%define			MASK_SEL_RPL_0		(SEL_RPL_0 << SEL_RPL)

;------------------------------------------------------------------------------
;	selector error code
;------------------------------------------------------------------------------

%define			SEL_ERROR_TI		SEL_TI
%define			SEL_ERROR_IDT		1
%define			SEL_ERROR_EXT		0

%define			MASK_SEL_ERROR_TI	(1 << SEL_ERROR_TI)
%define			MASK_SEL_ERROR_IDT	(1 << SEL_ERROR_IDT)
%define			MASK_SEL_ERROR_EXT	(1 << SEL_ERROR_EXT)

;------------------------------------------------------------------------------
;	NULL selector
;------------------------------------------------------------------------------

%define			SEL_NULL		0000h

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
