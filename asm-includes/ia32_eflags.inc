; $Id: //depot/external/ia32_eflags.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_EFLAGS

%define 		INCLUDED_IA32_EFLAGS	BOOL_TRUE

;------------------------------------------------------------------------------
;	FLAGS
;------------------------------------------------------------------------------

%define			FLAGS_NT		14
%define			FLAGS_IOPL		12
%define			FLAGS_OF		11
%define			FLAGS_DF		10
%define			FLAGS_IF		9
%define			FLAGS_TF		8
%define			FLAGS_SF		7
%define			FLAGS_ZF		6
%define			FLAGS_AF		4
%define			FLAGS_PF		2
%define			FLAGS_CF		0

%define			FLAGS_IOPL_3		IOPL_3
%define			FLAGS_IOPL_2		IOPL_2
%define			FLAGS_IOPL_1		IOPL_1
%define			FLAGS_IOPL_0		IOPL_0

%define			MASK_FLAGS_NT		(1 << FLAGS_NT)
%define			MASK_FLAGS_IOPL		(FLAGS_IOPL_3 << FLAGS_IOPL)
%define			MASK_FLAGS_OF		(1 << FLAGS_OF)
%define			MASK_FLAGS_DF		(1 << FLAGS_DF)
%define			MASK_FLAGS_IF		(1 << FLAGS_IF)
%define			MASK_FLAGS_TF		(1 << FLAGS_TF)
%define			MASK_FLAGS_SF		(1 << FLAGS_SF)
%define			MASK_FLAGS_ZF		(1 << FLAGS_ZF)
%define			MASK_FLAGS_AF		(1 << FLAGS_AF)
%define			MASK_FLAGS_PF		(1 << FLAGS_PF)
%define			MASK_FLAGS_CF		(1 << FLAGS_CF)

%define			MASK_FLAGS_IOPL_3	(FLAGS_IOPL_3 << FLAGS_IOPL)
%define			MASK_FLAGS_IOPL_2	(FLAGS_IOPL_2 << FLAGS_IOPL)
%define			MASK_FLAGS_IOPL_1	(FLAGS_IOPL_1 << FLAGS_IOPL)
%define			MASK_FLAGS_IOPL_0	(FLAGS_IOPL_0 << FLAGS_IOPL)

;------------------------------------------------------------------------------
;	EFLAGS
;------------------------------------------------------------------------------

%define			EFLAGS_ID		21
%define			EFLAGS_VIP		20
%define			EFLAGS_VIF		19
%define			EFLAGS_AC		18
%define			EFLAGS_VM		17
%define			EFLAGS_RF		16
%define			EFLAGS_NT		FLAGS_NT
%define			EFLAGS_IOPL		FLAGS_IOPL
%define			EFLAGS_OF		FLAGS_OF
%define			EFLAGS_DF		FLAGS_DF
%define			EFLAGS_IF		FLAGS_IF
%define			EFLAGS_TF		FLAGS_TF
%define			EFLAGS_SF		FLAGS_SF
%define			EFLAGS_ZF		FLAGS_ZF
%define			EFLAGS_AF		FLAGS_AF
%define			EFLAGS_PF		FLAGS_PF
%define			EFLAGS_CF		FLAGS_CF

%define			EFLAGS_IOPL_3		FLAGS_IOPL_3
%define			EFLAGS_IOPL_2		FLAGS_IOPL_2
%define			EFLAGS_IOPL_1		FLAGS_IOPL_1
%define			EFLAGS_IOPL_0		FLAGS_IOPL_0

%define			MASK_EFLAGS_ID		(1 << EFLAGS_ID)
%define			MASK_EFLAGS_VIP		(1 << EFLAGS_VIP)
%define			MASK_EFLAGS_VIF		(1 << EFLAGS_VIF)
%define			MASK_EFLAGS_AC		(1 << EFLAGS_AC)
%define			MASK_EFLAGS_VM		(1 << EFLAGS_VM)
%define			MASK_EFLAGS_RF		(1 << EFLAGS_RF)
%define			MASK_EFLAGS_NT		(1 << EFLAGS_NT)
%define			MASK_EFLAGS_IOPL	(EFLAGS_IOPL_3 << EFLAGS_IOPL)
%define			MASK_EFLAGS_OF		(1 << EFLAGS_OF)
%define			MASK_EFLAGS_DF		(1 << EFLAGS_DF)
%define			MASK_EFLAGS_IF		(1 << EFLAGS_IF)
%define			MASK_EFLAGS_TF		(1 << EFLAGS_TF)
%define			MASK_EFLAGS_SF		(1 << EFLAGS_SF)
%define			MASK_EFLAGS_ZF		(1 << EFLAGS_ZF)
%define			MASK_EFLAGS_AF		(1 << EFLAGS_AF)
%define			MASK_EFLAGS_PF		(1 << EFLAGS_PF)
%define			MASK_EFLAGS_CF		(1 << EFLAGS_CF)

%define			MASK_EFLAGS_IOPL_3	(EFLAGS_IOPL_3 << EFLAGS_IOPL)
%define			MASK_EFLAGS_IOPL_2	(EFLAGS_IOPL_2 << EFLAGS_IOPL)
%define			MASK_EFLAGS_IOPL_1	(EFLAGS_IOPL_1 << EFLAGS_IOPL)
%define			MASK_EFLAGS_IOPL_0	(EFLAGS_IOPL_0 << EFLAGS_IOPL)

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
