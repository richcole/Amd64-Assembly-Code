; $Id: //depot/external/ia32_mode.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_MODE

%define 		INCLUDED_IA32_MODE	BOOL_TRUE

;------------------------------------------------------------------------------
;	CPL
;------------------------------------------------------------------------------

%define			CPL_0			0
%define			CPL_1			1
%define			CPL_2			2
%define			CPL_3			3

;------------------------------------------------------------------------------
;	RPL
;------------------------------------------------------------------------------

%define			RPL_0			0
%define			RPL_1			1
%define			RPL_2			2
%define			RPL_3			3

;------------------------------------------------------------------------------
;	DPL
;------------------------------------------------------------------------------

%define			DPL_0			0
%define			DPL_1			1
%define			DPL_2			2
%define			DPL_3			3

;------------------------------------------------------------------------------
;	IOPL
;------------------------------------------------------------------------------

%define			IOPL_0			0
%define			IOPL_1			1
%define			IOPL_2			2
%define			IOPL_3			3

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