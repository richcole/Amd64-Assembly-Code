; $Id: //depot/external/aa64_msr.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_MSR

%define 		INCLUDED_AA64_MSR	BOOL_TRUE

;------------------------------------------------------------------------------
;	MSRs
;------------------------------------------------------------------------------

%define			MSR_LSTAR		0C0000082h
%define			MSR_CSTAR		0C0000083h

%define			MSR_FS_BAS		0C0000100h
%define			MSR_GS_BAS		0C0000101h

;------------------------------------------------------------------------------
;	EFER MSR bits
;------------------------------------------------------------------------------

%define			MSR_EFER_LMA		10
%define			MSR_EFER_LME		8

%define			MASK_MSR_EFER_LMA	(1 << MSR_EFER_LMA)
%define			MASK_MSR_EFER_LME	(1 << MSR_EFER_LME)

;------------------------------------------------------------------------------
;	internal stuff
;------------------------------------------------------------------------------

; SMBASE64		-> can be changed on RSM

; IO_RESTART_RIP	-> set by IN/OUT, resumed into RIP by RSM if SSM.IO_RESTART
; IO_RESTART_RCX	-> set by IN/OUT, resumed into RCX by RSM if SSM.IO_RESTART
; IO_RESTART_RSI	-> set by IN/OUT, resumed into RSI by RSM if SSM.IO_RESTART
; IO_RESTART_RDI	-> set by IN/OUT, resumed into RDI by RSM if SSM.IO_RESTART

;------------------------------------------------------------------------------
;	IA-32 definition overrides
;------------------------------------------------------------------------------

%define			MASK_MSR_MTRR_PHYS_BASE_n_BASE	(((1 << (BITS_AA64_PHYSICAL - MSR_MTRR_PHYS_BASE_n_BASE)) - 1) << MSR_MTRR_PHYS_BASE_n_BASE)

%define			MASK_MSR_MTRR_PHYS_MASK_n_MASK	(((1 << (BITS_AA64_PHYSICAL - MSR_MTRR_PHYS_MASK_n_MASK)) - 1) << MSR_MTRR_PHYS_MASK_n_MASK)

%define			MASK_MSR_MCn_ADDR_ADDR		(((1 << (BITS_AA64_PHYSICAL - MSR_MCn_ADDR_ADDR)) - 1) << MSR_MCn_ADDR_ADDR)

%define			MSR_APIC_BASE_BASE		(((1 << (BITS_AA64_PHYSICAL - MSR_APIC_BASE_BASE)) - 1) << MSR_APIC_BASE_BASE)

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
