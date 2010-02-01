; $Id: //depot/external/aa64_paging.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_PAGING

%define 		INCLUDED_AA64_PAGING	BOOL_TRUE

;------------------------------------------------------------------------------
;	virtual-to-physical address translation
;------------------------------------------------------------------------------

%define			PG_4LEVEL_OFF		0
%define			PG_4LEVEL_PML1E		12	; not if PML2E.PS=1
%define			PG_4LEVEL_PML2E		21
%define			PG_4LEVEL_PML3E		30
%define			PG_4LEVEL_PML4E		39
%define			PG_4LEVEL_SIGN_EXT	48

%define			MASK_PG_4LEVEL_OFF_4KB	((1 << PG_4LEVEL_PML1E) - 1)
%define			MASK_PG_4LEVEL_OFF_2MB	((1 << PG_4LEVEL_PML2E) - 1)
%define			MASK_PG_4LEVEL_PML1E	((512 - 1) << PG_4LEVEL_PML1E)
%define			MASK_PG_4LEVEL_PML2E	((512 - 1) << PG_4LEVEL_PML2E)
%define			MASK_PG_4LEVEL_PML3E	((512 - 1) << PG_4LEVEL_PML3E)
%define			MASK_PG_4LEVEL_PML4E	((512 - 1) << PG_4LEVEL_PML4E)
%define			MASK_PG_4LEVEL_SIGN_EXT	(((1 << (BITS_QWORD - PG_4LEVEL_SIGN_EXT)) - 1) << PG_4LEVEL_SIGN_EXT)

;------------------------------------------------------------------------------
;	generic PMLxE stuff
;------------------------------------------------------------------------------

%define			BITS_PMLxE_AVL64	12

%define			PMLxE_AVL64		(BITS_QWORD - BITS_PMLxE_AVL64)

%if BITS_AA64_PHYSICAL > PMLxE_AVL64
 %error due to the AVL64 bits a PMLxE can't hold that many base address bits
%endif

%define			MASK_PMLxE_AVL64	(((1 << BITS_PMLxE_AVL64) - 1) << PMLxE_AVL64)

;------------------------------------------------------------------------------
;	PML4E
;------------------------------------------------------------------------------

%define			PML4E_AVL64		PMLxE_AVL64
%define			PML4E_BAS		12
%define			PML4E_AVL		PxE_AVL
%define			PML4E_A			PxE_A
%define			PML4E_PCD		PxE_PCD
%define			PML4E_PWT		PxE_PWT
%define			PML4E_US		PxE_US
%define			PML4E_WR		PxE_WR
%define			PML4E_P			PxE_P

%define			MASK_PML4E_AVL64	MASK_PMLxE_AVL
%define			MASK_PML4E_BAS		(((1 << (BITS_AA64_PHYSICAL - PML4E_BAS)) - 1) << PML4E_BAS)
%define			MASK_PML4E_AVL		MASK_PxE_AVL
%define			MASK_PML4E_A		MASK_PxE_A
%define			MASK_PML4E_PCD		MASK_PxE_PCD
%define			MASK_PML4E_PWT		MASK_PxE_PWT
%define			MASK_PML4E_US		MASK_PxE_US
%define			MASK_PML4E_WR		MASK_PxE_WR
%define			MASK_PML4E_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	PML3E
;------------------------------------------------------------------------------

%define			PML3E_AVL64		PMLxE_AVL64
%define			PML3E_BAS		12
%define			PML3E_AVL		PxE_AVL
%define			PML3E_A			PxE_A
%define			PML3E_PCD		PxE_PCD
%define			PML3E_PWT		PxE_PWT
%define			PML3E_US		PxE_US
%define			PML3E_WR		PxE_WR
%define			PML3E_P			PxE_P

%define			MASK_PML3E_AVL64	MASK_PMLxE_AVL
%define			MASK_PML3E_BAS		(((1 << (BITS_AA64_PHYSICAL - PML3E_BAS)) - 1) << PML3E_BAS)
%define			MASK_PML3E_AVL		MASK_PxE_AVL
%define			MASK_PML3E_A		MASK_PxE_A
%define			MASK_PML3E_PCD		MASK_PxE_PCD
%define			MASK_PML3E_PWT		MASK_PxE_PWT
%define			MASK_PML3E_US		MASK_PxE_US
%define			MASK_PML3E_WR		MASK_PxE_WR
%define			MASK_PML3E_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	4 KB PML2E
;------------------------------------------------------------------------------

