; $Id: //depot/external/ia32_opc_1.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_1

%define 		INCLUDED_IA32_OPC_1	BOOL_TRUE

;------------------------------------------------------------------------------
;	1 byte opcodes
;------------------------------------------------------------------------------

%define			OPC_1_ADD_Eb_Gb		00h
%define			OPC_1_ADD_Ev_Gv		01h
%define			OPC_1_ADD_Gb_Eb		02h
%define			OPC_1_ADD_Gv_Ev		03h
%define			OPC_1_ADD_AL_Ib		04h
%define			OPC_1_ADD_eAX_Iv	05h
%define			OPC_1_PUSH_ES		06h
%define			OPC_1_POP_ES		07h

%define			OPC_1_OR_Eb_Gb		08h
%define			OPC_1_OR_Ev_Gv		09h
%define			OPC_1_OR_Gb_Eb		0Ah
%define			OPC_1_OR_Gv_Ev		0Bh
%define			OPC_1_OR_AL_Ib		0Ch
%define			OPC_1_OR_eAX_Iv		0Dh
%define			OPC_1_PUSH_CS		0Eh
%define			OPC_1_0Fh		0Fh
%define			 OPC_1_POP_CS		OPC_1_0Fh
%define			 OPC_1_OPC_2_PREFIX	OPC_1_0Fh

%define			OPC_1_ADC_Eb_Gb		10h
%define			OPC_1_ADC_Ev_Gv		11h
%define			OPC_1_ADC_Gb_Eb		12h
%define			OPC_1_ADC_Gv_Ev		13h
%define			OPC_1_ADC_AL_Ib		14h
%define			OPC_1_ADC_eAX_Iv	15h
%define			OPC_1_PUSH_SS		16h
%define			OPC_1_POP_SS		17h

%define			OPC_1_SBB_Eb_Gb		18h
%define			OPC_1_SBB_Ev_Gv		19h
%define			OPC_1_SBB_Gb_Eb		1Ah
%define			OPC_1_SBB_Gv_Ev		1Bh
%define			OPC_1_SBB_AL_Ib		1Ch
%define			OPC_1_SBB_eAX_Iv	1Dh
%define			OPC_1_PUSH_DS		1Eh
%define			OPC_1_POP_DS		1Fh

%define			OPC_1_AND_Eb_Gb		20h
%define			OPC_1_AND_Ev_Gv		21h
%define			OPC_1_AND_Gb_Eb		22h
%define			OPC_1_AND_Gv_Ev		23h
%define			OPC_1_AND_AL_Ib		24h
%define			OPC_1_AND_eAX_Iv	25h
%define			OPC_1_ES_PREFIX		26h
%define			OPC_1_DAA		27h

%define			OPC_1_SUB_Eb_Gb		28h
%define			OPC_1_SUB_Ev_Gv		29h
%define			OPC_1_SUB_Gb_Eb		2Ah
%define			OPC_1_SUB_Gv_Ev		2Bh
%define			OPC_1_SUB_AL_Ib		2Ch
%define			OPC_1_SUB_eAX_Iv	2Dh
%define			OPC_1_CS_PREFIX		2Eh
%define			OPC_1_DAS		2Fh

%define			OPC_1_XOR_Eb_Gb		30h
%define			OPC_1_XOR_Ev_Gv		31h
%define			OPC_1_XOR_Gb_Eb		32h
%define			OPC_1_XOR_Gv_Ev		33h
%define			OPC_1_XOR_AL_Ib		34h
%define			OPC_1_XOR_eAX_Iv	35h
%define			OPC_1_SS_PREFIX		36h
%define			OPC_1_AAA		37h

%define			OPC_1_CMP_Eb_Gb		38h
%define			OPC_1_CMP_Ev_Gv		39h
%define			OPC_1_CMP_Gb_Eb		3Ah
%define			OPC_1_CMP_Gv_Ev		3Bh
%define			OPC_1_CMP_AL_Ib		3Ch
%define			OPC_1_CMP_eAX_Iv	3Dh
%define			OPC_1_DS_PREFIX		3Eh
%define			OPC_1_AAS		3Fh

