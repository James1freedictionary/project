section .data
 hello: db "hello world"
 hellolen: equ $-hello
section .text
 global _start
 _start:
  mov eax,4
  mov ebx,1
  mov ecx,hello
  mov edx,hellolen
  int 0x80
  mov eax,1
  mov ebx,0
  int 0x80
