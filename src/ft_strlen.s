section .text
		global ft_strlen
start:
	mov rcx, 0 ;initialisation de rcx a 0
comp:
	cmp BYTE [rdi + rcx], 0 ; compare le char (BYTE) de str[i] ([rdi + rcx]) rdi est le registre par defaut pour l'argument 1 de l fonction
	jz end ; si la comparaison est egale a 0 alors on va directement a end:
	inc rcx ;incrementation de rcx
	jmp comp ; on retourne au debut de comp:
end:
	mov rax, rcx ; on donne la valeur de retour rcx(registre compteur) a rax (registre retour de fonction)
	ret ; fin de la fonction
