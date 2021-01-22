global _ft_strlen

segment .text
_ft_strlen:
	xor rax, rax
_loop:
	cmp BYTE[rdi],0
	je _return
	inc rax
	inc rdi
	jmp _loop
_return:
	ret