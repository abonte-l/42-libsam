section .text
		global ft_strdup
		extern ft_strlen
		extern ft_strcpy
		extern malloc

ft_strdup:
	xor rax, rax
    push r15
    mov r15, rdi
    call ft_strlen wrt ..plt
    mov rdi, rax

alloc:
	inc rdi
    call malloc wrt ..plt
    cmp rax, 0
    jne copy
    pop r15
    ret

copy:
	mov rdi, rax
    mov rsi, r15
    call ft_strcpy wrt ..plt
    pop r15
    ret