%define			PML2E_4KB_AVL64		PMLxE_AVL64
%define			PML2E_4KB_BAS		12
%define			PML2E_4KB_AVL		PxE_AVL
%define			PML2E_4KB_PS		PxE_PS
%define			PML2E_4KB_A		PxE_A
%define			PML2E_4KB_PCD		PxE_PCD
%define			PML2E_4KB_PWT		PxE_PWT
%define			PML2E_4KB_US		PxE_US
%define			PML2E_4KB_WR		PxE_WR
%define			PML2E_4KB_P		PxE_P

%define			MASK_PML2E_4KB_AVL64	MASK_PMLxE_AVL
%define			MASK_PML2E_4KB_BAS	(((1 << (BITS_AA64_PHYSICAL - PML2E_4KB_BAS)) - 1) << PML2E_4KB_BAS)
%define			MASK_PML2E_4KB_AVL	MASK_PxE_AVL
%define			MASK_PML2E_4KB_PS	MASK_PxE_PS
%define			MASK_PML2E_4KB_A	MASK_PxE_A
%define			MASK_PML2E_4KB_PCD	MASK_PxE_PCD
%define			MASK_PML2E_4KB_PWT	MASK_PxE_PWT
%define			MASK_PML2E_4KB_US	MASK_PxE_US
%define			MASK_PML2E_4KB_WR	MASK_PxE_WR
%define			MASK_PML2E_4KB_P	MASK_PxE_P

;------------------------------------------------------------------------------
;	2 MB PML2E
;------------------------------------------------------------------------------

%define			PML2E_2MB_AVL64		PMLxE_AVL64
%define			PML2E_2MB_BAS		21
%define			PML2E_2MB_PAT		PDE_PAT
%define			PML2E_2MB_AVL		PxE_AVL
%define			PML2E_2MB_G		PxE_G
%define			PML2E_2MB_PS		PxE_PS
%define			PML2E_2MB_D		PxE_D
%define			PML2E_2MB_A		PxE_A
%define			PML2E_2MB_PCD		PxE_PCD
%define			PML2E_2MB_PWT		PxE_PWT
%define			PML2E_2MB_US		PxE_US
%define			PML2E_2MB_WR		PxE_WR
%define			PML2E_2MB_P		PxE_P

%define			MASK_PML2E_2MB_AVL64	MASK_PMLxE_AVL
%define			MASK_PML2E_2MB_BAS	(((1 << (BITS_AA64_PHYSICAL - PML2E_2MB_BAS)) - 1) << PML2E_2MB_BAS)
%define			MASK_PML2E_2MB_PAT	MASK_PDE_PAT
%define			MASK_PML2E_2MB_AVL	MASK_PxE_AVL
%define			MASK_PML2E_2MB_G	MASK_PxE_G
%define			MASK_PML2E_2MB_PS	MASK_PxE_PS
%define			MASK_PML2E_2MB_D	MASK_PxE_D
%define			MASK_PML2E_2MB_A	MASK_PxE_A
%define			MASK_PML2E_2MB_PCD	MASK_PxE_PCD
%define			MASK_PML2E_2MB_PWT	MASK_PxE_PWT
%define			MASK_PML2E_2MB_US	MASK_PxE_US
%define			MASK_PML2E_2MB_WR	MASK_PxE_WR
%define			MASK_PML2E_2MB_P	MASK_PxE_P

;------------------------------------------------------------------------------
;	PML1E
;------------------------------------------------------------------------------

%define			PML1E_AVL64		PMLxE_AVL64
%define			PML1E_BAS		12
%define			PML1E_AVL		PxE_AVL
%define			PML1E_G			PxE_G
%define			PML1E_PAT		PTE_PAT
%define			PML1E_D			PxE_D
%define			PML1E_A			PxE_A
%define			PML1E_PCD		PxE_PCD
%define			PML1E_PWT		PxE_PWT
%define			PML1E_US		PxE_US
%define			PML1E_WR		PxE_WR
%define			PML1E_P			PxE_P

%define			MASK_PML1E_AVL64	MASK_PMLxE_AVL
%define			MASK_PML1E_BAS		(((1 << (BITS_AA64_PHYSICAL - PML1E_BAS)) - 1) << PML1E_BAS)
%define			MASK_PML1E_AVL		MASK_PxE_AVL
%define			MASK_PML1E_G		MASK_PxE_G
%define			MASK_PML1E_PAT		MASK_PTE_PAT
%define			MASK_PML1E_D		MASK_PxE_D
%define			MASK_PML1E_A		MASK_PxE_A
%define			MASK_PML1E_PCD		MASK_PxE_PCD
%define			MASK_PML1E_PWT		MASK_PxE_PWT
%define			MASK_PML1E_US		MASK_PxE_US
%define			MASK_PML1E_WR		MASK_PxE_WR
%define			MASK_PML1E_P		MASK_PxE_P

;------------------------------------------------------------------------------
;	IA-32 definition overrides
;------------------------------------------------------------------------------

