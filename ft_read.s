global _ft_read

%define  SYS_READ 0x2000003

segment .text
_ft_read:
	mov rax, SYS_READ
	syscall
	jc _error
	ret
_error:
	mov rax, -1
	ret