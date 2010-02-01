; $Id: //depot/external/ia32_opc_2.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_2

%define 		INCLUDED_IA32_OPC_2	BOOL_TRUE

;------------------------------------------------------------------------------
;	2 byte opcodes
;------------------------------------------------------------------------------

%define			OPC_2_PREFIX		OPC_1_OPC_2_PREFIX

%define			OPC_2_GRP6		OPC_2_PREFIX,00h
%define			OPC_2_GRP7		OPC_2_PREFIX,01h
%define			OPC_2_LAR_Gv_Ew		OPC_2_PREFIX,02h
%define			OPC_2_LSL_Gv_Ew		OPC_2_PREFIX,03h
%define			OPC_2_04h		OPC_2_PREFIX,04h
%define			OPC_2_05h		OPC_2_PREFIX,05h
%define			 OPC_2_LOADALL286	OPC_2_05h
%define			 OPC_2_SYSCALL		OPC_2_05h
%define			OPC_2_CLTS		OPC_2_PREFIX,06h
%define			OPC_2_07h		OPC_2_PREFIX,07h
%define			 OPC_2_LOADALL386	OPC_2_07h
%define			 OPC_2_SYSRET		OPC_2_07h

%define			OPC_2_INVD		OPC_2_PREFIX,08h
%define			OPC_2_WBINVD		OPC_2_PREFIX,09h
%define			OPC_2_0Ah		OPC_2_PREFIX,0Ah
%define			OPC_2_UD2		OPC_2_PREFIX,0Bh
%define			OPC_2_0Ch		OPC_2_PREFIX,0Ch
%define			OPC_2_0Dh		OPC_2_PREFIX,0Dh
%define			OPC_2_0Eh		OPC_2_PREFIX,0Eh
%define			OPC_2_0Fh		OPC_2_PREFIX,0Fh
%define			 OPC_2_3DNOW_PREFIX	OPC_2_0Fh

%define			OPC_2_10h		OPC_2_PREFIX,10h
%define			 OPC_2_UMOV_Eb_Gb	OPC_2_10h
%define			OPC_2_11h		OPC_2_PREFIX,11h
%define			 OPC_2_UMOV_Ev_Gv	OPC_2_11h
%define			OPC_2_12h		OPC_2_PREFIX,12h
%define			 OPC_2_UMOV_Gb_Eb	OPC_2_12h
%define			OPC_2_13h		OPC_2_PREFIX,13h
%define			 OPC_2_UMOV_Gv_Ev	OPC_2_13h
%define			OPC_2_14h		OPC_2_PREFIX,14h
%define			OPC_2_15h		OPC_2_PREFIX,15h
%define			OPC_2_16h		OPC_2_PREFIX,16h
%define			OPC_2_17h		OPC_2_PREFIX,17h

%define			OPC_2_GRP17		OPC_2_PREFIX,18h
%define			OPC_2_19h		OPC_2_PREFIX,19h
%define			OPC_2_1Ah		OPC_2_PREFIX,1Ah
%define			OPC_2_1Bh		OPC_2_PREFIX,1Bh
%define			OPC_2_1Ch		OPC_2_PREFIX,1Ch
%define			OPC_2_1Dh		OPC_2_PREFIX,1Dh
%define			OPC_2_1Eh		OPC_2_PREFIX,1Eh
%define			OPC_2_1Fh		OPC_2_PREFIX,1Fh

%define			OPC_2_MOV_Rd_Cd		OPC_2_PREFIX,20h
%define			OPC_2_MOV_Rd_Dd		OPC_2_PREFIX,21h
%define			OPC_2_MOV_Cd_Rd		OPC_2_PREFIX,22h
%define			OPC_2_MOV_Dd_Rd		OPC_2_PREFIX,23h
%define			OPC_2_MOV_Rd_Td		OPC_2_PREFIX,24h
%define			OPC_2_25h		OPC_2_PREFIX,25h
%define			OPC_2_MOV_Td_Rd		OPC_2_PREFIX,26h
%define			OPC_2_27h		OPC_2_PREFIX,27h

%define			OPC_2_28h		OPC_2_PREFIX,28h
%define			OPC_2_29h		OPC_2_PREFIX,29h
%define			OPC_2_2Ah		OPC_2_PREFIX,2Ah
%define			OPC_2_2Bh		OPC_2_PREFIX,2Bh
%define			OPC_2_2Ch		OPC_2_PREFIX,2Ch
%define			OPC_2_2Dh		OPC_2_PREFIX,2Dh
%define			OPC_2_2Eh		OPC_2_PREFIX,2Eh
%define			OPC_2_2Fh		OPC_2_PREFIX,2Fh

