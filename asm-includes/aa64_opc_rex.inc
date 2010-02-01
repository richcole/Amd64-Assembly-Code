; $Id: //depot/external/aa64_opc_rex.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_OPC_REX

%define 		INCLUDED_AA64_OPC_REX	BOOL_TRUE

;------------------------------------------------------------------------------
;	REX byte fields
;------------------------------------------------------------------------------

%define			REX_W			3
%define			REX_R			2
%define			REX_X			1
%define			REX_B			0

%define			MASK_REX_W		(1 << REX_W)
%define			MASK_REX_R		(1 << REX_R)
%define			MASK_REX_X		(1 << REX_X)
%define			MASK_REX_B		(1 << REX_B)

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
