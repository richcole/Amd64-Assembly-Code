; $Id: //depot/external/ia32_crx.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_CRx

%define 		INCLUDED_IA32_CRx	BOOL_TRUE

;------------------------------------------------------------------------------
;	MSW
;------------------------------------------------------------------------------

%define			MSW_NE			5
%define			MSW_ET			4
%define			MSW_TS			3
%define			MSW_EM			2
%define			MSW_MP			1
%define			MSW_PE			0

%define			MASK_MSW_NE		(1 << MSW_NE)
%define			MASK_MSW_ET		(1 << MSW_ET)
%define			MASK_MSW_TS		(1 << MSW_TS)
%define			MASK_MSW_EM		(1 << MSW_EM)
%define			MASK_MSW_MP		(1 << MSW_MP)
%define			MASK_MSW_PE		(1 << MSW_PE)

;------------------------------------------------------------------------------
;	CR0
;------------------------------------------------------------------------------

%define			CR0_PG			31
%define			CR0_CD			30
%define			CR0_NW			29
%define			CR0_AM			18
%define			CR0_WP			16
%define			CR0_NE			MSW_NE
%define			CR0_ET			MSW_ET
%define			CR0_TS			MSW_TS
%define			CR0_EM			MSW_EM
%define			CR0_MP			MSW_MP
%define			CR0_PE			MSW_PE

%define			MASK_CR0_PG		(1 << CR0_PG)
%define			MASK_CR0_CD		(1 << CR0_CD)
%define			MASK_CR0_NW		(1 << CR0_NW)
%define			MASK_CR0_AM		(1 << CR0_AM)
%define			MASK_CR0_WP		(1 << CR0_WP)
%define			MASK_CR0_NE		(1 << CR0_NE)
%define			MASK_CR0_ET		(1 << CR0_ET)
%define			MASK_CR0_TS		(1 << CR0_TS)
%define			MASK_CR0_EM		(1 << CR0_EM)
%define			MASK_CR0_MP		(1 << CR0_MP)
%define			MASK_CR0_PE		(1 << CR0_PE)

;------------------------------------------------------------------------------
;	CR3
;------------------------------------------------------------------------------

%define			CR3_BAS_PDPT		5
%define			CR3_BAS_PD		12
%define			CR3_PCD			4
%define			CR3_PWT			3

%define			MASK_CR3_BAS_PDPT	(((1 << (BITS_DWORD - CR3_BAS_PDPT)) - 1) << CR3_BAS_PDPT)
%define			MASK_CR3_BAS_PD		(((1 << (BITS_DWORD - CR3_BAS_PD)) - 1) << CR3_BAS_PD)
%define			MASK_CR3_PCD		(1 << CR3_PCD)
%define			MASK_CR3_PWT		(1 << CR3_PWT)

;------------------------------------------------------------------------------
;	CR4
;------------------------------------------------------------------------------

%define			CR4_OSXMMEXCPT		10
%define			CR4_OSFXSR		9
%define			CR4_PCE			8
%define			CR4_PGE			7
%define			CR4_MCE			6
%define			CR4_PAE			5
%define			CR4_PSE			4
%define			CR4_DE			3
%define			CR4_TSD			2
%define			CR4_PVI			1
%define			CR4_VME			0

%define			MASK_CR4_OSXMMEXCPT	(1 << CR4_OSXMMEXCPT)
%define			MASK_CR4_OSFXSR		(1 << CR4_OSFXSR)
%define			MASK_CR4_PCE		(1 << CR4_PCE)
%define			MASK_CR4_PGE		(1 << CR4_PGE)
%define			MASK_CR4_MCE		(1 << CR4_MCE)
%define			MASK_CR4_PAE		(1 << CR4_PAE)
%define			MASK_CR4_PSE		(1 << CR4_PSE)
%define			MASK_CR4_DE		(1 << CR4_DE)
%define			MASK_CR4_TSD		(1 << CR4_TSD)
%define			MASK_CR4_PVI		(1 << CR4_PVI)
%define			MASK_CR4_VME		(1 << CR4_VME)

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
