global _ft_strlen

segment .text
_ft_strlen:
	mov rax, 0
_loop:
	cmp BYTE [rdi],0  ; str == '\0'
	je _return        ; si es igual ve a la etiqueta return
	inc rax			  ; incremento rax
	inc rdi			  ; *str++;
	jmp _loop         ; vuelvo al loop
_return:
	ret				  ; retorno rax