section .text
		global ft_read
		extern __errno_location

start:
	mov rax, 0 ; syscall de write = 0
	syscall ; appel systeme
	cmp rax, 0 ; compare le retour de l'appel systeme a 0
	jl error ; si la valeur du retour est inferieur a zero on passe directement a error
	ret

error:
	neg rax ; on passe rax en positif
	mov rdx, rax
	call __errno_location ; donne l'adresse de la variable errno
	mov [rax], rdx ; on passe la valeur d'erreur a l'adresse d'errno 
	mov rax, -1 ; on passe la valeur de retour a -1 (cas erreur)
	ret ; fin de la fonction
