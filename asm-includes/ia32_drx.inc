; $Id: //depot/external/ia32_drx.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_DRx

%define 		INCLUDED_IA32_DRx	BOOL_TRUE

;------------------------------------------------------------------------------
;	DR6
;------------------------------------------------------------------------------

%define			DR6_BT			15
%define			DR6_BS			14
%define			DR6_BD			13
%define			DR6_SMM			12
%define			DR6_B3			3
%define			DR6_B2			2
%define			DR6_B1			1
%define			DR6_B0			0

%define			MASK_DR6_BT		(1 << DR6_BT)
%define			MASK_DR6_BS		(1 << DR6_BS)
%define			MASK_DR6_BD		(1 << DR6_BD)
%define			MASK_DR6_SMM		(1 << DR6_SMM)
%define			MASK_DR6_B3		(1 << DR6_B3)
%define			MASK_DR6_B2		(1 << DR6_B2)
%define			MASK_DR6_B1		(1 << DR6_B1)
%define			MASK_DR6_B0		(1 << DR6_B0)

;------------------------------------------------------------------------------
;	DR7
;------------------------------------------------------------------------------

%define			DR7_LEN3		30
%define			DR7_RW3			28
%define			DR7_LEN2		26
%define			DR7_RW2			24
%define			DR7_LEN1		22
%define			DR7_RW1			20
%define			DR7_LEN0		18
%define			DR7_RW0			16
%define			DR7_TT			15
%define			DR7_TB			14
%define			DR7_GD			13
%define			DR7_ICE			12
%define			DR7_GE			9
%define			DR7_LE			8
%define			DR7_G3			7
%define			DR7_L3			6
%define			DR7_G2			5
%define			DR7_L2			4
%define			DR7_G1			3
%define			DR7_L1			2
%define			DR7_G0			1
%define			DR7_L0			0

%define			DR7_LEN_DWORD		3
%define			DR7_LEN_RESERVED	2
%define			DR7_LEN_WORD		1
%define			DR7_LEN_BYTE		0

%define			DR7_RW_DATA_RW		3
%define			DR7_RW_IO_RW		2
%define			DR7_RW_DATA_W		1
%define			DR7_RW_CODE		0

%define			MASK_DR7_LEN3		(DR7_LEN_DWORD << DR7_LEN3)
%define			MASK_DR7_RW3		(DR7_RW_DATA_RW << DR7_RW3)
%define			MASK_DR7_LEN2		(DR7_LEN_DWORD << DR7_LEN2)
%define			MASK_DR7_RW2		(DR7_RW_DATA_RW << DR7_RW2)
%define			MASK_DR7_LEN1		(DR7_LEN_DWORD << DR7_LEN1)
%define			MASK_DR7_RW1		(DR7_RW_DATA_RW << DR7_RW1)
%define			MASK_DR7_LEN0		(DR7_LEN_DWORD << DR7_LEN0)
%define			MASK_DR7_RW0		(DR7_RW_DATA_RW << DR7_RW0)
%define			MASK_DR7_TT		(1 << DR7_TT)
%define			MASK_DR7_TB		(1 << DR7_TB)
%define			MASK_DR7_GD		(1 << DR7_GD)
%define			MASK_DR7_ICE		(1 << DR7_ICE)
%define			MASK_DR7_GE		(1 << DR7_GE)
%define			MASK_DR7_LE		(1 << DR7_LE)
%define			MASK_DR7_G3		(1 << DR7_G3)
%define			MASK_DR7_L3		(1 << DR7_L3)
%define			MASK_DR7_G2		(1 << DR7_G2)
%define			MASK_DR7_L2		(1 << DR7_L2)
%define			MASK_DR7_G1		(1 << DR7_G1)
%define			MASK_DR7_L1		(1 << DR7_L1)
%define			MASK_DR7_G0		(1 << DR7_G0)
%define			MASK_DR7_L0		(1 << DR7_L0)

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
