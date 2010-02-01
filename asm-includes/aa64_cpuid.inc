; $Id: //depot/external/aa64_cpuid.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_CPUID

%define 		INCLUDED_AA64_CPUID	BOOL_TRUE

;------------------------------------------------------------------------------
;	functions
;------------------------------------------------------------------------------

%define			CPUID_EXT_0008		(CPUID_EXT + 8)		; long mode address size information

;------------------------------------------------------------------------------
;	extended feature flags
;------------------------------------------------------------------------------

%define			CPUID_EXT_FF_LM		29

%define			MASK_CPUID_EXT_FF_LM	(1 << CPUID_EXT_FF_LM)

;------------------------------------------------------------------------------
;	long mode address size information
;------------------------------------------------------------------------------

%define			CPUID_EXT_BITS_PHYSICAL	0
%define			CPUID_EXT_BITS_VIRTUAL	8

%define			MASK_CPUID_EXT_BITS_PHYSICAL	(MAX_BYTE << CPUID_EXT_BITS_PHYSICAL)
%define			MASK_CPUID_EXT_BITS_VIRTUAL	(MAX_BYTE << CPUID_EXT_BITS_VIRTUAL)

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