%define			OPC_1_INC_eAX		40h
%define			OPC_1_INC_eCX		41h
%define			OPC_1_INC_eDX		42h
%define			OPC_1_INC_eBX		43h
%define			OPC_1_INC_eSP		44h
%define			OPC_1_INC_eBP		45h
%define			OPC_1_INC_eSI		46h
%define			OPC_1_INC_eDI		47h

%define			OPC_1_DEC_eAX		48h
%define			OPC_1_DEC_eCX		49h
%define			OPC_1_DEC_eDX		4Ah
%define			OPC_1_DEC_eBX		4Bh
%define			OPC_1_DEC_eSP		4Ch
%define			OPC_1_DEC_eBP		4Dh
%define			OPC_1_DEC_eSI		4Eh
%define			OPC_1_DEC_eDI		4Fh

%define			OPC_1_PUSH_eAX		50h
%define			OPC_1_PUSH_eCX		51h
%define			OPC_1_PUSH_eDX		52h
%define			OPC_1_PUSH_eBX		53h
%define			OPC_1_PUSH_eSP		54h
%define			OPC_1_PUSH_eBP		55h
%define			OPC_1_PUSH_eSI		56h
%define			OPC_1_PUSH_eDI		57h

%define			OPC_1_POP_eAX		58h
%define			OPC_1_POP_eCX		59h
%define			OPC_1_POP_eDX		5Ah
%define			OPC_1_POP_eBX		5Bh
%define			OPC_1_POP_eSP		5Ch
%define			OPC_1_POP_eBP		5Dh
%define			OPC_1_POP_eSI		5Eh
%define			OPC_1_POP_eDI		5Fh

%define			OPC_1_PUSHA		60h
%define			 OPC_1_PUSHAW		OPC_1_PUSHA
%define			 OPC_1_PUSHAD		OPC_1_PUSHA
%define			OPC_1_POPA		61h
%define			 OPC_1_POPAW		OPC_1_POPA
%define			 OPC_1_POPAD		OPC_1_POPA
%define			OPC_1_BOUND_Gv_Ma	62h
%define			OPC_1_ARPL_Ew_Rw	63h
%define			OPC_1_FS_PREFIX		64h
%define			OPC_1_GS_PREFIX		65h
%define			OPC_1_OPSIZE_PREFIX	66h
%define			OPC_1_ADSIZE_PREFIX	67h

%define			OPC_1_PUSH_Iv		68h
%define			OPC_1_IMUL_Gv_Ev_Iv	69h
%define			OPC_1_PUSH_Ib		6Ah
%define			OPC_1_IMUL_Gv_Ev_Ib	6Bh
%define			OPC_1_INS_Yb_DX		6Ch
%define			 OPC_1_INSB_Yb_DX	OPC_1_INS_Yb_DX
%define			OPC_1_INS_Yv_DX		6Dh
%define			 OPC_1_INSW_Yv_DX	OPC_1_INS_Yv_DX
%define			 OPC_1_INSD_Yv_DX	OPC_1_INS_Yv_DX
%define			OPC_1_OUTS_DX_Xb	6Eh
%define			 OPC_1_OUTSB_DX_Xb	OPC_1_OUTS_DX_Xb
%define			OPC_1_OUTS_DX_Xv	6Fh
%define			 OPC_1_OUTSW_DX_Xv	OPC_1_OUTS_DX_Xv
%define			 OPC_1_OUTSD_DX_Xv	OPC_1_OUTS_DX_Xv

