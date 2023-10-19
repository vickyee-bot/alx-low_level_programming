section .data
	hello db "Hello, Holberton",10,0  ; The message to be printed (with a newline)

section .text
	global _start

_start:
	; Call printf
	mov rdi, hello   ; Load the address of the message into rdi
	call printf      ; Call the printf function

	; Exit the program
	mov rax, 60      ; syscall number for exit
	xor rdi, rdi     ; Exit status 0
	syscall

section .bss
	printf resb 1    ; Reserve space for printf call
