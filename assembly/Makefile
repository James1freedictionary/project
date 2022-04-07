a.o: a.asm
	nasm  -f elf64 a.asm
build: a.o 
ld:  build
	gcc -nostdlib a.o
run:  ld
	./a.out
clean:
	rm -f a.o a.out
