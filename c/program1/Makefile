c_file := main.c product.c problem.c
h_file := product.h problem.h
file := ${c_file} ${h_file}
defualt: build
build: build-static
build-static: ${file}
	gcc -static ${c_file} -lm
build-dynamic: ${file}
	gcc ${c_file} -lm
build-nolink: ${file}
	gcc -c -fPIC ${c_file} 
run: build
	./a.out
test: test.c
	gcc test.c && ./a.out
clean: 
	rm -rf *.o a.out
