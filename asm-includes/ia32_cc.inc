; $Id: //depot/external/ia32_cc.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_CC

%define 		INCLUDED_IA32_CC	BOOL_TRUE

;------------------------------------------------------------------------------
;	condition codes
;------------------------------------------------------------------------------

%define			CC_NLE			1111b		; signed: not less than or equal to
%define			 CC_G			CC_NLE		; signed: greater than
%define			CC_LE			1110b		; signed: less than or equal to
%define			 CC_NG			CC_LE		; signed: not greater than
%define			CC_NL			1101b		; signed: not less than
%define			 CC_GE			CC_NL		; signed: greater than or equal to
%define			CC_L			1100b		; signed: less than
%define			 CC_NGE			CC_L		; signed: not greater than or equal to
%define			CC_NP			1011b		; signed: not parity
%define			 CC_PO			CC_NP		; signed: parity odd
%define			CC_P			1010b		; signed: parity
%define			 CC_PE			CC_P		; signed: parity even
%define			CC_NS			1001b		; not sign
%define			CC_S			1000b		; sign

%define			CC_NBE			0111b		; unsigned: not below or equal
%define			 CC_A			CC_NBE		; unsigned: above
%define			CC_BE			0110b		; unsigned: below or equal
%define			 CC_NA			CC_BE		; unsigned: not above
%define			CC_NE			0101b		; unsigned: not equal
%define			 CC_NZ			CC_NE		; unsigned: not zero
%define			CC_E			0100b		; unsigned: equal
%define			 CC_Z			CC_E		; unsigned: zero
%define			CC_NB			0011b		; unsigned: not below
%define			 CC_NC			CC_NB		; unsigned: not carry
%define			 CC_AE			CC_NB		; unsigned: above or equal
%define			CC_B			0010b		; unsigned: below
%define			 CC_C			CC_B		; unsigned: carry
%define			 CC_NAE			CC_B		; unsigned: not above or equal
%define			CC_NO			0001b		; no overflow
%define			CC_O			0000b		; overflow

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
