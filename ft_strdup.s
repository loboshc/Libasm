global _ft_strdup

extern _malloc
extern _ft_strcpy
extern _ft_strlen

segment .text

_ft_strdup:
	push rdi
	cmp rdi, 0x0
	jz _error
	call _ft_strlen
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
