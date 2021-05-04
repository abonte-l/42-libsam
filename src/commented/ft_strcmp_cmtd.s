section .text
		global ft_strcmp

ft_strcmp:
	xor rcx, rcx ;verification que rcx est bien a zero ou sinon la met a zero
    xor rax, rax ;verification que rax est bien a zero ou sinon la met a zero
    xor al, al ;verification que al est bien a zero ou sinon la met a zero
    jmp comps ; va a comps
    ret ; fin de la fonction 

incr:
    inc rcx ;incrementation du compteur

comps:
	mov al, BYTE [rdi + rcx] ; deplace char src[i] dans al (low 8bits de rax)
    cmp al, BYTE [rsi + rcx] ; compare char src[i] et char src2[i]
    je s1 ; va a s1 si == 0
    sub al, BYTE [rsi + rcx] ; soustrait char src2[i] a char src[i]
    movsx rax, al ; repasse en 64bits
    ret ; fin de la fonction 

s1:
    cmp BYTE [rdi + rcx], 0 ;verifie si char src[i] est egal a 0
    jne s2 ; va a s2 si != 0
    ret ; fin de la fonction 

s2:
    cmp BYTE [rsi + rcx], 0 ;verifie si char src2[i] est egal a 0
    jne incr ; ; va a incr si != 0
    ret ; fin de la fonction 