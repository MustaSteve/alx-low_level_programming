; 101-hello_holberton.asm
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.
; Assemble and link with:
; nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello

	extern  printf

	section .text
        global main
msg     db      "Hello, Holberton", 10, 0

	section .data
main:
	; Prepare arguments for printf
	mov     rdi, msg        
	xor     rax, rax        

	; Call printf
	call    printf

	; Return from main
	xor     rax, rax
	ret
