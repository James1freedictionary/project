; @author: brorojame2030@gmail.com
; @copyright 2023, brorojame
section .text ; a section/segment
global main ; make label "main" as global so that it can be accessed globally
main: ; a label
initial: ; a label
	mov rax, 0 ; initail value of rax
	jmp condition ; jump to conditon
task: ; a label
	push rax ; push val of rax to stack 'cause rax may be used later
	
	; do arithmetic
	mov rax, [a] ; mov  char '1' (reference a) to rax
	sub rax, '0' ; convert to integer, rax = '0' - rax
	mov rbx, [b] ; mov  char '2' (reference b) to rbx
	sub rbx, '0' ; convert to integer, rbx = '0' - rbx
	add rax, rbx ; do additon-arithmetic, rax = rbx + rax
	add rax, '0' ; convert to char, rax = '0' + rax
	mov [sum], rax ; mov the char  to reference sum 

	; pprint str
	mov rdx, str_len ; the length of the string 
	mov rcx, str    ; the string to be output (str is a pointer to string)
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel/ interupt to execute 0x80

	; print sum
	mov rdx, 1;; the length of the char
	mov rcx, sum ; the char to be output (sum is a pointer)
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel, interupt to execute 0x80
	
	; print newline
	mov rdx, 1;; the length of the char
	mov rcx, newline ; the char 0x0a to be output (newline is a pointer)
	mov rbx, 1 ; stdout
	mov rax, 4 ; write
	int 0x80 ; call kernel, interupt to execute 0x80
incremnt: ; a label
	pop rax ; pop value from stack and move to rax
	inc rax ; increse value of rax by 1, rax = rax + 1
condition: ; a label
	cmp rax, 10 ; compare 10 with rax
	jl task ; jump to task if and only if rax < 10
section .data ; a section/segment
	a: db '1' ; a is an address or pointer to '1'
	b: db '2' ; b is an address or pointer to '2'
	str: db "say Hello world to jame, The sum of a and b is " ; str is address which is a pointer to the string "say hello world to jame ..."
	str_len: equ $-str ; str_len is equal to $-str (the length of str)
	newline: dd 0x0a ; newline is a pointer to 0x0a ('\n')
segment .bss ; a section/segment
	sum: resb 1 ; sum is an address which is a pointer to 1 byte
	result: resw 2 ; result is a pointer to 2 words