%define			OPC_2_WRMSR		OPC_2_PREFIX,30h
%define			OPC_2_RDTSC		OPC_2_PREFIX,31h
%define			OPC_2_RDMSR		OPC_2_PREFIX,32h
%define			OPC_2_RDPMC		OPC_2_PREFIX,33h
%define			OPC_2_SYSENTER		OPC_2_PREFIX,34h
%define			OPC_2_SYSEXIT		OPC_2_PREFIX,35h
%define			OPC_2_36h		OPC_2_PREFIX,36h
%define			 OPC_2_RDSHR		OPC_2_36h
%define			OPC_2_37h		OPC_2_PREFIX,37h
%define			 OPC_2_WRSHR		OPC_2_37h

%define			OPC_2_38h		OPC_2_PREFIX,38h
%define			 OPC_2_SMINT_NEW	OPC_2_38h
%define			OPC_2_39h		OPC_2_PREFIX,39h
%define			OPC_2_3Ah		OPC_2_PREFIX,3Ah
%define			OPC_2_3Bh		OPC_2_PREFIX,3Bh
%define			OPC_2_3Ch		OPC_2_PREFIX,3Ch
%define			OPC_2_3Dh		OPC_2_PREFIX,3Dh
%define			OPC_2_3Eh		OPC_2_PREFIX,3Eh
%define			OPC_2_3Fh		OPC_2_PREFIX,3Fh

%define			OPC_2_CMOVO_Gv_Ev	OPC_2_PREFIX,040h
%define			OPC_2_CMOVNO_Gv_Ev	OPC_2_PREFIX,041h
%define			OPC_2_CMOVB_Gv_Ev	OPC_2_PREFIX,042h
%define			 OPC_2_CMOVC_Gv_Ev	OPC_2_CMOVB_Gv_Ev
%define			 OPC_2_CMOVNAE_Gv_Ev	OPC_2_CMOVB_Gv_Ev
%define			OPC_2_CMOVNB_Gv_Ev	OPC_2_PREFIX,043h
%define			 OPC_2_CMOVNC_Gv_Ev	OPC_2_CMOVNB_Gv_Ev
%define			 OPC_2_CMOVAE_Gv_Ev	OPC_2_CMOVNB_Gv_Ev
%define			OPC_2_CMOVZ_Gv_Ev	OPC_2_PREFIX,044h
%define			 OPC_2_CMOVE_Gv_Ev	OPC_2_CMOVZ_Gv_Ev
%define			OPC_2_CMOVNZ_Gv_Ev	OPC_2_PREFIX,045h
%define			 OPC_2_CMOVNE_Gv_Ev	OPC_2_CMOVNZ_Gv_Ev
%define			OPC_2_CMOVBE_Gv_Ev	OPC_2_PREFIX,046h
%define			 OPC_2_CMOVNA_Gv_Ev	OPC_2_CMOVBE_Gv_Ev
%define			OPC_2_CMOVNBE_Gv_Ev	OPC_2_PREFIX,047h
%define			 OPC_2_CMOVA_Gv_Ev	OPC_2_CMOVNBE_Gv_Ev

%define			OPC_2_CMOVS_Gv_Ev	OPC_2_PREFIX,048h
%define			OPC_2_CMOVNS_Gv_Ev	OPC_2_PREFIX,049h
%define			OPC_2_CMOVP_Gv_Ev	OPC_2_PREFIX,04Ah
%define			 OPC_2_CMOVPE_Gv_Ev	OPC_2_CMOVP_Gv_Ev
%define			OPC_2_CMOVNP_Gv_Ev	OPC_2_PREFIX,04Bh
%define			 OPC_2_CMOVPO_Gv_Ev	OPC_2_CMOVNP_Gv_Ev
%define			OPC_2_CMOVL_Gv_Ev	OPC_2_PREFIX,04Ch
%define			 OPC_2_CMOVNGE_Gv_Ev	OPC_2_CMOVL_Gv_Ev
%define			OPC_2_CMOVNL_Gv_Ev	OPC_2_PREFIX,04Dh
%define			 OPC_2_CMOVGE_Gv_Ev	OPC_2_CMOVNL_Gv_Ev
%define			OPC_2_CMOVLE_Gv_Ev	OPC_2_PREFIX,04Eh
%define			 OPC_2_CMOVNG_Gv_Ev	OPC_2_CMOVLE_Gv_Ev
%define			OPC_2_CMOVNLE_Gv_Ev	OPC_2_PREFIX,04Fh
%define			 OPC_2_CMOVG_Gv_Ev	OPC_2_CMOVNLE_Gv_Ev

