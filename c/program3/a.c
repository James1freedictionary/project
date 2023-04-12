#include <stdio.h>
void main(int argc, char **argv){
	if (argc != 2){
		printf("usage: %s x\n", argv[0]);
	}
	double x = atof(argv[1]);
}