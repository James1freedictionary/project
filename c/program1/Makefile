file := main.c product.c product.h
defualt: build
build: build-static
build-static: ${file}
	gcc -static main.c product.c -lm
build-dynamic: ${file}
	gcc main.c product.c -lm
build-nolink: ${file}
	gcc -c -fPIC main.c product.c 
run: build
	./a.out
test: test.c
	gcc test.c && ./a.out
clean: 
	rm -rf *.o a.out
