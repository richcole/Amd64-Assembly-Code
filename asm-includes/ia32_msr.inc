; $Id: //depot/external/ia32_msr.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_MSR

%define 		INCLUDED_IA32_MSR	BOOL_TRUE

;------------------------------------------------------------------------------
;	MSRs
;------------------------------------------------------------------------------

			;------------------------------------------------------
			; Time Stamp Counter
			;------------------------------------------------------

%define			MSR_TSC			00000010h

			;------------------------------------------------------
			; feature control
			;------------------------------------------------------

%define			MSR_TR12		0000000Eh
%define			MSR_MISC_CTL		00000119h
%define			MSR_EFER		0C0000080h

			;------------------------------------------------------
			; SYSENTER and SYSEXIT
			;------------------------------------------------------

%define			MSR_SEP_SEL		00000174h
%define			MSR_SEP_ESP		00000175h
%define			MSR_SEP_EIP		00000176h

			;------------------------------------------------------
			; SYSCALL and SYSRET
			;------------------------------------------------------

%define			MSR_STAR		0C0000081h

			;------------------------------------------------------
			; Page Attribute Table
			;------------------------------------------------------

%define			MSR_PAT			00000277h

			;------------------------------------------------------
			; Memory Type Range Registers
			;------------------------------------------------------

%define			MSR_MTTR_CAP		000000FEh

%define			MSR_MTRR_DEF_TYPE	000002FFh

%define			MSR_MTRR_PHYS_BASE_0	00000200h
%define			MSR_MTRR_PHYS_MASK_0	00000201h
%define			MSR_MTRR_PHYS_BASE_1	00000202h
%define			MSR_MTRR_PHYS_MASK_1	00000203h
%define			MSR_MTRR_PHYS_BASE_2	00000204h
%define			MSR_MTRR_PHYS_MASK_2	00000205h
%define			MSR_MTRR_PHYS_BASE_3	00000206h
%define			MSR_MTRR_PHYS_MASK_3	00000207h
%define			MSR_MTRR_PHYS_BASE_4	00000208h
%define			MSR_MTRR_PHYS_MASK_4	00000209h
%define			MSR_MTRR_PHYS_BASE_5	0000020Ah
%define			MSR_MTRR_PHYS_MASK_5	0000020Bh
%define			MSR_MTRR_PHYS_BASE_6	0000020Ch
%define			MSR_MTRR_PHYS_MASK_6	0000020Dh
%define			MSR_MTRR_PHYS_BASE_7	0000020Eh
%define			MSR_MTRR_PHYS_MASK_7	0000020Fh

%define			MSR_MTRR_FIX_64K_00000	00000250h
%define			MSR_MTRR_FIX_16K_80000	00000258h
%define			MSR_MTRR_FIX_16K_A0000	00000259h
%define			MSR_MTRR_FIX_4K_C0000	00000268h
%define			MSR_MTRR_FIX_4K_C8000	00000269h
%define			MSR_MTRR_FIX_4K_D0000	0000026Ah
%define			MSR_MTRR_FIX_4K_D8000	0000026Bh
%define			MSR_MTRR_FIX_4K_E0000	0000026Ch
%define			MSR_MTRR_FIX_4K_E8000	0000026Dh
%define			MSR_MTRR_FIX_4K_F0000	0000026Eh
%define			MSR_MTRR_FIX_4K_F8000	0000026Fh

			;------------------------------------------------------
			; Machine Check Exception
			;------------------------------------------------------

%define			MSR_MCAR		00000000h
%define			MSR_MCTR		00000001h

			;------------------------------------------------------
			; Machine Check Architecture
			;------------------------------------------------------

%define			MSR_MCG_CAP		00000179h
%define			MSR_MCG_STATUS		0000017Ah
%define			MSR_MCG_CTL		0000017Bh

%define			MSR_MCn_BAS		00000400h	; MC0_CTL starts here
%define			MSR_MCn_CTL		0		; they come in blocks of four
%define			MSR_MCn_STATUS		1		;
%define			MSR_MCn_ADDR		2		;
%define			MSR_MCn_MISC		3		;