%define			OPC_2_50h		OPC_2_PREFIX,50h
%define			OPC_2_51h		OPC_2_PREFIX,51h
%define			OPC_2_52h		OPC_2_PREFIX,52h
%define			OPC_2_53h		OPC_2_PREFIX,53h
%define			OPC_2_54h		OPC_2_PREFIX,54h
%define			OPC_2_55h		OPC_2_PREFIX,55h
%define			OPC_2_56h		OPC_2_PREFIX,56h
%define			OPC_2_57h		OPC_2_PREFIX,57h

%define			OPC_2_58h		OPC_2_PREFIX,58h
%define			OPC_2_59h		OPC_2_PREFIX,59h
%define			OPC_2_5Ah		OPC_2_PREFIX,5Ah
%define			OPC_2_5Bh		OPC_2_PREFIX,5Bh
%define			OPC_2_5Ch		OPC_2_PREFIX,5Ch
%define			OPC_2_5Dh		OPC_2_PREFIX,5Dh
%define			OPC_2_5Eh		OPC_2_PREFIX,5Eh
%define			OPC_2_5Fh		OPC_2_PREFIX,5Fh

%define			OPC_2_60h		OPC_2_PREFIX,60h
%define			OPC_2_61h		OPC_2_PREFIX,61h
%define			OPC_2_62h		OPC_2_PREFIX,62h
%define			OPC_2_63h		OPC_2_PREFIX,63h
%define			OPC_2_64h		OPC_2_PREFIX,64h
%define			OPC_2_65h		OPC_2_PREFIX,65h
%define			OPC_2_66h		OPC_2_PREFIX,66h
%define			OPC_2_67h		OPC_2_PREFIX,67h

%define			OPC_2_68h		OPC_2_PREFIX,68h
%define			OPC_2_69h		OPC_2_PREFIX,69h
%define			OPC_2_6Ah		OPC_2_PREFIX,6Ah
%define			OPC_2_6Bh		OPC_2_PREFIX,6Bh
%define			OPC_2_6Ch		OPC_2_PREFIX,6Ch
%define			OPC_2_6Dh		OPC_2_PREFIX,6Dh
%define			OPC_2_6Eh		OPC_2_PREFIX,6Eh
%define			OPC_2_6Fh		OPC_2_PREFIX,6Fh

%define			OPC_2_70h		OPC_2_PREFIX,70h
%define			OPC_2_71h		OPC_2_PREFIX,71h
%define			OPC_2_72h		OPC_2_PREFIX,72h
%define			OPC_2_73h		OPC_2_PREFIX,73h
%define			OPC_2_74h		OPC_2_PREFIX,74h
%define			OPC_2_75h		OPC_2_PREFIX,75h
%define			OPC_2_76h		OPC_2_PREFIX,76h
%define			OPC_2_77h		OPC_2_PREFIX,77h

%define			OPC_2_78h		OPC_2_PREFIX,78h
%define			 OPC_2_SVDC		OPC_2_78h
%define			OPC_2_79h		OPC_2_PREFIX,79h
%define			 OPC_2_RSDC		OPC_2_79h
%define			OPC_2_7Ah		OPC_2_PREFIX,7Ah
%define			 OPC_2_SVLDT		OPC_2_7Ah
%define			OPC_2_7Bh		OPC_2_PREFIX,7Bh
%define			 OPC_2_RSLDT		OPC_2_7Bh
%define			OPC_2_7Ch		OPC_2_PREFIX,7Ch
%define			 OPC_2_SVTS		OPC_2_7Ch
%define			OPC_2_7Dh		OPC_2_PREFIX,7Dh
%define			 OPC_2_RSTS		OPC_2_7Dh
%define			OPC_2_7Eh		OPC_2_PREFIX,7Eh
%define			 OPC_2_SMINT_OLD	OPC_2_7Eh
%define			OPC_2_7Fh		OPC_2_PREFIX,7Fh

