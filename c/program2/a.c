#include <stdio.h> 
void main(){
	int n;
	float riel,dollar;
	puts("------ Exchange Money-------");
	puts("1. Exchange riel to dollar");
	puts("2. Echnage dolalr to riel");
	printf("Please, choose one of them");scanf("%d", &n);
	switch (n){
		case 1: 
			printf("Enter dollar: ");scanf("%f",&n);
			dollar = riel/rate;
			printf("dollar: %f", dollar);
			break;
		case 2: 
			printf("Enter riel: ");scanf("%f", &n);
			riel = rate * dollar;
			printf("riel: %f", riel);
			break;
		default: puts("error");
	}
}