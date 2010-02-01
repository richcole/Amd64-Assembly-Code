; $Id: //depot/external/ia32_opc_k3d.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_K3D

%define 		INCLUDED_IA32_OPC_K3D	BOOL_TRUE

;------------------------------------------------------------------------------
;	3DNow! opcodes
;------------------------------------------------------------------------------

%define			OPC_K3D_PREFETCH	OPC_2_0Dh
%define			 OPC_K3D_PREFETCH_M	0
%define			 OPC_K3D_PREFETCHW_M	1
%define			OPC_K3D_FEMMS		OPC_2_0Eh
%define			OPC_K3D_PREFIX		OPC_2_0Fh

;------------------------------------------------------------------------------
;	3DNow! opcode suffixes
;------------------------------------------------------------------------------

%define			OPC_K3D_PI2FD_Pq_Qq	0Dh
%define			OPC_K3D_PF2ID_Pq_Qq	1Dh

%define			OPC_K3D_PFCMPGE_Pq_Qq	90h
%define			OPC_K3D_PFMIN_Pq_Qq	94h
%define			OPC_K3D_PFRCP_Pq_Qq	96h
%define			OPC_K3D_PFRSQRT_Pq_Qq	97h

%define			OPC_K3D_PFSUB_Pq_Qq	9Ah
%define			OPC_K3D_PFADD_Pq_Qq	9Eh

%define			OPC_K3D_PFCMPGT_Pq_Qq	0A0h
%define			OPC_K3D_PFMAX_Pq_Qq	0A4h
%define			OPC_K3D_PFRCPIT1_Pq_Qq	0A6h
%define			OPC_K3D_PFRSQIT1_Pq_Qq	0A7h

%define			OPC_K3D_PFSUBR_Pq_Qq	0AAh
%define			OPC_K3D_PFACC_Pq_Qq	0AEh

%define			OPC_K3D_PFCMPEQ_Pq_Qq	0B0h
%define			OPC_K3D_PFMUL_Pq_Qq	0B4h
%define			OPC_K3D_PFRCPIT2_Pq_Qq	0B6h
%define			OPC_K3D_PMULHRW_Pq_Qq	0B7h

%define			OPC_K3D_PAVGUSB_Pq_Qq	0BFh

;------------------------------------------------------------------------------
;	extended 3DNow! opcodes
;------------------------------------------------------------------------------

%define			OPC_K3D_PSHUFW_Pq_Qq_Ib	OPC_SSE_PSHUFW_Pq_Qq_Ib

%define			OPC_K3D_PINSRW_Pq_Ed_Ib	OPC_SSE_PINSRW_Pq_Ed_Ib
%define			OPC_K3D_PEXTRW_Gd_Pq_Ib	OPC_SSE_PEXTRW_Gd_Pq_Ib

%define			OPC_K3D_PMOVMSKB_Gd_Pq	OPC_SSE_PMOVMSKB_Gd_Pq

%define			OPC_K3D_PMINUB_Pq_Qq	OPC_SSE_PMINUB_Pq_Qq
%define			OPC_K3D_PMAXUB_Pq_Qq	OPC_SSE_PMAXUB_Pq_Qq

%define			OPC_K3D_PAVGB_Pq_Qq	OPC_SSE_PAVGB_Pq_Qq

%define			OPC_K3D_PAVGW_Pq_Qq	OPC_SSE_PAVGW_Pq_Qq
%define			OPC_K3D_PMULHUW_Pq_Qq	OPC_SSE_PMULHUW_Pq_Qq
%define			OPC_K3D_MOVNTQ_Wq_Vq	OPC_SSE_MOVNTQ_Wq_Vq

%define			OPC_K3D_PMINSW_Pq_Qq	OPC_SSE_PMINSW_Pq_Qq
%define			OPC_K3D_PMAXSW_Pq_Qq	OPC_SSE_PMAXSW_Pq_Qq

%define			OPC_K3D_PSADBW_Pq_Qq	OPC_SSE_PSADBW_Pq_Qq
%define			OPC_K3D_MASKMOVQ_Pq_Pq	OPC_SSE_MASKMOVQ_Pq_Pq

;------------------------------------------------------------------------------
;	extended 3DNow! opcode suffixes
;------------------------------------------------------------------------------

%define			OPC_K3D_PI2FW_Pq_Qq	0Ch
%define			OPC_K3D_PF2IW_Pq_Qq	1Ch

%define			OPC_K3D_PFNACC_Pq_Qq	8Ah
%define			OPC_K3D_PFPNACC_Pq_Qq	8Eh

%define			OPC_K3D_PSWAPD_Pq_Qq	0BBh

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
