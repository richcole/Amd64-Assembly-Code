; $Id: //depot/external/ia32_opc_sse.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_SSE

%define 		INCLUDED_IA32_OPC_SSE	BOOL_TRUE

;------------------------------------------------------------------------------
;	SSE opcodes
;------------------------------------------------------------------------------

%define			OPC_SSE_MOVUPS_Vps_Wps	OPC_2_10h
%define			OPC_SSE_MOVSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_MOVUPS_Vps_Wps
%define			OPC_SSE_MOVUPS_Wps_Vps	OPC_2_11h
%define			OPC_SSE_MOVSS_Wss_Vss	OPC_1_REP_PREFIX,OPC_SSE_MOVUPS_Wps_Vps
%define			OPC_SSE_MOVLPS_Vq_Wq	OPC_2_12h
%define			OPC_SSE_MOVHLSS_Vq_Vq	OPC_1_REP_PREFIX,OPC_SSE_MOVLPS_Vq_Wq
%define			OPC_SEE_MOVLPS_Wq_Vq	OPC_2_13h
%define			OPC_SEE_UNPCKLPS_Vq_Wq	OPC_2_14h
%define			OPC_SEE_UNPCKHPS_Vq_Wq	OPC_2_15h
%define			OPC_SSE_MOVHPS_Vq_Wq	OPC_2_16h
%define			OPC_SSE_MOVLHPS_Vq_Vq	OPC_1_REP_PREFIX,OPC_SSE_MOVHPS_Vq_Wq
%define			OPC_SSE_MOVHPS_Wq_Vq	OPC_2_17h

%define			OPC_SSE_MOVAPS_Vps_Wps	OPC_2_28h
%define			OPC_SSE_MOVAPS_Wps_Vps	OPC_2_29h
%define			OPC_SSE_CVTPI2PS_Vps_Qq	OPC_2_2Ah
%define			OPC_SSE_CVTSI2SS_Vss_Qq	OPC_1_REP_PREFIX,OPC_SSE_CVTPI2PS_Vps_Qq
%define			OPC_SSE_MOVNTPS_Wps_Vps	OPC_2_2Bh
%define			OPC_SSE_CVTTPS2PI_Qq_Wps OPC_2_2Ch
%define			OPC_SSE_CVTTSS2SI_Gd_Wss OPC_1_REP_PREFIX,OPC_SSE_CVTTPS2PI_Qq_Wps
%define			OPC_SSE_CVTPS2PI_Qq_Wps	OPC_2_2Dh
%define			OPC_SSE_CVTSS2SI_Gd_Wss	OPC_1_REP_PREFIX,OPC_SSE_CVTPS2PI_Qq_Wps
%define			OPC_SSE_UCOMISS_Vss_Wss	OPC_2_2Eh
%define			OPC_SSE_COMISS_Vps_Wps	OPC_2_2Fh

%define			OPC_SSE_MOVMSKPS_Ed_Vps	OPC_2_50h
%define			OPC_SSE_SQRTPS_Vps_Wps	OPC_2_51h
%define			OPC_SSE_SQRTSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_SQRTPS_Vps_Wps
%define			OPC_SSE_RSQRTPS_Vps_Wps	OPC_2_52h
%define			OPC_SSE_RSQRTSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_RSQRTPS_Vps_Wps
%define			OPC_SSE_RCPPS_Vps_Wps	OPC_2_53h
%define			OPC_SSE_RCPSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_RCPPS_Vps_Wps
%define			OPC_SSE_ANDPS_Vps_Wps	OPC_2_54h
%define			OPC_SSE_ANDNPS_Vps_Wps	OPC_2_55h
%define			OPC_SSE_ORPS_Vps_Wps	OPC_2_56h
%define			OPC_SSE_XORPS_Vps_Wps	OPC_2_57h

%define			OPC_SSE_ADDPS_Vps_Wps	OPC_2_58h
%define			OPC_SSE_ADDSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_ADDPS_Vps_Wps
%define			OPC_SSE_MULPS_Vps_Wps	OPC_2_59h
%define			OPC_SSE_MULSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_MULPS_Vps_Wps
%define			OPC_SSE_SUBPS_Vps_Wps	OPC_2_5Ch
%define			OPC_SSE_SUBSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_SUBPS_Vps_Wps
%define			OPC_SSE_MINPS_Vps_Wps	OPC_2_5Dh
%define			OPC_SSE_MINSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_MINPS_Vps_Wps
%define			OPC_SSE_DIVPS_Vps_Wps	OPC_2_5Eh
%define			OPC_SSE_DIVSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_DIVPS_Vps_Wps
%define			OPC_SSE_MAXPS_Vps_Wps	OPC_2_5Fh
%define			OPC_SSE_MAXSS_Vss_Wss	OPC_1_REP_PREFIX,OPC_SSE_MAXPS_Vps_Wps

%define			OPC_SSE_PSHUFW_Pq_Qq_Ib	OPC_2_70h

%define			OPC_SSE_CMPccPS_Vps_Wps_Ib OPC_2_C2h
%define			OPC_SSE_CMPccSS_Vss_Wss_Ib OPC_1_REP_PREFIX,OPC_SSE_CMPccPS_Vps_Wps_Ib
%define			 OPC_SSE_CMPEQ_SUFFIX	00h
%define			 OPC_SSE_CMPLT_SUFFIX	01h
%define			 OPC_SSE_CMPLE_SUFFIX	02h
%define			 OPC_SSE_CMPUNORD_SUFFIX 03h
%define			 OPC_SSE_CMPNEQ_SUFFIX	04h
%define			 OPC_SSE_CMPNLT_SUFFIX	05h
%define			 OPC_SSE_CMPNLE_SUFFIX	06h
%define			 OPC_SSE_CMPORD_SUFFIX	07h
%define			OPC_SSE_PINSRW_Pq_Ed_Ib	OPC_2_C4h
%define			OPC_SSE_PEXTRW_Gd_Pq_Ib	OPC_2_C5h
%define			OPC_SSE_SHUFPS_Vps_Wps_Ib OPC_2_C6h

%define			OPC_SSE_PMOVMSKB_Gd_Pq	OPC_2_D7h

%define			OPC_SSE_PMINUB_Pq_Qq	OPC_2_DAh
%define			OPC_SSE_PMAXUB_Pq_Qq	OPC_2_DEh

%define			OPC_SSE_PAVGB_Pq_Qq	OPC_2_E0h
%define			OPC_SSE_PAVGW_Pq_Qq	OPC_2_E3h
%define			OPC_SSE_PMULHUW_Pq_Qq	OPC_2_E4h
%define			OPC_SSE_MOVNTQ_Wq_Vq	OPC_2_E7h

%define			OPC_SSE_PMINSW_Pq_Qq	OPC_2_EAh
%define			OPC_SSE_PMAXSW_Pq_Qq	OPC_2_EEh

%define			OPC_SSE_PSADBW_Pq_Qq	OPC_2_F6h
%define			OPC_SSE_MASKMOVQ_Pq_Pq	OPC_2_F7h

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
