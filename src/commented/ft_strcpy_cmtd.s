section .text
		global ft_strcpy

ft_strcpy:
	xor rcx, rcx ;verification que rcx est bien a zero ou sinon la met a zero
    xor rax, rax ;verification que rax est bien a zero ou sinon la met a zero
    jmp end ; va a end
	ret ; fin de la fonction 

copy:
	mov al, BYTE [rsi + rcx] ; deplace char src[i] dans al (low 8bits de rax)
    mov BYTE [rdi + rcx], al ; deplace char src[i] dans char dest[i]
	inc rcx ;incrementation du compteur

end:
	cmp BYTE [rsi + rcx], 0 ; verifie si char src[i] est == 0
	jne copy ; si char src[i] != 0
    mov BYTE [rdi + rcx], 0
    mov rax, rdi  ; stockage de dest (rdi) dans rax (registre valeur de retour)
	ret ; fin de la fonction
