global _ft_write

%define SYS_WRITE 0x2000004

segment .text
_ft_write:
	mov rax, SYS_WRITE
	syscall
	ret