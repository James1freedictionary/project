#include <stdio.h>
void main(){
	int n;
	printf("puts number: ");scanf("%d", &n);
	switch(n){
		case 1: puts("january");break;
		case 2:puts("febuary");break;
		case 3:puts("march");break;
		case 4:puts("april");break;
		case 5:puts("may");break;
		case 6:puts("june");break;
		case 7:puts("july");break;
		case 8:puts("august");break;
		case 9:puts("september");break;
		case 10: puts("october");break;
		case 11:puts("november");break;
		case 12:puts("dece");break;
		default: puts("error");
	}
}