%define			MASK_PDPTE_BAS		(((1 << (BITS_AA64_PHYSICAL - PDPTE_BAS)) - 1) << PDPTE_BAS)

%define			MASK_PDE_4KB_BAS	(((1 << (BITS_AA64_PHYSICAL - PDE_4KB_BAS)) - 1) << PDE_4KB_BAS)

%if BITS_AA64_PHYSICAL > 41
 %error the 4 MB PDE can't hold more than 41 page base address bits
%endif

%define			MASK_PDE_4MB_BAS_HIGH	(((1 << (BITS_AA64_PHYSICAL - BITS_DWORD)) - 1) << PDE_4MB_BAS_HIGH)

%define			MASK_PDE_2MB_BAS	(((1 << (BITS_AA64_PHYSICAL - PDE_2MB_BAS)) - 1) << PDE_2MB_BAS)

%define			MASK_PTE_BAS		(((1 << (BITS_AA64_PHYSICAL - PTE_BAS)) - 1) << PTE_BAS)

;------------------------------------------------------------------------------
;	macro for creating a 4-level paging entry
;------------------------------------------------------------------------------

%macro			make_c_paging_entry64 1-4 0,0,0	; type                         ; if type=AVL8
							; type, qword                  ; if type=CUSTOM8
							; type, base, bits, bits_avl64 ; if other type (see below)

			%ifidni %1,AVL8
			 %assign temp0 0 ; unused
			 %assign temp1 ALL_BITS_CLEAR
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,CUSTOM8
			 %assign temp0 0 ; unused
			 %assign temp1 (%2)
			 %assign temp2 0 ; unused
			 %assign temp3 0 ; unused
			%elifidni %1,PML4E
			 %assign temp0 (((%4) & ((1 << BITS_PMLxE_AVL64) - 1)) << PML4E_AVL64)
			 %assign temp1 ((%2) & MASK_PML4E_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PML4E_AVL | MASK_PML4E_A | MASK_PML4E_PCD | MASK_PML4E_PWT | MASK_PML4E_US | MASK_PML4E_WR)) | MASK_PML4E_P)
			%elifidni %1,PML3E
			 %assign temp0 (((%4) & ((1 << BITS_PMLxE_AVL64) - 1)) << PML3E_AVL64)
			 %assign temp1 ((%2) & MASK_PML3E_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PML3E_AVL | MASK_PML3E_A | MASK_PML3E_PCD | MASK_PML3E_PWT | MASK_PML3E_US | MASK_PML3E_WR)) | MASK_PML3E_P)
			%elifidni %1,PML2E_4KB
			 %assign temp0 (((%4) & ((1 << BITS_PMLxE_AVL64) - 1)) << PML2E_4KB_AVL64)
			 %assign temp1 ((%2) & MASK_PML2E_4KB_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 ((((%3) & (MASK_PML2E_4KB_AVL | MASK_PML2E_4KB_A | MASK_PML2E_4KB_PCD | MASK_PML2E_4KB_PWT | MASK_PML2E_4KB_US | MASK_PML2E_4KB_WR)) & (~MASK_PML2E_4KB_PS)) | MASK_PML2E_4KB_P)
			%elifidni %1,PML2E_2MB
			 %assign temp0 (((%4) & ((1 << BITS_PMLxE_AVL64) - 1)) << PML2E_2MB_AVL64)
			 %assign temp1 ((%2) & MASK_PML2E_2MB_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 ((((%3) & (MASK_PML2E_2MB_PAT | MASK_PML2E_2MB_AVL | MASK_PML2E_2MB_G | MASK_PML2E_2MB_D | MASK_PML2E_2MB_A | MASK_PML2E_2MB_PCD | MASK_PML2E_2MB_PWT | MASK_PML2E_2MB_US | MASK_PML2E_2MB_WR)) | MASK_PML2E_2MB_PS) | MASK_PML2E_2MB_P)
			%elifidni %1,PML1E
			 %assign temp0 (((%4) & ((1 << BITS_PMLxE_AVL64) - 1)) << PML1E_AVL64)
			 %assign temp1 ((%2) & MASK_PML1E_BAS)
			 %assign temp2 0 ; unused
			 %assign temp3 (((%3) & (MASK_PML1E_AVL | MASK_PML1E_G | MASK_PML1E_PAT | MASK_PML1E_D | MASK_PML1E_A | MASK_PML1E_PCD | MASK_PML1E_PWT | MASK_PML1E_US | MASK_PML1E_WR)) | MASK_PML1E_P)
			%else
			 %error the first parameter must be AVL8, CUSTOM8, or PML4E, PML3E, PML2E_4KB, PML2E_2MB, PML1E
			%endif

			dq (temp0 | temp1 | temp2 | temp3)

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