%define			OPC_2_JO_Jv		OPC_2_PREFIX,80h
%define			OPC_2_JNO_Jv		OPC_2_PREFIX,81h
%define			OPC_2_JB_Jv		OPC_2_PREFIX,82h
%define			 OPC_2_JC_Jv		OPC_2_JB_Jv
%define			 OPC_2_JNAE_Jv		OPC_2_JB_Jv
%define			OPC_2_JNB_Jv		OPC_2_PREFIX,83h
%define			 OPC_2_JNC_Jv		OPC_2_JNB_Jv
%define			 OPC_2_JAE_Jv		OPC_2_JNB_Jv
%define			OPC_2_JZ_Jv		OPC_2_PREFIX,84h
%define			 OPC_2_JE_Jv		OPC_2_JZ_Jv
%define			OPC_2_JNZ_Jv		OPC_2_PREFIX,85h
%define			 OPC_2_JNE_Jv		OPC_2_JNZ_Jv
%define			OPC_2_JBE_Jv		OPC_2_PREFIX,86h
%define			 OPC_2_NA_Jv		OPC_2_JBE_Jv
%define			OPC_2_JNBE_Jv		OPC_2_PREFIX,87h
%define			 OPC_2_JA_Jv		OPC_2_JNBE_Jv

%define			OPC_2_JS_Jv		OPC_2_PREFIX,88h
%define			OPC_2_JNS_Jv		OPC_2_PREFIX,89h
%define			OPC_2_JP_Jv		OPC_2_PREFIX,8Ah
%define			 OPC_2_JPE_Jv		OPC_2_JP_Jv
%define			OPC_2_JNP_Jv		OPC_2_PREFIX,8Bh
%define			 OPC_2_JPO_Jv		OPC_2_JNP_Jv
%define			OPC_2_JL_Jv		OPC_2_PREFIX,8Ch
%define			 OPC_2_JNGE_Jv		OPC_2_JL_Jv
%define			OPC_2_JNL_Jv		OPC_2_PREFIX,8Dh
%define			 OPC_2_JGE_Jv		OPC_2_JNL_Jv
%define			OPC_2_JLE_Jv		OPC_2_PREFIX,8Eh
%define			 OPC_2_JNG_Jv		OPC_2_JLE_Jv
%define			OPC_2_JNLE_Jv		OPC_2_PREFIX,8Fh
%define			 OPC_2_JG_Jv		OPC_2_JNLE_Jv

%define			OPC_2_SETO_Eb		OPC_2_PREFIX,90h
%define			OPC_2_SETNO_Eb		OPC_2_PREFIX,91h
%define			OPC_2_SETB_Eb		OPC_2_PREFIX,92h
%define			 OPC_2_SETC_Eb		OPC_2_SETB_Eb
%define			 OPC_2_SETNAE_Eb	OPC_2_SETB_Eb
%define			OPC_2_SETNB_Eb		OPC_2_PREFIX,93h
%define			 OPC_2_SETNC_Eb		OPC_2_SETNB_Eb
%define			 OPC_2_SETAE_Eb		OPC_2_SETNB_Eb
%define			OPC_2_SETZ_Eb		OPC_2_PREFIX,94h
%define			 OPC_2_SETE_Eb		OPC_2_SETZ_Eb
%define			OPC_2_SETNZ_Eb		OPC_2_PREFIX,95h
%define			 OPC_2_SETNE_Eb		OPC_2_SETNZ_Eb
%define			OPC_2_SETBE_Eb		OPC_2_PREFIX,96h
%define			 OPC_2_NA_Eb		OPC_2_SETBE_Eb
%define			OPC_2_SETNBE_Eb		OPC_2_PREFIX,97h
%define			 OPC_2_SETA_Eb		OPC_2_SETNBE_Eb

%define			OPC_2_SETS_Eb		OPC_2_PREFIX,98h
%define			OPC_2_SETNS_Eb		OPC_2_PREFIX,99h
%define			OPC_2_SETP_Eb		OPC_2_PREFIX,9Ah
%define			 OPC_2_SETPE_Eb		OPC_2_SETP_Eb
%define			OPC_2_SETNP_Eb		OPC_2_PREFIX,9Bh
%define			 OPC_2_SETPO_Eb		OPC_2_SETNP_Eb
%define			OPC_2_SETL_Eb		OPC_2_PREFIX,9Ch
%define			 OPC_2_SETNGE_Eb	OPC_2_SETL_Eb
%define			OPC_2_SETNL_Eb		OPC_2_PREFIX,9Dh
%define			 OPC_2_SETGE_Eb		OPC_2_SETNL_Eb
%define			OPC_2_SETLE_Eb		OPC_2_PREFIX,9Eh
%define			 OPC_2_SETNG_Eb		OPC_2_SETLE_Eb
%define			OPC_2_SETNLE_Eb		OPC_2_PREFIX,9Fh
%define			 OPC_2_SETG_Eb		OPC_2_SETNLE_Eb

