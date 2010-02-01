; $Id: //depot/external/aa64_crx.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_CRx

%define 		INCLUDED_AA64_CRx	BOOL_TRUE

;------------------------------------------------------------------------------
;	64 bit CR3
;------------------------------------------------------------------------------

%define			BITS_CR3_AVL64		12

%define			CR3_AVL64		(BITS_QWORD - BITS_CR3_AVL64)

%if BITS_AA64_PHYSICAL > CR3_AVL64
 %error due to the AVL64 bits CR3 can't hold that many base address bits
%endif

%define			CR3_BAS_PML4		12

%define			MASK_CR3_AVL64		(((1 << BITS_CR3_AVL64) - 1) << CR3_AVL64)
%define			MASK_CR3_BAS_PML4	(((1 << (BITS_AA64_PHYSICAL - CR3_BAS_PML4)) - 1) << CR3_BAS_PML4)

;------------------------------------------------------------------------------
;	CR8
;------------------------------------------------------------------------------

%define			MIN_TPR			0000b
%define			MAX_TPR			1111b

%define			CR8_TPR			0

%define			MASK_CR9_TPR		(MAX_TPR << CR8_TPR)

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