%define			OPC_1_JO_Jb		70h
%define			OPC_1_JNO_Jb		71h
%define			OPC_1_JB_Jb		72h
%define			 OPC_1_JC_Jb		OPC_1_JB_Jb
%define			 OPC_1_JNAE_Jb		OPC_1_JB_Jb
%define			OPC_1_JNB_Jb		73h
%define			 OPC_1_JNC_Jb		OPC_1_JNB_Jb
%define			 OPC_1_JAE_Jb		OPC_1_JNB_Jb
%define			OPC_1_JZ_Jb		74h
%define			 OPC_1_JE_Jb		OPC_1_JZ_Jb
%define			OPC_1_JNZ_Jb		75h
%define			 OPC_1_JNE_Jb		OPC_1_JNZ_Jb
%define			OPC_1_JBE_Jb		76h
%define			 OPC_1_JNA_Jb		OPC_1_JBE_Jb
%define			OPC_1_JNBE_Jb		77h
%define			 OPC_1_JA_Jb		OPC_1_JNBE_Jb

%define			OPC_1_JS_Jb		78h
%define			OPC_1_JNS_Jb		79h
%define			OPC_1_JP_Jb		7Ah
%define			 OPC_1_JPE_Jb		OPC_1_JP_Jb
%define			OPC_1_JNP_Jb		7Bh
%define			 OPC_1_JPO_Jb		OPC_1_JNP_Jb
%define			OPC_1_JL_Jb		7Ch
%define			 OPC_1_JNGE_Jb		OPC_1_JL_Jb
%define			OPC_1_JNL_Jb		7Dh
%define			 OPC_1_JGE_Jb		OPC_1_JNL_Jb
%define			OPC_1_JLE_Jb		7Eh
%define			 OPC_1_JNG_Jb		OPC_1_JLE_Jb
%define			OPC_1_JNLE_Jb		7Fh
%define			 OPC_1_JG_Jb		OPC_1_JNLE_Jb

%define			OPC_1_GRP1_Eb_Ib	80h
%define			OPC_1_GRP1_Ev_Iv	81h
%define			OPC_1_GRP1_Eb_Ib_ALIAS	82h
%define			OPC_1_GRP1_Ev_Ib	83h
%define			OPC_1_TEST_Eb_Gb	84h
%define			OPC_1_TEST_Ev_Gv	85h
%define			OPC_1_XCHG_Eb_Gb	86h
%define			OPC_1_XCHG_Ev_Gv	87h

%define			OPC_1_MOV_Eb_Gb		88h
%define			OPC_1_MOV_Ev_Gv		89h
%define			OPC_1_MOV_Gb_Eb		8Ah
%define			OPC_1_MOV_Gv_Ev		8Bh
%define			OPC_1_MOV_Ew_Sw		8Ch
%define			OPC_1_LEA_Gv_M		8Dh
%define			OPC_1_MOV_Sw_Ew		8Eh
%define			OPC_1_POP_Ev		8Fh

%define			OPC_1_XCHG_eAX_eAX	90h
%define			 OPC_1_NOP		OPC_1_XCHG_eAX_eAX
%define			OPC_1_XCHG_eCX_eAX	91h
%define			OPC_1_XCHG_eDX_eAX	92h
%define			OPC_1_XCHG_eBX_eAX	93h
%define			OPC_1_XCHG_eSP_eAX	94h
%define			OPC_1_XCHG_eBP_eAX	95h
%define			OPC_1_XCHG_eSI_eAX	96h
%define			OPC_1_XCHG_eDI_eAX	97h

%define			OPC_1_CBW		98h
%define			 OPC_1_CWDE		OPC_1_CBW
%define			OPC_1_CWD		99h
%define			 OPC_1_CDQ		OPC_1_CWD
%define			OPC_1_CALL_Ap		9Ah
%define			OPC_1_WAIT		9Bh
%define			 OPC_1_FWAIT		OPC_1_WAIT
%define			OPC_1_PUSHF_Fv		9Ch
%define			 OPC_1_PUSHFD_Fv	OPC_1_PUSHF_Fv
%define			OPC_1_POPF_Fv		9Dh
%define			 OPC_1_POPFD_Fv		OPC_1_POPF_Fv
%define			OPC_1_SAHF		9Eh
%define			OPC_1_LAHF		9Fh

