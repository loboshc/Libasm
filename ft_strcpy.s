global _ft_strcpy

segment .text
_ft_strcpy:
	mov rax, 0
	mov rcx, 0
_while:
	cmp [rsi + rcx], byte 0
	je _return
	mov dl, byte[rsi + rcx]
	mov byte[rdi + rcx], dl
	inc rcx
	jmp _while

_return:
	mov byte[rdi + rcx], 0
	mov rax, rdi
	ret
	 