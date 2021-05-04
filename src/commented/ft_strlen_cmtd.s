section .text
		global ft_strlen
ft_strlen:
	mov rax, rdi ; deplace la str dans rax

comp:
	cmp BYTE [rax], 0 ; verifie si char str[i] == 0
	jz end ; si char str[i] == 0 va a end
	inc rax ; incremente le byte que l'on va verifier
	jmp comp ; va a comp
	
end:
	sub rax, rdi ; soustrait les deux valeurs
	ret ; fin de la fonction
