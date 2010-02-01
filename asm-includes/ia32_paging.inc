; $Id: //depot/external/ia32_paging.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_PAGING

%define 		INCLUDED_IA32_PAGING	BOOL_TRUE

;------------------------------------------------------------------------------
;	virtual-to-physical address translation
;------------------------------------------------------------------------------

%define			PG_2LEVEL_OFF		0
%define			PG_2LEVEL_PTE		12	; not if PDE.PS=1
%define			PG_2LEVEL_PDE		22

%define			MASK_PG_2LEVEL_OFF_4KB	((1 << PG_2LEVEL_PTE) - 1)
%define			MASK_PG_2LEVEL_OFF_4MB	((1 << PG_2LEVEL_PDE) - 1)
%define			MASK_PG_2LEVEL_PTE	((1024 - 1) << PG_2LEVEL_PTE)
%define			MASK_PG_2LEVEL_PDE	((1024 - 1) << PG_2LEVEL_PDE)

%define			PG_3LEVEL_OFF		0
%define			PG_3LEVEL_PTE		12	; not if PDE.PS=1
%define			PG_3LEVEL_PDE		21
%define			PG_3LEVEL_PDPTE		30

%define			MASK_PG_3LEVEL_OFF_4KB	((1 << PG_3LEVEL_PTE) - 1)
%define			MASK_PG_3LEVEL_OFF_2MB	((1 << PG_3LEVEL_PDE) - 1)
%define			MASK_PG_3LEVEL_PTE	((512 - 1) << PG_3LEVEL_PTE)
%define			MASK_PG_3LEVEL_PDE	((512 - 1) << PG_3LEVEL_PDE)
%define			MASK_PG_3LEVEL_PDPTE	(  (4 - 1) << PG_3LEVEL_PDPTE)

;------------------------------------------------------------------------------
;	generic PDPTE, PDE, and PTE stuff
;------------------------------------------------------------------------------

%define			BITS_PxE_AVL		3

%define			PDE_PAT			12
%define			PxE_AVL			9
%define			PxE_G			8
%define			PxE_PS			7
%define			 PTE_PAT		PxE_PS
%define			PxE_D			6
%define			PxE_A			5
%define			PxE_PCD			4
%define			PxE_PWT			3
%define			PxE_US			2
%define			PxE_WR			1
%define			PxE_P			0

%define			MASK_PDE_PAT		(1 << PDE_PAT)
%define			MASK_PxE_AVL		(((1 << BITS_PxE_AVL) - 1) << PxE_AVL)
%define			MASK_PxE_G		(1 << PxE_G)
%define			MASK_PxE_PS		(1 << PxE_PS)
%define			 MASK_PTE_PAT		(MASK_PxE_PS)
%define			MASK_PxE_D		(1 << PxE_D)
%define			MASK_PxE_A		(1 << PxE_A)
%define			MASK_PxE_PCD		(1 << PxE_PCD)
%define			MASK_PxE_PWT		(1 << PxE_PWT)
%define			MASK_PxE_US		(1 << PxE_US)
%define			MASK_PxE_WR		(1 << PxE_WR)
%define			MASK_PxE_P		(1 << PxE_P)

;------------------------------------------------------------------------------
;	PDPTE
;------------------------------------------------------------------------------

%define			PDPTE_BAS		12
%define			PDPTE_AVL		PxE_AVL
%define			PDPTE_PCD		PxE_PCD
%define			PDPTE_PWT		PxE_PWT
%define			PDPTE_P			PxE_P

%define			MASK_PDPTE_BAS		(((1 << (BITS_IA32_PHYSICAL - PDPTE_BAS)) - 1) << PDPTE_BAS)
%define			MASK_PDPTE_AVL		MASK_PxE_AVL
%define			MASK_PDPTE_PCD		MASK_PxE_PCD
%define			MASK_PDPTE_PWT		MASK_PxE_PWT
%define			MASK_PDPTE_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	4 KB PDE
;------------------------------------------------------------------------------

%define			PDE_4KB_BAS		12
%define			PDE_4KB_AVL		PxE_AVL
%define			PDE_4KB_PS		PxE_PS
%define			PDE_4KB_A		PxE_A
%define			PDE_4KB_PCD		PxE_PCD
%define			PDE_4KB_PWT		PxE_PWT
%define			PDE_4KB_US		PxE_US
%define			PDE_4KB_WR		PxE_WR
%define			PDE_4KB_P		PxE_P

%define			MASK_PDE_4KB_BAS	(((1 << (BITS_IA32_PHYSICAL - PDE_4KB_BAS)) - 1) << PDE_4KB_BAS)
%define			MASK_PDE_4KB_AVL	MASK_PxE_AVL
%define			MASK_PDE_4KB_PS		MASK_PxE_PS
%define			MASK_PDE_4KB_A		MASK_PxE_A
%define			MASK_PDE_4KB_PCD	MASK_PxE_PCD
%define			MASK_PDE_4KB_PWT	MASK_PxE_PWT
%define			MASK_PDE_4KB_US		MASK_PxE_US
%define			MASK_PDE_4KB_WR		MASK_PxE_WR
%define			MASK_PDE_4KB_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	4 MB PDE
;------------------------------------------------------------------------------

