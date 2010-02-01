; $Id: //depot/external/ia32_cpuid.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_CPUID

%define 		INCLUDED_IA32_CPUID	BOOL_TRUE

;------------------------------------------------------------------------------
;	ranges
;------------------------------------------------------------------------------

%define			CPUID_STD		00000000h
%define			CPUID_EXT		80000000h

;------------------------------------------------------------------------------
;	functions
;------------------------------------------------------------------------------

%define			CPUID_STD_0000		(CPUID_STD + 0000h)	; maximum function and vendor ID string
%define			CPUID_STD_0001		(CPUID_STD + 0001h)	; processor type/family/model/stepping and feature flags
%define			CPUID_STD_0002		(CPUID_STD + 0002h)	; cache and TLB configuration descriptors
%define			CPUID_STD_0003		(CPUID_STD + 0003h)	; processor serial number (PSN)

%define			CPUID_EXT_0000		(CPUID_EXT + 0000h)	; maximum function and vendor ID string
%define			CPUID_EXT_0001		(CPUID_EXT + 0001h)	; processor type/family/model/stepping and feature flags
%define			CPUID_EXT_0002		(CPUID_EXT + 0002h)	; processor name string (1/3)
%define			CPUID_EXT_0003		(CPUID_EXT + 0003h)	; processor name string (2/3)
%define			CPUID_EXT_0004		(CPUID_EXT + 0004h)	; processor name string (3/3)
%define			CPUID_EXT_0005		(CPUID_EXT + 0005h)	; L1 cache and L1 TLB configuration descriptors
%define			CPUID_EXT_0006		(CPUID_EXT + 0006h)	; L2 cache and L2 TLB descriptors
%define			CPUID_EXT_0007		(CPUID_EXT + 0007h)	; enhanced power management information

;------------------------------------------------------------------------------
;	type/family/model/stepping
;------------------------------------------------------------------------------

%define			CPUID_FAMILY_EXT	20
%define			CPUID_TYPE_EXT		16
%define			CPUID_TYPE		12
%define			CPUID_FAMILY		8
%define			CPUID_MODEL		4
%define			CPUID_STEP		0

%define			MASK_CPUID_FAMILY_EXT	(MAX_BYTE << CPUID_FAMILY_EXT)
%define			MASK_CPUID_TYPE_EXT	(MAX_NIBBLE << CPUID_TYPE_EXT)
%define			MASK_CPUID_TYPE		(11b << CPUID_TYPE)
%define			MASK_CPUID_FAMILY	(MAX_NIBBLE << CPUID_FAMILY)
%define			MASK_CPUID_MODEL	(MAX_NIBBLE << CPUID_MODEL)
%define			MASK_CPUID_STEP		(MAX_NIBBLE << CPUID_STEP)

;------------------------------------------------------------------------------
;	standard feature flags
;------------------------------------------------------------------------------

%define			CPUID_STD_FF_FPU	0
%define			CPUID_STD_FF_VME	1
%define			CPUID_STD_FF_DE		2
%define			CPUID_STD_FF_PSE	3
%define			CPUID_STD_FF_TSC	4
%define			CPUID_STD_FF_MSR	5
%define			CPUID_STD_FF_PAE	6
%define			CPUID_STD_FF_MCE	7
%define			CPUID_STD_FF_CX8	8
%define			CPUID_STD_FF_APIC	9
%define			CPUID_STD_FF_RES10	10
%define			CPUID_STD_FF_SEP	11
%define			CPUID_STD_FF_MTRR	12
%define			CPUID_STD_FF_PGE	13
%define			CPUID_STD_FF_MCA	14
%define			CPUID_STD_FF_CMOV	15
%define			CPUID_STD_FF_PAT	16
%define			CPUID_STD_FF_PSE36	17
%define			CPUID_STD_FF_PSN	18
%define			CPUID_STD_FF_CLFL	19
%define			CPUID_STD_FF_RES20	20
%define			CPUID_STD_FF_DTES	21
%define			CPUID_STD_FF_ACPI	22
%define			CPUID_STD_FF_MMX	23
%define			CPUID_STD_FF_FXSR	24
%define			CPUID_STD_FF_SSE	25
%define			CPUID_STD_FF_SSE2	26
%define			CPUID_STD_FF_SSNP	27
%define			CPUID_STD_FF_RES28	28
%define			CPUID_STD_FF_ACC	29
%define			CPUID_STD_FF_IA64	30
%define			CPUID_STD_FF_RES31	31

