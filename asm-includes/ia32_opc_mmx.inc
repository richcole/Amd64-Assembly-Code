; $Id: //depot/external/ia32_opc_mmx.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_MMX

%define 		INCLUDED_IA32_OPC_MMX	BOOL_TRUE

;------------------------------------------------------------------------------
;	MMX opcodes
;------------------------------------------------------------------------------

%define			OPC_MMX_PUNPCKLBW_Pq_Qd	OPC_2_60h
%define			OPC_MMX_PUNPCKLWD_Pq_Qd	OPC_2_61h
%define			OPC_MMX_PUNPCKLDQ_Pq_Qd	OPC_2_62h
%define			OPC_MMX_PACKSSWB_Pq_Qq	OPC_2_63h
%define			OPC_MMX_PCMPGTB_Pq_Qq	OPC_2_64h
%define			OPC_MMX_PCMPGTW_Pq_Qq	OPC_2_65h
%define			OPC_MMX_PCMPGTD_Pq_Qq	OPC_2_66h
%define			OPC_MMX_PACKUSWB_Pq_Qq	OPC_2_67h

%define			OPC_MMX_PUNPCKHBW_Pq_Qq	OPC_2_68h
%define			OPC_MMX_PUNPCKHWD_Pq_Qq	OPC_2_69h
%define			OPC_MMX_PUNPCKHDQ_Pq_Qq	OPC_2_6Ah
%define			OPC_MMX_PACKSSDW_Pq_Qq	OPC_2_6Bh
%define			OPC_MMX_MOVD_Pq_Ed	OPC_2_6Eh
%define			OPC_MMX_MOVQ_Pq_Qq	OPC_2_6Fh

%define			OPC_MMX_GRP13		OPC_2_71h
%define			 OPC_MMX_PSHIMW		OPC_MMX_GRP13
%define			OPC_MMX_GRP14		OPC_2_72h
%define			 OPC_MMX_PSHIMD		OPC_MMX_GRP14
%define			OPC_MMX_GRP15		OPC_2_73h
%define			 OPC_MMX_PSHIMQ		OPC_MMX_GRP15
%define			OPC_MMX_PCMPEQB_Pq_Qq	OPC_2_74h
%define			OPC_MMX_PCMPEQW_Pq_Qq	OPC_2_75h
%define			OPC_MMX_PCMPEQD_Pq_Qq	OPC_2_76h
%define			OPC_MMX_EMMS		OPC_2_77h

%define			OPC_MMX_MOVD_Ed_Pd	OPC_2_7Eh
%define			OPC_MMX_MOVQ_Qq_Pq	OPC_2_7Fh

%define			OPC_MMX_PSRLW_Pq_Qq	OPC_2_D1h
%define			OPC_MMX_PSRLD_Pq_Qq	OPC_2_D2h
%define			OPC_MMX_PSRLQ_Pq_Qq	OPC_2_D3h
%define			OPC_MMX_PMULLW_Pq_Qq	OPC_2_D5h

%define			OPC_MMX_PSUBUSB_Pq_Qq	OPC_2_D8h
%define			OPC_MMX_PSUBUSW_Pq_Qq	OPC_2_D9h
%define			OPC_MMX_PAND_Pq_Qq	OPC_2_DBh
%define			OPC_MMX_PADDUSB_Pq_Qq	OPC_2_DCh
%define			OPC_MMX_PADDUSW_Pq_Qq	OPC_2_DDh
%define			OPC_MMX_PANDN_Pq_Qq	OPC_2_DFh

%define			OPC_MMX_PSRAW_Pq_Qq	OPC_2_E1h
%define			OPC_MMX_PSRAD_Pq_Qq	OPC_2_E2h
%define			OPC_MMX_PMULHW_Pq_Qq	OPC_2_E5h

%define			OPC_MMX_PSUBSB_Pq_Qq	OPC_2_E8h
%define			OPC_MMX_PSUBSW_Pq_Qq	OPC_2_E9h
%define			OPC_MMX_POR_Pq_Qq	OPC_2_EBh
%define			OPC_MMX_PADDSB_Pq_Qq	OPC_2_ECh
%define			OPC_MMX_PADDSW_Pq_Qq	OPC_2_EDh
%define			OPC_MMX_PXOR_Pq_Qq	OPC_2_EFh

%define			OPC_MMX_PSLLW_Pq_Qq	OPC_2_F1h
%define			OPC_MMX_PSLLD_Pq_Qq	OPC_2_F2h
%define			OPC_MMX_PSLLQ_Pq_Qq	OPC_2_F3h
%define			OPC_MMX_PMADDWD_Pq_Qq	OPC_2_F5h

%define			OPC_MMX_PSUBB_Pq_Qq	OPC_2_F8h
%define			OPC_MMX_PSUBW_Pq_Qq	OPC_2_F9h
%define			OPC_MMX_PSUBD_Pq_Qq	OPC_2_FAh
%define			OPC_MMX_PADDB_Pq_Qq	OPC_2_FCh
%define			OPC_MMX_PADDW_Pq_Qq	OPC_2_FDh
%define			OPC_MMX_PADDD_Pq_Qq	OPC_2_FEh

;------------------------------------------------------------------------------
;	Cyrix extended MMX opcodes
;------------------------------------------------------------------------------

%define			OPC_MMX_PAVEB_Pq_Qq	OPC_2_50h
%define			OPC_MMX_PADDSIW_Pq_Qq	OPC_2_51h
%define			OPC_MMX_PMAGW_Pq_Qq	OPC_2_52h
%define			OPC_MMX_PDISTIB_Pq_Mq	OPC_2_54h
%define			OPC_MMX_PSUBSIW_Pq_Qq	OPC_2_55h

%define			OPC_MMX_PMVZB_Pq_Mq	OPC_2_58h
%define			OPC_MMX_PMULHRW_Pq_Qq	OPC_2_59h
%define			OPC_MMX_PMVNZB_Pq_Mq	OPC_2_5Ah
%define			OPC_MMX_PMVLZB_Pq_Mq	OPC_2_5Bh
%define			OPC_MMX_PMVGEZB_Pq_Mq	OPC_2_5Ch
%define			OPC_MMX_PMULHRIW_Pq_Qq	OPC_2_5Dh
%define			OPC_MMX_PMACHRIW_Pq_Mq	OPC_2_5Eh

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