%define			OPC_1_MOV_AL_Ob		0A0h
%define			OPC_1_MOV_eAX_Ov	0A1h
%define			OPC_1_MOV_Ob_AL		0A2h
%define			OPC_1_MOV_Ov_eAX	0A3h
%define			OPC_1_MOVS_Xb_Yb	0A4h
%define			 OPC_1_MOVSB_Xb_Yb	OPC_1_MOVS_Xb_Yb
%define			OPC_1_MOVS_Xv_Yv	0A5h
%define			 OPC_1_MOVSW_Xv_Yv	OPC_1_MOVS_Xv_Yv
%define			 OPC_1_MOVSD_Xv_Yv	OPC_1_MOVS_Xv_Yv
%define			OPC_1_CMPS_Xb_Yb	0A6h
%define			 OPC_1_CMPSB_Xb_Yb	OPC_1_CMPS_Xb_Yb
%define			OPC_1_CMPS_Xv_Yv	0A7h
%define			 OPC_1_CMPSW_Xv_Yv	OPC_1_CMPS_Xv_Yv
%define			 OPC_1_CMPSD_Xv_Yv	OPC_1_CMPS_Xv_Yv

%define			OPC_1_TEST_AL_Ib	0A8h
%define			OPC_1_TEST_eAX_Iv	0A9h
%define			OPC_1_STOS_Yb_AL	0AAh
%define			 OPC_1_STOSB_Yb_AL	OPC_1_STOS_Yb_AL
%define			OPC_1_STOS_Yv_eAX	0ABh
%define			 OPC_1_STOSW_Yv_eAX	OPC_1_STOS_Yv_eAX
%define			 OPC_1_STOSD_Yv_eAX	OPC_1_STOS_Yv_eAX
%define			OPC_1_LODS_Yb_AL	0ACh
%define			 OPC_1_LODSB_Yb_AL	OPC_1_LODS_Yb_AL
%define			OPC_1_LODS_Yv_eAX	0ADh
%define			 OPC_1_LODSW_Yv_eAX	OPC_1_LODS_Yv_eAX
%define			 OPC_1_LODSD_Yv_eAX	OPC_1_LODS_Yv_eAX
%define			OPC_1_SCAS_Yb_AL	0AEh
%define			 OPC_1_SCASB_Yb_AL	OPC_1_SCAS_Yb_AL
%define			OPC_1_SCAS_Yv_eAX	0AFh
%define			 OPC_1_SCASW_Yv_eAX	OPC_1_SCAS_Yv_eAX
%define			 OPC_1_SCASD_Yv_eAX	OPC_1_SCAS_Yv_eAX

%define			OPC_1_MOV_AL_Ib		0B0h
%define			OPC_1_MOV_CL_Ib		0B1h
%define			OPC_1_MOV_DL_Ib		0B2h
%define			OPC_1_MOV_BL_Ib		0B3h
%define			OPC_1_MOV_AH_Ib		0B4h
%define			OPC_1_MOV_CH_Ib		0B5h
%define			OPC_1_MOV_DH_Ib		0B6h
%define			OPC_1_MOV_BH_Ib		0B7h

%define			OPC_1_MOV_eAX_Iv	0B8h
%define			OPC_1_MOV_eCX_Iv	0B9h
%define			OPC_1_MOV_eDX_Iv	0BAh
%define			OPC_1_MOV_eBX_Iv	0BCh
%define			OPC_1_MOV_eSP_Iv	0BBh
%define			OPC_1_MOV_eBP_Iv	0BDh
%define			OPC_1_MOV_eSI_Iv	0BEh
%define			OPC_1_MOV_eDI_Iv	0BFh

%define			OPC_1_GRP2_Eb_Ib	0C0h
%define			OPC_1_GRP2_Ev_Ib	0C1h
%define			OPC_1_RET_Iw		0C2h
%define			OPC_1_RET		0C3h
%define			OPC_1_LES_Gv_Mp		0C4h
%define			OPC_1_LDS_Gv_Mp		0C5h
%define			OPC_1_GRP12_Eb_Ib	0C6h
%define			OPC_1_GRP12_Ev_Iv	0C7h