%define			PDE_4MB_BAS		22
%define			PDE_4MB_BAS_HIGH	13
%define			PDE_4MB_PAT		PDE_PAT
%define			PDE_4MB_AVL		PxE_AVL
%define			PDE_4MB_G		PxE_G
%define			PDE_4MB_PS		PxE_PS
%define			PDE_4MB_D		PxE_D
%define			PDE_4MB_A		PxE_A
%define			PDE_4MB_PCD		PxE_PCD
%define			PDE_4MB_PWT		PxE_PWT
%define			PDE_4MB_US		PxE_US
%define			PDE_4MB_WR		PxE_WR
%define			PDE_4MB_P		PxE_P

%if BITS_IA32_PHYSICAL > 41
 %error the 4 MB PDE can't hold more than 41 page base address bits
%endif

%define			MASK_PDE_4MB_BAS	(((1 << (BITS_DWORD - PDE_4MB_BAS)) - 1) << PDE_4MB_BAS)
%define			MASK_PDE_4MB_BAS_HIGH	(((1 << (BITS_IA32_PHYSICAL - BITS_DWORD)) - 1) << PDE_4MB_BAS_HIGH)
%define			MASK_PDE_4MB_PAT	MASK_PDE_PAT
%define			MASK_PDE_4MB_AVL	MASK_PxE_AVL
%define			MASK_PDE_4MB_G		MASK_PxE_G
%define			MASK_PDE_4MB_PS		MASK_PxE_PS
%define			MASK_PDE_4MB_D		MASK_PxE_D
%define			MASK_PDE_4MB_A		MASK_PxE_A
%define			MASK_PDE_4MB_PCD	MASK_PxE_PCD
%define			MASK_PDE_4MB_PWT	MASK_PxE_PWT
%define			MASK_PDE_4MB_US		MASK_PxE_US
%define			MASK_PDE_4MB_WR		MASK_PxE_WR
%define			MASK_PDE_4MB_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	2 MB PDE
;------------------------------------------------------------------------------

%define			PDE_2MB_BAS		21
%define			PDE_2MB_PAT		PDE_PAT
%define			PDE_2MB_AVL		PxE_AVL
%define			PDE_2MB_G		PxE_G
%define			PDE_2MB_PS		PxE_PS
%define			PDE_2MB_D		PxE_D
%define			PDE_2MB_A		PxE_A
%define			PDE_2MB_PCD		PxE_PCD
%define			PDE_2MB_PWT		PxE_PWT
%define			PDE_2MB_US		PxE_US
%define			PDE_2MB_WR		PxE_WR
%define			PDE_2MB_P		PxE_P

%define			MASK_PDE_2MB_BAS	(((1 << (BITS_IA32_PHYSICAL - PDE_2MB_BAS)) - 1) << PDE_2MB_BAS)
%define			MASK_PDE_2MB_PAT	MASK_PDE_PAT
%define			MASK_PDE_2MB_AVL	MASK_PxE_AVL
%define			MASK_PDE_2MB_G		MASK_PxE_G
%define			MASK_PDE_2MB_PS		MASK_PxE_PS
%define			MASK_PDE_2MB_D		MASK_PxE_D
%define			MASK_PDE_2MB_A		MASK_PxE_A
%define			MASK_PDE_2MB_PCD	MASK_PxE_PCD
%define			MASK_PDE_2MB_PWT	MASK_PxE_PWT
%define			MASK_PDE_2MB_US		MASK_PxE_US
%define			MASK_PDE_2MB_WR		MASK_PxE_WR
%define			MASK_PDE_2MB_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	PTE
;------------------------------------------------------------------------------

%define			PTE_BAS			12
%define			PTE_AVL			PxE_AVL
%define			PTE_G			PxE_G
; already defined	PTE_PAT			PTE_PAT
%define			PTE_D			PxE_D
%define			PTE_A			PxE_A
%define			PTE_PCD			PxE_PCD
%define			PTE_PWT			PxE_PWT
%define			PTE_US			PxE_US
%define			PTE_WR			PxE_WR
%define			PTE_P			PxE_P

%define			MASK_PTE_BAS		(((1 << (BITS_IA32_PHYSICAL - PTE_BAS)) - 1) << PTE_BAS)
%define			MASK_PTE_AVL		MASK_PxE_AVL
%define			MASK_PTE_G		MASK_PxE_G
; already defined	MASK_PTE_PAT		MASK_PTE_PAT
%define			MASK_PTE_D		MASK_PxE_D
%define			MASK_PTE_A		MASK_PxE_A
%define			MASK_PTE_PCD		MASK_PxE_PCD
%define			MASK_PTE_PWT		MASK_PxE_PWT
%define			MASK_PTE_US		MASK_PxE_US
%define			MASK_PTE_WR		MASK_PxE_WR
%define			MASK_PTE_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	#PF error code
;------------------------------------------------------------------------------