%define			MASK_CPUID_STD_FF_FPU	(1 << CPUID_STD_FF_FPU)
%define			MASK_CPUID_STD_FF_VME	(1 << CPUID_STD_FF_VME)
%define			MASK_CPUID_STD_FF_DE	(1 << CPUID_STD_FF_DE)
%define			MASK_CPUID_STD_FF_PSE	(1 << CPUID_STD_FF_PSE)
%define			MASK_CPUID_STD_FF_TSC	(1 << CPUID_STD_FF_TSC)
%define			MASK_CPUID_STD_FF_MSR	(1 << CPUID_STD_FF_MSR)
%define			MASK_CPUID_STD_FF_PAE	(1 << CPUID_STD_FF_PAE)
%define			MASK_CPUID_STD_FF_MCE	(1 << CPUID_STD_FF_MCE)
%define			MASK_CPUID_STD_FF_CX8	(1 << CPUID_STD_FF_CX8)
%define			MASK_CPUID_STD_FF_APIC	(1 << CPUID_STD_FF_APIC)
%define			MASK_CPUID_STD_FF_RES10	(1 << CPUID_STD_FF_RES10)
%define			MASK_CPUID_STD_FF_SEP	(1 << CPUID_STD_FF_SEP)
%define			MASK_CPUID_STD_FF_MTRR	(1 << CPUID_STD_FF_MTRR)
%define			MASK_CPUID_STD_FF_PGE	(1 << CPUID_STD_FF_PGE)
%define			MASK_CPUID_STD_FF_MCA	(1 << CPUID_STD_FF_MCA)
%define			MASK_CPUID_STD_FF_CMOV	(1 << CPUID_STD_FF_CMOV)
%define			MASK_CPUID_STD_FF_PAT	(1 << CPUID_STD_FF_PAT)
%define			MASK_CPUID_STD_FF_PSE36	(1 << CPUID_STD_FF_PSE36)
%define			MASK_CPUID_STD_FF_PSN	(1 << CPUID_STD_FF_PSN)
%define			MASK_CPUID_STD_FF_CLFL	(1 << CPUID_STD_FF_CLFL)
%define			MASK_CPUID_STD_FF_RES20	(1 << CPUID_STD_FF_RES20)
%define			MASK_CPUID_STD_FF_DTES	(1 << CPUID_STD_FF_DTES)
%define			MASK_CPUID_STD_FF_ACPI	(1 << CPUID_STD_FF_ACPI)
%define			MASK_CPUID_STD_FF_MMX	(1 << CPUID_STD_FF_MMX)
%define			MASK_CPUID_STD_FF_FXSR	(1 << CPUID_STD_FF_FXSR)
%define			MASK_CPUID_STD_FF_SSE	(1 << CPUID_STD_FF_SSE)
%define			MASK_CPUID_STD_FF_SSE2	(1 << CPUID_STD_FF_SSE2)
%define			MASK_CPUID_STD_FF_SSNP	(1 << CPUID_STD_FF_SSNP)
%define			MASK_CPUID_STD_FF_RES28	(1 << CPUID_STD_FF_RES28)
%define			MASK_CPUID_STD_FF_ACC	(1 << CPUID_STD_FF_ACC)
%define			MASK_CPUID_STD_FF_IA64	(1 << CPUID_STD_FF_IA64)
%define			MASK_CPUID_STD_FF_RES31	(1 << CPUID_STD_FF_RES31)

;------------------------------------------------------------------------------
;	extended feature flags
;------------------------------------------------------------------------------

%define			CPUID_EXT_FF_FPU	0
%define			CPUID_EXT_FF_VME	1
%define			CPUID_EXT_FF_DE		2
%define			CPUID_EXT_FF_PSE	3
%define			CPUID_EXT_FF_TSC	4
%define			CPUID_EXT_FF_MSR	5
%define			CPUID_EXT_FF_PAE	6
%define			CPUID_EXT_FF_MCE	7
%define			CPUID_EXT_FF_CX8	8
%define			CPUID_EXT_FF_APIC	9
%define			CPUID_EXT_FF_RES10	10			; K6 model 6: SEP
%define			CPUID_EXT_FF_SEP	11
%define			CPUID_EXT_FF_MTRR	12
%define			CPUID_EXT_FF_PGE	13
%define			CPUID_EXT_FF_MCA	14
%define			CPUID_EXT_FF_CMOV	15
%define			CPUID_EXT_FF_PAT	16			; K7
 %define		CPUID_EXT_FF_FCMOV	CPUID_EXT_FF_PAT	; pre-K7
