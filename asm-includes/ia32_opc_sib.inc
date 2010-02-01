; $Id: //depot/external/ia32_opc_sib.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_SIB

%define 		INCLUDED_IA32_OPC_SIB	BOOL_TRUE

;------------------------------------------------------------------------------
;	SIB byte fields
;------------------------------------------------------------------------------

%define			SIB_SCALE		6
%define			SIB_INDEX		3
%define			SIB_BASE		0

%define			MASK_SIB_SCALE		(((1 << 2) - 1) << SIB_SCALE)
%define			MASK_SIB_INDEX		(((1 << 3) - 1) << SIB_INDEX)
%define			MASK_SIB_BASE		(((1 << 3) - 1) << SIB_BASE)

;------------------------------------------------------------------------------
;	SIB byte base field values
;------------------------------------------------------------------------------

%define			SIB_BASE_EAX		0
%define			SIB_BASE_ECX		1
%define			SIB_BASE_EDX		2
%define			SIB_BASE_EBX		3
%define			SIB_BASE_ESP		4
%define			SIB_BASE_DISP32		5		; if mod=00
%define			 SIB_BASE_EBP_DISP8	SIB_BASE_DISP32	; if mod=01
%define			 SIB_BASE_EBP_DISP32	SIB_BASE_DISP32	; if mod=10
%define			SIB_BASE_ESI		6
%define			SIB_BASE_EDI		7

;------------------------------------------------------------------------------
;	SIB byte index field values
;------------------------------------------------------------------------------

%define			SIB_INDEX_EAX		0
%define			SIB_INDEX_ECX		1
%define			SIB_INDEX_EDX		2
%define			SIB_INDEX_EBX		3
%define			SIB_INDEX_NONE		4
%define			SIB_INDEX_EBP		5
%define			SIB_INDEX_ESI		6
%define			SIB_INDEX_EDI		7

;------------------------------------------------------------------------------
;	SIB byte scale field values
;------------------------------------------------------------------------------

%define			SIB_SCALE_0		0
%define			SIB_SCALE_2		1
%define			SIB_SCALE_4		2
%define			SIB_SCALE_8		3

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
