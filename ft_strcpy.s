global _ft_strcpy

segment .text
_ft_strcpy:
	mov rcx, 0
_while:
	cmp BYTE[rsi + rcx], 0
	je _return
	mov dl, BYTE[rsi + rcx] 
	mov BYTE[rdi + rcx], dl
	inc rcx
	jmp _while

_return:
	mov BYTE[rdi + rcx], 0
	mov rax, rdi
	ret
	 