%define			PF_ERROR_RSV		3
%define			PF_ERROR_US		2
%define			PF_ERROR_WR		1
%define			PF_ERROR_P		0

%define			MASK_PF_ERROR_RSV	(1 << PF_ERROR_RSV)
%define			MASK_PF_ERROR_US	(1 << PF_ERROR_US)
%define			MASK_PF_ERROR_WR	(1 << PF_ERROR_WR)
%define			MASK_PF_ERROR_P		(1 << PF_ERROR_P)

;------------------------------------------------------------------------------
;	macro for creating a 2/3-level paging entry
;------------------------------------------------------------------------------

%macro			make_c_paging_entry 1-3 0,0	; type             ; if type=AVL4 or type=AVL8
							; type, dword      ; if type=CUSTOM4
							; type, qword      ; if type=CUSTOM8
							; type, base, bits ; if other type (see below)

			%ifidni %1,AVL4
			 %assign temp0 4
			 %assign temp1 ALL_BITS_CLEAR
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,AVL8
			 %assign temp0 8
			 %assign temp1 ALL_BITS_CLEAR
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,CUSTOM4
			 %assign temp0 4
			 %assign temp1 (%2)
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,CUSTOM8
			 %assign temp0 8
			 %assign temp1 (%2)
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,PDE4_4KB
			 %assign temp0 4
			 %assign temp1 ((%2) & MASK_PDE_4KB_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 ((((%3) & (MASK_PDE_4KB_AVL | MASK_PDE_4KB_A | MASK_PDE_4KB_PCD | MASK_PDE_4KB_PWT | MASK_PDE_4KB_US | MASK_PDE_4KB_WR)) & (~MASK_PDE_4KB_PS)) | MASK_PDE_4KB_P)
			%elifidni %1,PDE4_4MB
			 %assign temp0 4
			 %assign temp1 ((%2) & MASK_PDE_4MB_BAS)
			 %assign temp2 (((%2) >> (BITS_DWORD - PDE_4MB_BAS_HIGH)) & MASK_PDE_4MB_BAS_HIGH)
			 %assign temp3 ((((%3) & (MASK_PDE_4MB_PAT | MASK_PDE_4MB_AVL | MASK_PDE_4MB_G | MASK_PDE_4MB_D | MASK_PDE_4MB_A | MASK_PDE_4MB_PCD | MASK_PDE_4MB_PWT | MASK_PDE_4MB_US | MASK_PDE_4MB_WR)) | MASK_PDE_4MB_PS) | MASK_PDE_4MB_P)
			%elifidni %1,PTE4
			 %assign temp0 4
			 %assign temp1 ((%2) & MASK_PTE_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PTE_AVL | MASK_PTE_G | MASK_PTE_PAT | MASK_PTE_D | MASK_PTE_A | MASK_PTE_PCD | MASK_PTE_PWT | MASK_PTE_US | MASK_PTE_WR)) | MASK_PTE_P)
			%elifidni %1,PDPTE
			 %assign temp0 8
			 %assign temp1 ((%2) & MASK_PDPTE_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PDPTE_AVL | MASK_PDPTE_PCD | MASK_PDPTE_PWT)) | MASK_PDPTE_P)
			%elifidni %1,PDE8_4KB
			 %assign temp0 8
			 %assign temp1 ((%2) & MASK_PDE_4KB_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 ((((%3) & (MASK_PDE_4KB_AVL | MASK_PDE_4KB_A | MASK_PDE_4KB_PCD | MASK_PDE_4KB_PWT | MASK_PDE_4KB_US | MASK_PDE_4KB_WR)) & (~MASK_PDE_4KB_PS)) | MASK_PDE_4KB_P)
			%elifidni %1,PDE8_2MB
			 %assign temp0 8
			 %assign temp1 ((%2) & MASK_PDE_2MB_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 ((((%3) & (MASK_PDE_2MB_PAT | MASK_PDE_2MB_AVL | MASK_PDE_2MB_G | MASK_PDE_2MB_D | MASK_PDE_2MB_A | MASK_PDE_2MB_PCD | MASK_PDE_2MB_PWT | MASK_PDE_2MB_US | MASK_PDE_2MB_WR)) | MASK_PDE_2MB_PS) | MASK_PDE_2MB_P)
			%elifidni %1,PTE8
			 %assign temp0 8
			 %assign temp1 ((%2) & MASK_PTE_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PTE_AVL | MASK_PTE_G | MASK_PTE_PAT | MASK_PTE_D | MASK_PTE_A | MASK_PTE_PCD | MASK_PTE_PWT | MASK_PTE_US | MASK_PTE_WR)) | MASK_PTE_P)
			%else
			 %error the first parameter must be AVL4, AVL8, CUSTOM4, CUSTOM8, or PDE4_4KB, PDE4_4MB, PTE4, or PDPTE, PDE8_4KB, PDE8_2MB, PTE8
			%endif

			%if temp0 = 4
			 dd (temp1 | temp2 | temp3)
			%elif temp0 = 8
			 dq (temp1 | temp2 | temp3)
			%else
			 %error this macro only knows how to make 4 or 8 byte wide paging entries
			%endif

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