%define			CPUID_EXT_FF_PSE36	17
%define			CPUID_EXT_FF_RES18	18
%define			CPUID_EXT_FF_RES19	19
%define			CPUID_EXT_FF_RES20	20
%define			CPUID_EXT_FF_RES21	21
%define			CPUID_EXT_FF_MMXX	22
%define			CPUID_EXT_FF_MMX	23
%define			CPUID_EXT_FF_FXSR	24
%define			CPUID_EXT_FF_RES25	25
%define			CPUID_EXT_FF_RES26	26
%define			CPUID_EXT_FF_RES27	27
%define			CPUID_EXT_FF_RES28	28
%define			CPUID_EXT_FF_RES29	29
%define			CPUID_EXT_FF_K3DX	30
%define			CPUID_EXT_FF_K3D	31

%define			MASK_CPUID_EXT_FF_FPU	(1 << CPUID_EXT_FF_FPU)
%define			MASK_CPUID_EXT_FF_VME	(1 << CPUID_EXT_FF_VME)
%define			MASK_CPUID_EXT_FF_DE	(1 << CPUID_EXT_FF_DE)
%define			MASK_CPUID_EXT_FF_PSE	(1 << CPUID_EXT_FF_PSE)
%define			MASK_CPUID_EXT_FF_TSC	(1 << CPUID_EXT_FF_TSC)
%define			MASK_CPUID_EXT_FF_MSR	(1 << CPUID_EXT_FF_MSR)
%define			MASK_CPUID_EXT_FF_PAE	(1 << CPUID_EXT_FF_PAE)
%define			MASK_CPUID_EXT_FF_MCE	(1 << CPUID_EXT_FF_MCE)
%define			MASK_CPUID_EXT_FF_CX8	(1 << CPUID_EXT_FF_CX8)
%define			MASK_CPUID_EXT_FF_APIC	(1 << CPUID_EXT_FF_APIC)
%define			MASK_CPUID_EXT_FF_RES10	(1 << CPUID_EXT_FF_RES10)
%define			MASK_CPUID_EXT_FF_SEP	(1 << CPUID_EXT_FF_SEP)
%define			MASK_CPUID_EXT_FF_MTRR	(1 << CPUID_EXT_FF_MTRR)
%define			MASK_CPUID_EXT_FF_PGE	(1 << CPUID_EXT_FF_PGE)
%define			MASK_CPUID_EXT_FF_MCA	(1 << CPUID_EXT_FF_MCA)
%define			MASK_CPUID_EXT_FF_CMOV	(1 << CPUID_EXT_FF_CMOV)
%define			MASK_CPUID_EXT_FF_PAT	(1 << CPUID_EXT_FF_PAT)
 %define		MASK_CPUID_EXT_FF_FCMOV	(1 << CPUID_EXT_FF_FCMOV)
%define			MASK_CPUID_EXT_FF_PSE36	(1 << CPUID_EXT_FF_PSE36)
%define			MASK_CPUID_EXT_FF_RES18	(1 << CPUID_EXT_FF_RES18)
%define			MASK_CPUID_EXT_FF_RES19	(1 << CPUID_EXT_FF_RES19)
%define			MASK_CPUID_EXT_FF_RES20	(1 << CPUID_EXT_FF_RES20)
%define			MASK_CPUID_EXT_FF_RES21	(1 << CPUID_EXT_FF_RES21)
%define			MASK_CPUID_EXT_FF_MMXX	(1 << CPUID_EXT_FF_MMXX)
%define			MASK_CPUID_EXT_FF_MMX	(1 << CPUID_EXT_FF_MMX)
%define			MASK_CPUID_EXT_FF_FXSR	(1 << CPUID_EXT_FF_FXSR)
%define			MASK_CPUID_EXT_FF_RES25	(1 << CPUID_EXT_FF_RES25)
%define			MASK_CPUID_EXT_FF_RES26	(1 << CPUID_EXT_FF_RES26)
%define			MASK_CPUID_EXT_FF_RES27	(1 << CPUID_EXT_FF_RES27)
%define			MASK_CPUID_EXT_FF_RES28	(1 << CPUID_EXT_FF_RES28)
%define			MASK_CPUID_EXT_FF_RES29	(1 << CPUID_EXT_FF_RES29)
%define			MASK_CPUID_EXT_FF_K3DX	(1 << CPUID_EXT_FF_K3DX)
%define			MASK_CPUID_EXT_FF_K3D	(1 << CPUID_EXT_FF_K3D)

;------------------------------------------------------------------------------
;	enhanced power management feature flags
;------------------------------------------------------------------------------

%define			CPUID_EXT_PM_RES0	0
%define			CPUID_EXT_PM_BUS	1
%define			CPUID_EXT_PM_VID	2

%define			MASK_CPUID_EXT_PM_RES0	(1 << CPUID_EXT_PM_RES0)
%define			MASK_CPUID_EXT_PM_BUS	(1 << CPUID_EXT_PM_BUS)
%define			MASK_CPUID_EXT_PM_VID	(1 << CPUID_EXT_PM_VID)

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
