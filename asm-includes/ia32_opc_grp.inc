; $Id: //depot/external/ia32_opc_grp.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_IA32_OPC_GRP

%define 		INCLUDED_IA32_OPC_GRP	BOOL_TRUE

;------------------------------------------------------------------------------
;	opcode groups
;------------------------------------------------------------------------------

%define			OPC_GRP1_ADD		0
%define			OPC_GRP1_OR		1
%define			OPC_GRP1_ADC		2
%define			OPC_GRP1_SBB		3
%define			OPC_GRP1_AND		4
%define			OPC_GRP1_SUB		5
%define			OPC_GRP1_XOR		6
%define			OPC_GRP1_CMP		7

%define			OPC_GRP2_ROL		0
%define			OPC_GRP2_ROR		1
%define			OPC_GRP2_RCL		2
%define			OPC_GRP2_RCR		3
%define			OPC_GRP2_SHL		4
%define			OPC_GRP2_SHR		5
%define			OPC_GRP2_SHL_ALIAS	6
%define			OPC_GRP2_SAR		7

%define			OPC_GRP3_TEST_Ib	0
%define			 OPC_GRP3_TEST_Iv	OPC_GRP3_TEST_Ib
%define			OPC_GRP3_TEST_Ib_ALIAS	1
%define			 OPC_GRP3_TEST_Iv_ALIAS	OPC_GRP3_TEST_Ib_ALIAS
%define			OPC_GRP3_NOT		2
%define			OPC_GRP3_NEG		3
%define			OPC_GRP3_MUL_AL		4
%define			 OPC_GRP3_MUL_eAX	OPC_GRP3_MUL_AL
%define			OPC_GRP3_IMUL_AL	5
%define			 OPC_GRP3_IMUL_eAX	OPC_GRP3_IMUL_AL
%define			OPC_GRP3_DIV_AL		6
%define			 OPC_GRP3_DIV_eAX	OPC_GRP3_DIV_AL
%define			OPC_GRP3_IDIV_AL	7
%define			 OPC_GRP3_IDIV_eAX	OPC_GRP3_IDIV_AL

%define			OPC_GRP4_INC_Eb		0
%define			OPC_GRP4_DEC_Eb		1

%define			OPC_GRP5_INC_Ev		0
%define			OPC_GRP5_DEC_Ev		1
%define			OPC_GRP5_CALL_Ev	2
%define			OPC_GRP5_CALL_Ep	3
%define			OPC_GRP5_JMP_Ev		4
%define			OPC_GRP5_JMP_Ep		5
%define			OPC_GRP5_PUSH_Ev	6

%define			OPC_GRP6_SLDT_Ew	0
%define			OPC_GRP6_STR_Ew		1
%define			OPC_GRP6_LLDT_Ew	2
%define			OPC_GRP6_LTR_Ew		3
%define			OPC_GRP6_VERR_Ew	4
%define			OPC_GRP6_VERW_Ew	5
%define			OPC_GRP6_JMPE_Ev	6	; $IA64$

%define			OPC_GRP7_SGDT_Ms	0
%define			OPC_GRP7_SIDT_Ms	1
%define			OPC_GRP7_LGDT_Ms	2
%define			OPC_GRP7_LIDT_Ms	3
%define			OPC_GRP7_SMSW_Ew	4
%define			OPC_GRP7_LMSW_Es	6
%define			OPC_GRP7_INVLPG_M	7

%define			OPC_GRP8_BT		4
%define			OPC_GRP8_BTS		5
%define			OPC_GRP8_BTR		6
%define			OPC_GRP8_BTC		7

%define			OPC_GRP9_CMPXCHG_Mq	1

%define			OPC_GRP12_MOV		0

%define			OPC_GRP13_PSRLW_Pq_Ib	2
%define			OPC_GRP13_PSRAW_Pq_Ib	4
%define			OPC_GRP13_PSLLW_Pq_Ib	6

%define			OPC_GRP14_PSRLD_Pq_Ib	2
%define			OPC_GRP14_PSRAD_Pq_Ib	4
%define			OPC_GRP14_PSLLD_Pq_Ib	6

%define			OPC_GRP15_PSRLQ_Pq_Ib	2
%define			OPC_GRP15_PSLLQ_Pq_Ib	6

%define			OPC_GRP16_FXSAVE_M512	0
%define			OPC_GRP16_FXRSTOR_M512	1
%define			OPC_GRP16_LDMXCSR_Md	2
%define			OPC_GRP16_STMXCSR_Md	3
%define			OPC_GRP16_SFENCE	7
%define			 OPC_SSE_SFENCE		OPC_2_GRP16,0F8h ; only recommended encoding

%define			OPC_GRP17_PREFETCHNTA_M	0
%define			OPC_GRP17_PREFETCHT0_M	1
%define			OPC_GRP17_PREFETCHT1_M	2
%define			OPC_GRP17_PREFETCHT2_M	3

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
