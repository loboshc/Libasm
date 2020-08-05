global _ft_strcmp

segment .text
_ft_strcmp:
	mov rax, 0
	mov rdx, 0
	mov rcx, 0
_while:
	mov r8b, BYTE[rdi + rcx]
	mov r9b, BYTE[rsi + rcx]
	cmp r8b, r9b
	jne _return
	cmp r8b, 0
	je _return
	cmp r9b, 0
	je _return
	inc rcx
	jmp _while
_return:
	movzx rax, r8b
	movzx rdx, r9b
	sub rax, rdx
	ret