%define			MSR_MC0_CTL		(MSR_MCn_BAS + (0 * 4) + MSR_MCn_CTL)
%define			MSR_MC0_STATUS		(MSR_MCn_BAS + (0 * 4) + MSR_MCn_STATUS)
%define			MSR_MC0_ADDR		(MSR_MCn_BAS + (0 * 4) + MSR_MCn_ADDR)
%define			MSR_MC0_MISC		(MSR_MCn_BAS + (0 * 4) + MSR_MCn_MISC)

%define			MSR_MC1_CTL		(MSR_MCn_BAS + (1 * 4) + MSR_MCn_CTL)
%define			MSR_MC1_STATUS		(MSR_MCn_BAS + (1 * 4) + MSR_MCn_STATUS)
%define			MSR_MC1_ADDR		(MSR_MCn_BAS + (1 * 4) + MSR_MCn_ADDR)
%define			MSR_MC1_MISC		(MSR_MCn_BAS + (1 * 4) + MSR_MCn_MISC)

%define			MSR_MC2_CTL		(MSR_MCn_BAS + (2 * 4) + MSR_MCn_CTL)
%define			MSR_MC2_STATUS		(MSR_MCn_BAS + (2 * 4) + MSR_MCn_STATUS)
%define			MSR_MC2_ADDR		(MSR_MCn_BAS + (2 * 4) + MSR_MCn_ADDR)
%define			MSR_MC2_MISC		(MSR_MCn_BAS + (2 * 4) + MSR_MCn_MISC)

%define			MSR_MC3_CTL		(MSR_MCn_BAS + (3 * 4) + MSR_MCn_CTL)
%define			MSR_MC3_STATUS		(MSR_MCn_BAS + (3 * 4) + MSR_MCn_STATUS)
%define			MSR_MC3_ADDR		(MSR_MCn_BAS + (3 * 4) + MSR_MCn_ADDR)
%define			MSR_MC3_MISC		(MSR_MCn_BAS + (3 * 4) + MSR_MCn_MISC)

%define			MSR_MC4_CTL		(MSR_MCn_BAS + (4 * 4) + MSR_MCn_CTL)
%define			MSR_MC4_STATUS		(MSR_MCn_BAS + (4 * 4) + MSR_MCn_STATUS)
%define			MSR_MC4_ADDR		(MSR_MCn_BAS + (4 * 4) + MSR_MCn_ADDR)
%define			MSR_MC4_MISC		(MSR_MCn_BAS + (4 * 4) + MSR_MCn_MISC)

			;------------------------------------------------------
			; Local APIC
			;------------------------------------------------------

%define			MSR_APIC_BASE		0000001Bh

;------------------------------------------------------------------------------
;	internal stuff
;------------------------------------------------------------------------------

; SMBASE		-> can be changed on RSM

; IO_RESTART_EIP	-> set by IN/OUT, resumed into EIP by RSM if SSM.IO_RESTART
; IO_RESTART_ECX	-> set by IN/OUT, resumed into ECX by RSM if SSM.IO_RESTART
; IO_RESTART_ESI	-> set by IN/OUT, resumed into ESI by RSM if SSM.IO_RESTART
; IO_RESTART_EDI	-> set by IN/OUT, resumed into EDI by RSM if SSM.IO_RESTART

; IN_SMM		-> set by SMI, cleared by RSM or RESET/INIT
; IN_HLT		-> set by HLT, set by RSM if SSM.HLT_RESTART, cleared by RESET/INIT/SMI/NMI/INTR
; IN_SHUTDOWN		-> set by triple-fault, cleared by RESET/INIT/SMI/NMI
; IN_FP_FREEZE		-> set by waiting FP instruction if unmasked pending FP exception while CR0.NE=0 and IGNNE#=deasserted, cleared by RESET/INIT/SMI/NMI/INTR

; BLOCK_INIT		-> set by SMI, cleared by IRET/RSM or RESET
; BLOCK_SMI		-> set by SMI, cleared by RSM or RESET/INIT
; BLOCK_NMI		-> set by SMI/NMI, cleared by IRET or RESET/INIT

