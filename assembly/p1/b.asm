extern printf
section .data
str: db "jamee %d"
section .text
global main
main:

mov edi, str
mov esi, 1
mov eax, 0
call printf

	