%define			OPC_2_PUSH_FS		OPC_2_PREFIX,0A0h
%define			OPC_2_POP_FS		OPC_2_PREFIX,0A1h
%define			OPC_2_CPUID		OPC_2_PREFIX,0A2h
%define			OPC_2_BT_Ev_Gv		OPC_2_PREFIX,0A3h
%define			OPC_2_SHLD_Ev_Gv_Ib	OPC_2_PREFIX,0A4h
%define			OPC_2_SHLD_Ev_Gv_CL	OPC_2_PREFIX,0A5h
%define			OPC_2_A6h		OPC_2_PREFIX,0A6h
%define			 OPC_2_XBTS386		OPC_2_A6h
%define			 OPC_2_CMPXCHG486_Eb_Gb	OPC_2_A6h
%define			OPC_2_A7h		OPC_2_PREFIX,0A7h
%define			 OPC_2_IBTS386		OPC_2_A7h
%define			 OPC_2_CMPXCHG486_Ev_Gv	OPC_2_A7h

%define			OPC_2_PUSH_GS		OPC_2_PREFIX,0A8h
%define			OPC_2_POP_GS		OPC_2_PREFIX,0A9h
%define			OPC_2_RSM		OPC_2_PREFIX,0AAh
%define			OPC_2_BTS_Ev_Gv		OPC_2_PREFIX,0ABh
%define			OPC_2_SHRD_Ev_Gv_Ib	OPC_2_PREFIX,0ACh
%define			OPC_2_SHRD_Ev_Gv_CL	OPC_2_PREFIX,0ADh
%define			OPC_2_GRP16		OPC_2_PREFIX,0AEh
%define			OPC_2_IMUL_Gv_Ev	OPC_2_PREFIX,0AFh

%define			OPC_2_CMPXCHG_Eb_Gb	OPC_2_PREFIX,0B0h
%define			OPC_2_CMPXCHG_Ev_Gv	OPC_2_PREFIX,0B1h
%define			OPC_2_LSS_Gv_Mp		OPC_2_PREFIX,0B2h
%define			OPC_2_BTR_Gv_Mp		OPC_2_PREFIX,0B3h
%define			OPC_2_LFS_Gv_Mp		OPC_2_PREFIX,0B4h
%define			OPC_2_LGS_Gv_Mp		OPC_2_PREFIX,0B5h
%define			OPC_2_MOVZX_Gv_Eb	OPC_2_PREFIX,0B6h
%define			OPC_2_MOVZX_Gv_Ew	OPC_2_PREFIX,0B7h

%define			OPC_2_JMPE_Jv		OPC_2_PREFIX,0B8h	; $IA64$
%define			OPC_2_GRP11		OPC_2_PREFIX,0B9h
%define			 OPC_2_UD1		OPC_2_GRP11
%define			OPC_2_GRP8		OPC_2_PREFIX,0BAh
%define			OPC_2_BTC_Ev_Gv		OPC_2_PREFIX,0BBh
%define			OPC_2_BSF_Gv_Ev		OPC_2_PREFIX,0BCh
%define			OPC_2_BSR_Gv_Ev		OPC_2_PREFIX,0BDh
%define			OPC_2_MOVSX_Gv_Eb	OPC_2_PREFIX,0BEh
%define			OPC_2_MOVSX_Gv_Ew	OPC_2_PREFIX,0BFh

%define			OPC_2_XADD_Eb_Gb	OPC_2_PREFIX,0C0h
%define			OPC_2_XADD_Ev_Gv	OPC_2_PREFIX,0C1h
%define			OPC_2_C2h		OPC_2_PREFIX,0C2h
%define			OPC_2_C3h		OPC_2_PREFIX,0C3h
%define			OPC_2_C4h		OPC_2_PREFIX,0C4h
%define			OPC_2_C5h		OPC_2_PREFIX,0C5h
%define			OPC_2_C6h		OPC_2_PREFIX,0C6h
%define			OPC_2_GRP9		OPC_2_PREFIX,0C7h

