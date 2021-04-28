section .text
		global _ft_strlen
start:
	mov rcx, rdi

comp:
	cmp BYTE [rcx], 0
	jz end
	inc rcx
	jmp comp
	
end:
	mov rax, rcx
	ret
