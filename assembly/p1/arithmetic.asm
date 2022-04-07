; @author: brorojame2030@gmail.com
section .text ; a section/segment
global main
main:
	mov rax, [a] ; mov  char '1' to rax
	sub rax, '0' ; convert to integer
	mov rbx, [b] ; mov  char '2' to rbx
	sub rbx, '0' ; convert to integer
	add rax, rbx ; do additon-arithmetic 
	add rax, '0' ; convert to char
	mov [sum], rax ; mov the char  to reference sum 

	mov rdx, str ; the string to be output
	mov rcx, str_len ; the length of the string
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel/ interupt to execute 0x80

	mov rdx, [sum] ;; the char (reference sum) to be output
	mov rcx, 1 ; lenght of the char is 1
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel, interupt to execute 0x80
section .data ; a section/segment
	a: db '1' ; a is an address containing '1'
	b: db '2' ; b is an address containing '2'
	str: db "say Hello world to jame, The sum of a and b is" ; str is address which is pointer to the string "say hello world to jame ..."
	str_len: equ $-str ; str_len is equal to $-str (the length of str)
segment .bss ; a section/segment
	sum: resb 1 ; sum is an address in ralation to 1 byte