%define			OPC_1_ENTER_Iw_Ib	0C8h
%define			OPC_1_LEAVE		0C9h
%define			OPC_1_RETF_Iw		0CAh
%define			OPC_1_RETF		0CBh
%define			OPC_1_INT3		0CCh
%define			 OPC_1_INT03		OPC_1_INT3
%define			 OPC_1_BP		OPC_1_INT3
%define			OPC_1_INT_Ib		0CDh
%define			OPC_1_INTO		0CEh
%define			OPC_1_IRET		0CFh
%define			 OPC_1_IRETD		OPC_1_IRET

%define			OPC_1_GRP2_Eb_1		0D0h
%define			OPC_1_GRP2_Ev_1		0D1h
%define			OPC_1_GRP2_Eb_CL	0D2h
%define			OPC_1_GRP2_Ev_CL	0D3h
%define			OPC_1_AAM		0D4h
%define			OPC_1_AAD		0D5h
%define			OPC_1_SALC		0D6h
%define			 OPC_1_SETALC		OPC_1_SALC
%define			OPC_1_XLAT		0D7h

%define			OPC_1_ESC0		0D8h
%define			OPC_1_ESC1		0D9h
%define			OPC_1_ESC2		0DAh
%define			OPC_1_ESC3		0DBh
%define			OPC_1_ESC4		0DCh
%define			OPC_1_ESC5		0DDh
%define			OPC_1_ESC6		0DEh
%define			OPC_1_ESC7		0DFh

%define			OPC_1_LOOPNE_Jb		0E0h
%define			 OPC_1_LOOPNZ_Jb	OPC_1_LOOPNE_Jb
%define			OPC_1_LOOPE_Jb		0E1h
%define			 OPC_1_LOOPZ_Jb		OPC_1_LOOPE_Jb
%define			OPC_1_LOOP_Jb		0E2h
%define			OPC_1_JECX_Jb		0E3h
%define			 OPC_1_JCXZ_Jb		OPC_1_JECX_Jb
%define			OPC_1_IN_AL_Ib		0E4h
%define			OPC_1_IN_eAX_Ib		0E5h
%define			OPC_1_OUT_Ib_AL		0E6h
%define			OPC_1_OUT_Ib_eAX	0E7h

%define			OPC_1_CALL_Jv		0E8h
%define			OPC_1_JMP_Jv		0E9h
%define			OPC_1_JMP_Ap		0EAh
%define			OPC_1_JMP_Jb		0EBh
%define			OPC_1_IN_AL_DX		0ECh
%define			OPC_1_IN_eAX_DX		0EDh
%define			OPC_1_OUT_DX_AL		0EEh
%define			OPC_1_OUT_DX_eAX	0EFh

%define			OPC_1_LOCK_PREFIX	0F0h
%define			OPC_1_INT1		0F1h
%define			 OPC_1_INT01		OPC_1_INT1
%define			 OPC_1_ICEBP		OPC_1_INT1
%define			OPC_1_REPNE_PREFIX	0F2h
%define			OPC_1_REPE_PREFIX	0F3h
%define			 OPC_1_REP_PREFIX	OPC_1_REPE_PREFIX
%define			OPC_1_HLT		0F4h
%define			OPC_1_CMC		0F5h
%define			OPC_1_GRP3_Eb		0F6h
%define			OPC_1_GRP3_Ev		0F7h

%define			OPC_1_CLC		0F8h
%define			OPC_1_STC		0F9h
%define			OPC_1_CLI		0FAh
%define			OPC_1_STI		0FBh
%define			OPC_1_CLD		0FCh
%define			OPC_1_STD		0FDh
%define			OPC_1_GRP4		0FEh
%define			OPC_1_GRP5		0FFh

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
