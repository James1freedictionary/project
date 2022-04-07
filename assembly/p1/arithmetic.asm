; @author: brorojame2030@gmail.com
section .text ; a section/segment
global main
main:
	mov rax, [a] ; mov  char '1' (reference a) to rax
	sub rax, '0' ; convert to integer
	mov rbx, [b] ; mov  char '2' (reference b) to rbx
	sub rbx, '0' ; convert to integer
	add rax, rbx ; do additon-arithmetic 
	add rax, '0' ; convert to char
	mov [sum], rax ; mov the char  to reference sum 

	mov rdx, str_len ; the length of the string 
	mov rcx, str    ; the string to be output (str is a pointer to string)
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel/ interupt to execute 0x80

	mov rdx, 1;; the length of the char
	mov rcx, sum ; the char to be output (sum is a pointer)
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel, interupt to execute 0x80
section .data ; a section/segment
	a: db '1' ; a is an address or pointer to '1'
	b: db '2' ; b is an address pointer to '2'
	str: db "say Hello world to jame, The sum of a and b is " ; str is address which is a pointer to the string "say hello world to jame ..."
	str_len: equ $-str ; str_len is equal to $-str (the length of str)
segment .bss ; a section/segment
	sum: resb 1 ; sum is an address which is a pointer to 1 byte
	result: resw 2 ; result is a pointer to 2 words
