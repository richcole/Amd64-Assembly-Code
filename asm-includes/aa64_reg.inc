; $Id: //depot/external/aa64_reg.inc#1 $

;------------------------------------------------------------------------------
;	prevent multiple inclusions of this file
;------------------------------------------------------------------------------

%ifndef INCLUDED_AA64_REG

%define 		INCLUDED_AA64_REG	BOOL_TRUE

;------------------------------------------------------------------------------
;	register aliases
;------------------------------------------------------------------------------

%idefine		r0b			al
%idefine		r1b			cl
%idefine		r2b			dl
%idefine		r3b			bl
%idefine		r4b			spl
%idefine		r5b			bpl
%idefine		r6b			sil
%idefine		r7b			dil

%idefine		r0w			ax
%idefine		r1w			cx
%idefine		r2w			dx
%idefine		r3w			bx
%idefine		r4w			sp
%idefine		r5w			bp
%idefine		r6w			si
%idefine		r7w			di

%idefine		r0d			eax
%idefine		r1d			ecx
%idefine		r2d			edx
%idefine		r3d			ebx
%idefine		r4d			esp
%idefine		r5d			ebp
%idefine		r6d			esi
%idefine		r7d			edi

%idefine		r0			rax
%idefine		r1			rcx
%idefine		r2			rdx
%idefine		r3			rbx
%idefine		r4			rsp
%idefine		r5			rbp
%idefine		r6			rsi
%idefine		r7			rdi

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
