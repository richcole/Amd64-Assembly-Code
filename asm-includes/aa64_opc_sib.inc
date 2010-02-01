; $Id: //depot/external/aa64_opc_sib.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_OPC_SIB

%define 		INCLUDED_AA64_OPC_SIB	BOOL_TRUE

;------------------------------------------------------------------------------
;	SIB byte base field values
;------------------------------------------------------------------------------

%define			SIB_BASE_R8		8
%define			SIB_BASE_R9		9
%define			SIB_BASE_R10		10
%define			SIB_BASE_R11		11
%define			SIB_BASE_R12		12
%define			SIB_BASE_R13		13
%define			SIB_BASE_R14		14
%define			SIB_BASE_R15		15

;------------------------------------------------------------------------------
;	SIB byte index field values
;------------------------------------------------------------------------------

%define			SIB_INDEX_R8		8
%define			SIB_INDEX_R9		9
%define			SIB_INDEX_R10		10
%define			SIB_INDEX_R11		11
%define			SIB_INDEX_R12		12
%define			SIB_INDEX_R13		13
%define			SIB_INDEX_R14		14
%define			SIB_INDEX_R15		15

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
