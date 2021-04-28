section .text
		global ft_strcmp
		extern ft_strlen
		extern ft_strcpy
		extern malloc

start:
	call ft_strlen
	mov rdx, rdi
	mov rdi, rax

alloc:
	add rdi, 1
	call malloc
	cmp rax, 0
	je end

copy:
	mov rdi, rax
	mov rsi, rdx
	call ft_strcpy
	
end:
	ret
