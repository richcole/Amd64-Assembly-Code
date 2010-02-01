; $Id: //depot/external/aa64_opc_1.inc#2 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_OPC_1

%define 		INCLUDED_AA64_OPC_1	BOOL_TRUE

;------------------------------------------------------------------------------
;	1 byte opcodes
;------------------------------------------------------------------------------

%define			OPC_1_REX_40		40h
%define			OPC_1_REX_41		41h
%define			OPC_1_REX_42		42h
%define			OPC_1_REX_43		43h
%define			OPC_1_REX_44		44h
%define			OPC_1_REX_45		45h
%define			OPC_1_REX_46		46h
%define			OPC_1_REX_47		47h

%define			OPC_1_REX_48		48h
%define			OPC_1_REX_49		49h
%define			OPC_1_REX_4A		4Ah
%define			OPC_1_REX_4B		4Bh
%define			OPC_1_REX_4C		4Ch
%define			OPC_1_REX_4D		4Dh
%define			OPC_1_REX_4E		4Eh
%define			OPC_1_REX_4F		4Fh

%define			OPC_1_MOVSXD_Gv_Ed	OPC_1_ARPL_Ew_Rw	; if REX is enabled

%define			OPC_1_MOV_AL_Oq		OPC_1_MOV_AL_Ob
%define			OPC_1_MOV_eAX_Oq	OPC_1_MOV_eAX_Ov
%define			OPC_1_MOV_Oq_AL		OPC_1_MOV_Ob_AL
%define			OPC_1_MOV_Oq_eAX	OPC_1_MOV_Ov_eAX

%define			OPC_1_MOV_RAX_Iq	OPC_1_REX_48,OPC_1_MOV_eAX_Iv
%define			OPC_1_MOV_RCX_Iq	OPC_1_REX_48,OPC_1_MOV_eCX_Iv
%define			OPC_1_MOV_RDX_Iq	OPC_1_REX_48,OPC_1_MOV_eDX_Iv
%define			OPC_1_MOV_RBX_Iq	OPC_1_REX_48,OPC_1_MOV_eBX_Iv
%define			OPC_1_MOV_RSP_Iq	OPC_1_REX_48,OPC_1_MOV_eSP_Iv
%define			OPC_1_MOV_RBP_Iq	OPC_1_REX_48,OPC_1_MOV_eBP_Iv
%define			OPC_1_MOV_RSI_Iq	OPC_1_REX_48,OPC_1_MOV_eSI_Iv
%define			OPC_1_MOV_RDI_Iq	OPC_1_REX_48,OPC_1_MOV_eDI_Iv

;------------------------------------------------------------------------------
;	1 byte opcodes that are reserved in PM64 (ie. cause #UD)
;------------------------------------------------------------------------------

%define			OPC_1_UD_PM64_06	OPC_1_PUSH_ES
%define			OPC_1_UD_PM64_07	OPC_1_POP_ES

%define			OPC_1_UD_PM64_0E	OPC_1_PUSH_CS

%define			OPC_1_UD_PM64_16	OPC_1_PUSH_SS
%define			OPC_1_UD_PM64_17	OPC_1_POP_SS

%define			OPC_1_UD_PM64_1E	OPC_1_PUSH_DS
%define			OPC_1_UD_PM64_1F	OPC_1_POP_DS

%define			OPC_1_UD_PM64_27	OPC_1_DAA
%define			OPC_1_UD_PM64_2F	OPC_1_DAS
%define			OPC_1_UD_PM64_37	OPC_1_AAA
%define			OPC_1_UD_PM64_3F	OPC_1_AAS

%define			OPC_1_UD_PM64_60	OPC_1_PUSHA
%define			OPC_1_UD_PM64_61	OPC_1_POPA
%define			OPC_1_UD_PM64_62	OPC_1_BOUND_Gv_Ma

%define			OPC_1_UD_PM64_82	OPC_1_GRP1_Eb_Ib_ALIAS

%define			OPC_1_UD_PM64_9A	OPC_1_CALL_Ap

%define			OPC_1_UD_PM64_9E	OPC_1_SAHF
%define			OPC_1_UD_PM64_9F	OPC_1_LAHF

%define			OPC_1_UD_PM64_C4	OPC_1_LES_Gv_Mp
%define			OPC_1_UD_PM64_C5	OPC_1_LDS_Gv_Mp

%define			OPC_1_UD_PM64_CE	OPC_1_INTO

%define			OPC_1_UD_PM64_D4	OPC_1_AAM
%define			OPC_1_UD_PM64_D5	OPC_1_AAD

%define			OPC_1_UD_PM64_D6	OPC_1_SALC

%define			OPC_1_UD_PM64_EA	OPC_1_JMP_Ap

;------------------------------------------------------------------------------
;	PUSHAQ and POPAQ macros
;------------------------------------------------------------------------------

%macro			PUSHAQ 0

			push	rax
			push	rcx
			push	rdx
			push	rbx
			push	rsp		; ignored on POPAQ
			add	qword [rsp],byte MEM_SFRAME_PUSHAQ.RBX
			push	rbp
			push	rsi
			push	rdi
%endmacro

%macro			POPAQ 0

			pop	rdi
			pop	rsi
			pop	rbp
			add	rsp,8		; ignored
			pop	rbx
			pop	rdx
			pop	rcx
			pop	rax
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
