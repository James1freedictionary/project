#include <stdio.h>
void main(){
	int n;
	printf("puts month number: "); scanf("%d", &n);
		switch(n){
		case 1: puts("january havce 31 day.");break;
		case 2:puts("febuary have 28 day.");break;
		case 3:puts("march have 31 day");break;
		case 4:puts("april have 30 day");break;
		case 5:puts("may have 31 day");break;
		case 6:puts("june have 30 day");break;
		case 7:puts("july have 31 day ");break;
		case 8:puts("august have 30 day");break;
		case 9:puts("september have 31 day");break;
		case 10: puts("october have 30 day");break;
		case 11:puts("november have 31 day");break;
		case 12:puts("december have 30 day");break;
		default: puts("error");
	}
}