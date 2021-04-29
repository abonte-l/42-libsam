section .text
		global ft_strlen
ft_strlen:
	mov rax, rdi

comp:
	cmp BYTE [rax], 0
	jz end
	inc rax
	jmp comp
	
end:
	sub rax, rdi
	ret
