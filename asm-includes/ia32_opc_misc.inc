; $Id: //depot/external/ia32_opc_misc.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_MISC

%define 		INCLUDED_IA32_OPC_MISC	BOOL_TRUE

;------------------------------------------------------------------------------
;	SpeedStep opcodes
;------------------------------------------------------------------------------

%define			OPC_MISC_PAUSE		OPC_1_REP_PREFIX,OPC_1_NOP

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