%define			OPC_2_BSWAP_EAX		OPC_2_PREFIX,0C8h
%define			OPC_2_BSWAP_ECX		OPC_2_PREFIX,0C9h
%define			OPC_2_BSWAP_EDX		OPC_2_PREFIX,0CAh
%define			OPC_2_BSWAP_EBX		OPC_2_PREFIX,0CBh
%define			OPC_2_BSWAP_ESP		OPC_2_PREFIX,0CCh
%define			OPC_2_BSWAP_EBP		OPC_2_PREFIX,0CDh
%define			OPC_2_BSWAP_ESI		OPC_2_PREFIX,0CEh
%define			OPC_2_BSWAP_EDI		OPC_2_PREFIX,0CFh

%define			OPC_2_D0h		OPC_2_PREFIX,0D0h
%define			OPC_2_D1h		OPC_2_PREFIX,0D1h
%define			OPC_2_D2h		OPC_2_PREFIX,0D2h
%define			OPC_2_D3h		OPC_2_PREFIX,0D3h
%define			OPC_2_D4h		OPC_2_PREFIX,0D4h
%define			OPC_2_D5h		OPC_2_PREFIX,0D5h
%define			OPC_2_D6h		OPC_2_PREFIX,0D6h
%define			OPC_2_D7h		OPC_2_PREFIX,0D7h

%define			OPC_2_D8h		OPC_2_PREFIX,0D8h
%define			OPC_2_D9h		OPC_2_PREFIX,0D9h
%define			OPC_2_DAh		OPC_2_PREFIX,0DAh
%define			OPC_2_DBh		OPC_2_PREFIX,0DBh
%define			OPC_2_DCh		OPC_2_PREFIX,0DCh
%define			OPC_2_DDh		OPC_2_PREFIX,0DDh
%define			OPC_2_DEh		OPC_2_PREFIX,0DEh
%define			OPC_2_DFh		OPC_2_PREFIX,0DFh

%define			OPC_2_E0h		OPC_2_PREFIX,0E0h
%define			OPC_2_E1h		OPC_2_PREFIX,0E1h
%define			OPC_2_E2h		OPC_2_PREFIX,0E2h
%define			OPC_2_E3h		OPC_2_PREFIX,0E3h
%define			OPC_2_E4h		OPC_2_PREFIX,0E4h
%define			OPC_2_E5h		OPC_2_PREFIX,0E5h
%define			OPC_2_E6h		OPC_2_PREFIX,0E6h
%define			OPC_2_E7h		OPC_2_PREFIX,0E7h

%define			OPC_2_E8h		OPC_2_PREFIX,0E8h
%define			OPC_2_E9h		OPC_2_PREFIX,0E9h
%define			OPC_2_EAh		OPC_2_PREFIX,0EAh
%define			OPC_2_EBh		OPC_2_PREFIX,0EBh
%define			OPC_2_ECh		OPC_2_PREFIX,0ECh
%define			OPC_2_EDh		OPC_2_PREFIX,0EDh
%define			OPC_2_EEh		OPC_2_PREFIX,0EEh
%define			OPC_2_EFh		OPC_2_PREFIX,0EFh

%define			OPC_2_F0h		OPC_2_PREFIX,0F0h
%define			OPC_2_F1h		OPC_2_PREFIX,0F1h
%define			OPC_2_F2h		OPC_2_PREFIX,0F2h
%define			OPC_2_F3h		OPC_2_PREFIX,0F3h
%define			OPC_2_F4h		OPC_2_PREFIX,0F4h
%define			OPC_2_F5h		OPC_2_PREFIX,0F5h
%define			OPC_2_F6h		OPC_2_PREFIX,0F6h
%define			OPC_2_F7h		OPC_2_PREFIX,0F7h

%define			OPC_2_F8h		OPC_2_PREFIX,0F8h
%define			OPC_2_F9h		OPC_2_PREFIX,0F9h
%define			OPC_2_FAh		OPC_2_PREFIX,0FAh
%define			OPC_2_FBh		OPC_2_PREFIX,0FBh
%define			OPC_2_FCh		OPC_2_PREFIX,0FCh
%define			OPC_2_FDh		OPC_2_PREFIX,0FDh
%define			OPC_2_FEh		OPC_2_PREFIX,0FEh
%define			OPC_2_FFh		OPC_2_PREFIX,0FFh
%define			 OPC_2_UD		OPC_2_FFh

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