; LATCH_INIT		-> one INIT can be latched while INITs are blocked
; LATCH_SMI		-> one SMI can be latched while SMIs are blocked
; LATCH_NMI		-> one NMI can be latched while NMIs are blocked

;------------------------------------------------------------------------------
;	TR12 MSR bits
;------------------------------------------------------------------------------

%define			MSR_TR12_ITR		9

%define			MASK_MSR_TR12_ITR	(1 << MSR_TR12_ITR)

;------------------------------------------------------------------------------
;	MISC_CTL MSR bits
;------------------------------------------------------------------------------

%define			MSR_MISC_CTL_PSN	21

%define			MASK_MSR_MISC_CTL_PSN	(1 << MSR_MISC_CTL_PSN)

;------------------------------------------------------------------------------
;	EFER MSR bits
;------------------------------------------------------------------------------

%define			MSR_EFER_SCE		0

%define			MASK_MSR_EFER_SCE	(1 << MSR_EFER_SCE)

;------------------------------------------------------------------------------
;	STAR MSR bits
;------------------------------------------------------------------------------

%define			MSR_STAR_SEL_RET	48
%define			MSR_STAR_SEL_CALL	32
%define			MSR_STAR_EIP		0

%define			MASK_MSR_STAR_SEL_RET	(MAX_WORD << MSR_STAR_SEL_RET)
%define			MASK_MSR_STAR_SEL_CALL	(MAX_WORD << MSR_STAR_SEL_CALL)
%define			MASK_MSR_STAR_EIP	(MAX_DWORD << MSR_STAR_EIP)

;------------------------------------------------------------------------------
;	PAT MSR bits
;------------------------------------------------------------------------------

%define			MSR_PAT_PA_UC		0
%define			MSR_PAT_PA_WC		1
%define			MSR_PAT_PA_RES2		2
%define			MSR_PAT_PA_RES3		3
%define			MSR_PAT_PA_WT		4
%define			MSR_PAT_PA_WP		5
%define			MSR_PAT_PA_WB		6
%define			MSR_PAT_PA_UC_WEAK	7		; can be overridden by MTRR WC

%define			MASK_MSR_PAT_PA		07h

%define			MSR_PAT_PA7		56
%define			MSR_PAT_PA6		48
%define			MSR_PAT_PA5		40
%define			MSR_PAT_PA4		32
%define			MSR_PAT_PA3		24
%define			MSR_PAT_PA2		16
%define			MSR_PAT_PA1		8
%define			MSR_PAT_PA0		0

%define			MASK_MSR_PAT_PA7	(MASK_MSR_PAT_PA << MSR_PAT_PA7)
%define			MASK_MSR_PAT_PA6	(MASK_MSR_PAT_PA << MSR_PAT_PA6)
%define			MASK_MSR_PAT_PA5	(MASK_MSR_PAT_PA << MSR_PAT_PA5)
%define			MASK_MSR_PAT_PA4	(MASK_MSR_PAT_PA << MSR_PAT_PA4)
%define			MASK_MSR_PAT_PA3	(MASK_MSR_PAT_PA << MSR_PAT_PA3)
%define			MASK_MSR_PAT_PA2	(MASK_MSR_PAT_PA << MSR_PAT_PA2)
%define			MASK_MSR_PAT_PA1	(MASK_MSR_PAT_PA << MSR_PAT_PA1)
%define			MASK_MSR_PAT_PA0	(MASK_MSR_PAT_PA << MSR_PAT_PA0)

;------------------------------------------------------------------------------
;	MTRR_CAP MSR bits
;------------------------------------------------------------------------------

%define			MSR_MTRR_CAP_WC			10
%define			MSR_MTRR_CAP_FIX		8
%define			MSR_MTRR_CAP_VCNT		0

%define			MASK_MSR_MTRR_CAP_WC		(1 << MSR_MTRR_CAP_WC)
%define			MASK_MSR_MTRR_CAP_FIX		(1 << MSR_MTRR_CAP_FIX)
%define			MASK_MSR_MTRR_CAP_VCNT		(MAX_BYTE << MSR_MTRR_CAP_VCNT)

