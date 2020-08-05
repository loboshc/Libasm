global _ft_strdup

extern _malloc
extern _ft_strcpy

segment .text

_ft_strdup:
	push rdi
_len:
	cmp BYTE [rdi],0
	je _copy
	inc rax
	inc rdi
	jmp _len
_copy:
	add rax, 1
	mov rdi, rax
	call _malloc
	jc _error
	pop rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret
_error:
	mov rax, 0
	ret