// copyright (c) 2023 - james1freedictionary
#ifndef __GNUC__
#include <conio.h>
#endif
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "problem.h"
#include "product.h"

void main(int* argc, char** argv)
{

char answer[10];
int n_of_case;
label1:
	run_problem();
	printf("Please choose one of them: ");scanf("%d", &n_of_case);
	switch(n_of_case){
		case 0: 
				int n0;
				printf("Input n: ");scanf("%d", &n0);
				printf("The number is %s\n", n0 % 2 == 0 ? "even" : "odd");
				break;
		case 1: 
				double n1,n2,max; // find max of 2 number
				printf("Enter n1: ");scanf("%lf", &n1);
				printf("Enter n2: ");scanf("%lf", &n2);
				max = n1>n2?n1:n2;
				printf("The max is %g\n", max);
				break;
		case 2: 
				double a,b,root; // find root of linear equation

				printf("Enter a: ");scanf("%lf", &a);
				printf("Enter b: "); scanf("%lf", &b);
				if (a==0){
					puts("error, there is no root!\n");
					break;
				}
				else {root = -b/a;}
				
				printf("The root is %g\n", root);
				break;
		case 3: 
			int n_month; // find name of each month
			printf("Enter month number: ");scanf("%d", &n_month);
			char* month[12] = {"january", "febuary", "march", "april","may","june","july","august","september","october","november","december"};				
			switch(n_month)
			{	
				case 1: printf("it's %s\n",month[0]);break;
				case 2: printf("it's %s\n",month[1]);break;
				case 3: printf("it's %s\n",month[2]);break;
				case 4: printf("it's %s\n",month[3]);break;
				case 5: printf("it's %s\n",month[4]);break;
				case 6: printf("it's %s\n",month[5]);break;
				case 7: printf("it's %s\n",month[6]);break;
				case 8: printf("it's %s\n",month[7]);break;
				case 9: printf("it's %s\n",month[8]); break;
				case 10:printf("it's %s\n",month[9]);break;
				case 11:printf("it's %s\n",month[10]);break;
				case 12:printf("it's %s\n",month[11]);break;
				case 13:printf("it's %s\n",month[12]);break;
				default: puts("error");
			}
			break;

		case 4: 
				double  r,s; // find area of circle
				printf("Entser radius");scanf("%lf",&r);
				s = pow(r,2)*M_PI;
				printf("The area of circle is %g\n",s);break;
		case 5: //find area of rectangle
			double a1,b1,s1;
			printf("Enter a: ");scanf("%lf", &a1);
			printf("Enter b: ");scanf("%lf", &b1);
			s1 = a1*b1;
			printf("The area of rectangle is %g\n",s1);break;
		case 6: // find name of month number
			unsigned int n;
			printf("puts month number: ");scanf("%d",&n);
			switch (n){
				case 1: puts("It's january.");break;
				case 2: puts("It's febuary.");break;
				case 3: puts("It's march.");break;
				case 4: puts("It's april.");break;
				case 5: puts("It's may")	;break;
				case 6:	 puts("It's june")		;break;	 
				case 7: puts("It's july");break;
				case 8: puts("It's august");break;
				case 9:puts("It's september");break;
				case 10:puts("It's october");break;
				case 11:puts("It's november");break;
				case 12:puts("It's december");break;
				default: puts("error");


			} break;
		case 7:  //
			float a2,b2,c2,delta;
			printf("puts a: ");scanf("%f", &a2);
			printf("puts b: ");scanf("%f", &b2);
			printf("puts c: ");scanf("%f", &c2);
			delta = pow(b2,2)-4*a2*c2;
			if (delta < 0) puts("there is no root\n");
			else if (delta == 0) printf("root = %f\n", -b2/(2*a2));
			else printf("root = {%f,%f}\n", (-b2+sqrt(delta))/(2*a2), (-b2-sqrt(delta))/(2*a2));
			break;

		case 8: //find how many day of each month
			int n3;
			printf("puts month number: "); scanf("%d", &n3);
			switch(n3){
			case 1: puts("january havce 31 day.");break;
			case 2:puts("febuary have 28 day.");break;
			case 3:puts("march have 31 day");break;
			case 4:puts("april have 30 day");break;
			case 5:puts("may have 31 day");break;
			case 6:puts("june have 30 day");break;
			case 7:puts("july have 31 day ");break;
			case 8:puts("august have 30 day");break;
			case 9:puts("september have 31 day");break;
			case 10:puts("october have 30 day");break;
			case 11:puts("november have 31 day");break;
			case 12:puts("december have 30 day");break;
			default: puts("error");
		} break;
		case 9: //find name of each month
			int n4;
			printf("puts number: ");scanf("%d", &n4);
			switch(n4){
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
			}	break;
		case 10: run_p(); break; // run in the product.c
		case 11: // write text to file
			char name[50];
			char text[8000000];
		
			printf("name of file to write to: "); getchar();fgets(name,50,stdin);
			for ( int i = 0;i < 50; i++) {
				if (name[i] == '\n') {
					name[i] = '\0';
				}
			}
			printf("puts text: ");fgets(text,8000000,stdin);
			FILE* fp;
			fp = fopen(name, "w");
			fputs(text,fp);
			fclose(fp);
			break;
		case 12: // read text from file
			char name1[50];
			char chr;
			printf("name of file to read from: "); getchar();fgets(name1,50,stdin);
			for ( int i = 0;i < 50; i++) {
				if (name1[i] == '\n') {
					name1[i] = '\0';
				}
			}
			FILE* fp1;
			if ((fp1 = fopen(name1, "r")) == NULL) puts("file doesn't exist!\n");break;
			while ((chr = fgetc(fp1)) != EOF){
				putc(chr, stdout);
			}

		case 13: // reverse integer 
			long n5, rev= 0; 

			printf("Enter number: ");scanf("%ld", &n5);
			while (n5 != 0 ){
				rev = rev * 10 + n5 % 10;
				n5 = n5 /10;
			}
			printf("The reverse is %ld\n", rev);break; 
		case 14: // calculate sum of integer 1,2,3,...,n
			long n6,sum=0;
			printf("Enter n: ");scanf("%ld", &n6);
			for (int i = 0; i<n6;i++){
				sum = sum + i+1;
			}
			printf("The sum is %ld\n", sum);
			break;
		case 15: // calculate n! = 1x2x3x...xn
			unsigned long n7;
			long long p=1;
			printf("Enter n (n>=0): ");scanf("%lu", &n7);
			for (int i=0;i<n7;i++){
				p = p * (i+1);
			}
			printf("The %lu! = %lld\n", n7,p);break;
		case 16: // calcuale the sum of 1,3,5,7,...,(2n-1)
			unsigned long n8;
			unsigned long long sum1=0;
			printf("Enter n: ");scanf("%lu", &n8);
			for (int i=0;i<n8;++i){
				sum1 = sum1 + 2*(i+1)-1;
			}
			printf("The sum is %llu\n", sum1);
			break;
		case 17: // reverse string
			char string[100];
			char rev_str[100];
			printf("Please Enter String: ");getchar();fgets(string, 100, stdin);
			if (string[strlen(string)-1] == '\n') string[strlen(string)-1] = '\0';
			for (int i = 0; i<strlen(string); ++i){
				rev_str[i] = string[strlen(string)-1-i];
			}
			printf("%s\n", rev_str);
			break;
		default: puts("Error");


		}
	


label2: 
	printf("Do you choose again? (yes/no): ");
	scanf("%s", answer);
	if (strcmp(answer, "no") == 0 ||strcmp(answer, "n") == 0  ){
	puts("bye bye!"); exit(1);
	} else if (strcmp(answer, "yes") == 0 || strcmp(answer, "y") == 0)
	{
	goto label1;
	} else {goto label2;}
	}