;------------------------------------------------------------------------------
;	MTRR_DEF_TYPE MSR bits
;------------------------------------------------------------------------------

%define			MSR_MTRR_DEF_TYPE_E		11
%define			MSR_MTRR_DEF_TYPE_FE		10
%define			MSR_MTRR_DEF_TYPE_TYPE		0

%define			MASK_MSR_MTRR_DEF_TYPE_E	(1 << MSR_MTRR_DEF_TYPE_E)
%define			MASK_MSR_MTRR_DEF_TYPE_FE	(1 << MSR_MTRR_DEF_TYPE_FE)
%define			MASK_MSR_MTRR_DEF_TYPE_TYPE	(MAX_BYTE << MSR_MTRR_DEF_TYPE_TYPE)

;------------------------------------------------------------------------------
;	MTRR_FIX_* bits
;------------------------------------------------------------------------------

; $TODO: add MTRR_FIX_* bit and mask definitions $

;------------------------------------------------------------------------------
;	MTRR_PHYS_BASE_n MSR bits
;------------------------------------------------------------------------------

%define			MSR_MTRR_PHYS_BASE_n_BASE	12
%define			MSR_MTRR_PHYS_BASE_n_TYPE	0

%define			MASK_MSR_MTRR_PHYS_BASE_n_BASE	(((1 << (BITS_IA32_PHYSICAL - MSR_MTRR_PHYS_BASE_n_BASE)) - 1) << MSR_MTRR_PHYS_BASE_n_BASE)
%define			MASK_MSR_MTRR_PHYS_BASE_n_TYPE	(MAX_BYTE << MSR_MTRR_PHYS_BASE_n_TYPE)

;------------------------------------------------------------------------------
;	MTRR_PHYS_MASK_n MSR bits
;------------------------------------------------------------------------------

%define			MSR_MTRR_PHYS_MASK_n_MASK	12
%define			MSR_MTRR_PHYS_MASK_n_V		11

%define			MASK_MSR_MTRR_PHYS_MASK_n_MASK	(((1 << (BITS_IA32_PHYSICAL - MSR_MTRR_PHYS_MASK_n_MASK)) - 1) << MSR_MTRR_PHYS_MASK_n_MASK)
%define			MASK_MSR_MTRR_PHYS_MASK_n_V	(MAX_BYTE << MSR_MTRR_PHYS_MASK_n_V)

;------------------------------------------------------------------------------
;	MCAR MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCAR_ADDR		0

%define			MASK_MSR_MCAR_ADDR	(MAX_DWORD << MSR_MCAR_ADDR)

;------------------------------------------------------------------------------
;	MCTR MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCTR_LOCK		4
%define			MSR_MCTR_M_IO		3
%define			MSR_MCTR_D_C		2
%define			MSR_MCTR_W_R		1
%define			MSR_MCTR_CHK		0

%define			MASK_MSR_MCTR_LOCK	(1 << MSR_MCTR_LOCK)
%define			MASK_MSR_MCTR_M_IO	(1 << MSR_MCTR_M_IO)
%define			MASK_MSR_MCTR_D_C	(1 << MSR_MCTR_D_C)
%define			MASK_MSR_MCTR_W_R	(1 << MSR_MCTR_W_R)
%define			MASK_MSR_MCTR_CHK	(1 << MSR_MCTR_CHK)

;------------------------------------------------------------------------------
;	MCG_CAP MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCG_CAP_P			8
%define			MSR_MCG_CTL_COUNT		0

%define			MASK_MSR_MCG_CAP_P		(1 << MSR_MCG_CAP_P)
%define			MASK_MSR_MCG_CAP_COUNT		(MAX_BYTE << MSR_MCG_CAP_P)

;------------------------------------------------------------------------------
;	MCG_STATUS MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCG_STATUS_MCIP		2
%define			MSR_MCG_STATUS_EIPV		1
%define			MSR_MCG_STATUS_RIPV		0

