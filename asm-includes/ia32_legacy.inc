; $Id: //depot/external/ia32_legacy.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_LEGACY

%define 		INCLUDED_IA32_LEGACY	BOOL_TRUE

;------------------------------------------------------------------------------
;	legacy stuff
;------------------------------------------------------------------------------

%define			LEGACY_A20M		20
%define			MASK_LEGACY_A20M	(1 << LEGACY_A20M)

%define			LEGACY_IGNNE_PORT	00F0h		; port for asserting IGNNE#
%define			LEGACY_IGNNE_ASSERT	00h		; assert IGNNE# if FERR# is asserted

%define			EXCEPT_FPU		75h		; FERR# causing IRQ13 (in DOS)

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
