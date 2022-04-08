arithmetic: arithmetic.asm
	nasm -f elf64 arithmetic.asm
	gcc arithmetic.o
	./a.out
a.o: a.asm
	nasm  -f elf64 a.asm
build: a.o 
ld:  build
	gcc -nostdlib a.o
run:  ld
	./a.out
clean:
	rm -f *.o *.out
