#include "problem.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct problem{
	char* problem;
};
void run_problem(){

	char answer[10];
	struct problem* problems = malloc(100 * sizeof (struct problem));
	
	problems[0].problem = "0. find if number is even or odd";
	problems[1].problem = "1. find max of 2 numbers";
	problems[2].problem = "2. find root of linear equation";
	problems[3].problem = "3. find name of each month";
	problems[4].problem = "4. find area of circle";
	problems[5].problem = "5. find area of rectangle";
	problems[6].problem = "6. find name of month number";
	problems[7].problem = "7. find root of two degree polynomial equation";
	problems[8].problem = "8. find how many day of each month";
	problems[9].problem = "9. find name of each month";
	problems[10].problem = "10. Insert products";
	problems[11].problem = "11. write text to file";
	problems[12].problem = "12. read text from file";
	problems[13].problem = "13. reverse integer";
	problems[14].problem = "14. calculate sum of integer 1,2,3,...,n";
	problems[15].problem = "15. calculate n! = 1x2x3x...xn";
	problems[16].problem = "16. calcuale the sum of 1,3,5,7,...,(2n-1)";
	problems[17].problem = "17. reverse string";
	int n = 10;
	int i = 0;
label1:
	while ( i <= n){
		if (problems[i].problem != NULL){
	puts(problems[i].problem);}  else return;
	i++;
	}
	do {
label2:
	printf("[type 'yes' to solve these problems or type 'next' to see other probelms or 'no' to exit]: ");
	scanf("%s", answer);
	
	if (strcmp(answer, "yes") == 0) {
		free(problems);return ;
	} else if (strcmp(answer, "next") == 0){
		n += 10;
		goto label1;
	
	}
	else if (strcmp(answer, "no") == 0) {exit(0);}
	else goto label2;
	} while (strcmp(answer, "next") == 0);
	
}