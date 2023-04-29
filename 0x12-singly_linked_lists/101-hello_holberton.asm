extern printf
section .data
	hello db "Hello, Holberton", 10
section .text
global _start
_start:
	push hello
	call printf
	add rsp, 8
	mov eax, 0
	ret