%define			MASK_MSR_MCG_STATUS_MCIP	(1 << MSR_MCG_STATUS_MCIP)
%define			MASK_MSR_MCG_STATUS_EIPV	(1 << MSR_MCG_STATUS_EIPV)
%define			MASK_MSR_MCG_STATUS_RIPV	(1 << MSR_MCG_STATUS_RIPV)

;------------------------------------------------------------------------------
;	MCG_CTL MSR bits
;------------------------------------------------------------------------------

; The MCG_CTL MSR layout has not been defined yet.

;------------------------------------------------------------------------------
;	MCG_MCn_CTL MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCn_CTL_EE63		63
; $TODO: define EE62..EE01 bits $
%define			MSR_MCn_CTL_EE00		0

%define			MASK_MSR_MCn_CTL_EE63		(1 << MSR_MCn_CTL_EE63)
; $TODO: define EE62..EE01 masks $
%define			MASK_MSR_MCn_CTL_EE00		(1 << MSR_MCn_CTL_EE00)

;------------------------------------------------------------------------------
;	MCn_STATUS MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCn_STATUS_VAL		63
%define			MSR_MCn_STATUS_O		62
%define			MSR_MCn_STATUS_UC		61
%define			MSR_MCn_STATUS_EN		60
%define			MSR_MCn_STATUS_MISCV		59
%define			MSR_MCn_STATUS_ADDRV		58
%define			MSR_MCn_STATUS_PCC		57
%define			MSR_MCn_STATUS_OTHER		32
%define			MSR_MCn_STATUS_ERROR_MS		16
%define			MSR_MCn_STATUS_ERROR_MCA	0

%define			MASK_MSR_MCn_STATUS_VAL		(1 << MSR_MCn_STATUS_VAL)
%define			MASK_MSR_MCn_STATUS_O		(1 << MSR_MCn_STATUS_O)
%define			MASK_MSR_MCn_STATUS_UC		(1 << MSR_MCn_STATUS_UC)
%define			MASK_MSR_MCn_STATUS_EN		(1 << MSR_MCn_STATUS_EN)
%define			MASK_MSR_MCn_STATUS_MISCV	(1 << MSR_MCn_STATUS_MISCV)
%define			MASK_MSR_MCn_STATUS_ADDRV	(1 << MSR_MCn_STATUS_ADDRV)
%define			MASK_MSR_MCn_STATUS_PCC		(1 << MSR_MCn_STATUS_PCC)
%define			MASK_MSR_MCn_STATUS_OTHER	(((1 << 25) - 1) << MSR_MCn_STATUS_OTHER)
%define			MASK_MSR_MCn_STATUS_ERROR_MS	(MAX_WORD << MSR_MCn_STATUS_ERROR_MS)
%define			MASK_MSR_MCn_STATUS_ERROR_MCA	(MAX_WORD << MSR_MCn_STATUS_ERROR_MCA)

;------------------------------------------------------------------------------
;	MCn_ADDR MSR bits
;------------------------------------------------------------------------------

%define			MSR_MCn_ADDR_ADDR		0

%define			MASK_MSR_MCn_ADDR_ADDR		(((1 << (BITS_IA32_PHYSICAL - MSR_MCn_ADDR_ADDR)) - 1) << MSR_MCn_ADDR_ADDR)

;------------------------------------------------------------------------------
;	MCn_MISC MSR bits
;------------------------------------------------------------------------------

; The MCn_MISC MSR layout has not been defined yet.

;------------------------------------------------------------------------------
;	MSR_APIC_BASE bits
;------------------------------------------------------------------------------

%define			MSR_APIC_BASE_BASE		12
%define			MSR_APIC_BASE_E			11
%define			MSR_APIC_BASE_BSP		8

%define			MSR_APIC_BASE_BASE		(((1 << (BITS_IA32_PHYSICAL - MSR_APIC_BASE_BASE)) - 1) << MSR_APIC_BASE_BASE)
%define			MASK_MSR_APIC_BASE_E		(1 << MSR_APIC_BASE_E)
%define			MASK_MSR_APIC_BASE_BSP		(1 << MSR_APIC_BASE_BSP)

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
