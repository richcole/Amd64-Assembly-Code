; $Id: //depot/external/aa64_bits.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_BITS

%define 		INCLUDED_AA64_BITS	BOOL_TRUE

;------------------------------------------------------------------------------
;	address bits
;------------------------------------------------------------------------------

%define			BITS_AA64_PHYSICAL	40
%define			BITS_AA64_VIRTUAL	48

;------------------------------------------------------------------------------
;	canonical and non-canonical region boundaries
;------------------------------------------------------------------------------

%define			NON_CANONICAL_FIRST	(1 << (BITS_AA64_VIRTUAL - 1))
%define			CANONICAL_FIRST		(ALL_BITS_SET << (BITS_AA64_VIRTUAL - 1))

%define			NON_CANONICAL_LAST	(CANONICAL_FIRST - 1)
%define			CANONICAL_LAST		(NON_CANONICAL_FIRST - 1)

;------------------------------------------------------------------------------
;	macros for checking whether a virtual address is canonical
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; ...during compile-time
			;------------------------------------------------------

%macro			CHECK_C_CANONICAL 2	; address, result

			%if ((%1) >> (BITS_AA64_VIRTUAL - 1)) = 0
			 %define %2 BOOL_TRUE
			%elif ((%1) >> (BITS_AA64_VIRTUAL - 1)) = ((1 << (BITS_QWORD - BITS_AA64_VIRTUAL + 1)) - 1)
			 %define %2 BOOL_TRUE
			%else
			 %define %2 BOOL_FALSE
			%endif

%endmacro

			;------------------------------------------------------
			; ...during run-time
			;------------------------------------------------------

%macro			CHECK_R_CANONICAL 1	; address

			push	rax
			mov	rax,(%1)
			shr	rax,(BITS_AA64_VIRTUAL - 1)
			cmp	rax,0
			je	short %%pass
			cmp	rax,((1 << (BITS_QWORD - BITS_AA64_VIRTUAL + 1)) - 1)
			je	short %%pass
			stc
			jmp	short %%done
%%pass:			clc
%%done:			pop	rax		; FLAGS.CF = 0 if canonical

%endmacro

;------------------------------------------------------------------------------
;	macros for checking whether a virtual address is non-canonical
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; ...during compile-time
			;------------------------------------------------------

%macro			CHECK_C_NON_CANONICAL 2	; address, result

			%if ((%1) >> (BITS_AA64_VIRTUAL - 1)) = 0
			 %define %2 BOOL_FALSE
			%elif ((%1) >> (BITS_AA64_VIRTUAL - 1)) = ((1 << (BITS_QWORD - BITS_AA64_VIRTUAL + 1)) - 1)
			 %define %2 BOOL_FALSE
			%else
			 %define %2 BOOL_TRUE
			%endif

%endmacro

			;------------------------------------------------------
			; ...during run-time
			;------------------------------------------------------

%macro			CHECK_R_NON_CANONICAL 1	; address

			push	rax
			mov	rax,(%1)
			shr	rax,(BITS_AA64_VIRTUAL - 1)
			cmp	rax,0
			je	short %%fail
			cmp	rax,((1 << (BITS_QWORD - BITS_AA64_VIRTUAL + 1)) - 1)
			je	short %%fail
			mov	clc
			jmp	short %%done
%%fail:			mov	stc
%%done:			pop	rax		; FLAGS.CF = 0 if non-canonical

%endmacro

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
