#include "product.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct product {
    int id;
    char name[50];
    int qty;
    float price;
    float amount;
};
void scan_p(struct product* p, int i){
 
     printf("Enter id: ");scanf("%d", &((&(p[i-1]))->id));   
loop1: 
    while ((&(p[i-1]))->id == 0){
    puts("id 0 is not allowed!"); 
    printf("Enter id: ");scanf("%d", &((&(p[i-1]))->id));   

    }   

loop2:  
        for (int e=0; e<i-1;e++){     
        if ( i!=1 && (&(p[e]))->id == (&(p[i-1]))->id){
            puts("the id already existed!");
             printf("Enter id: ");scanf("%d", &((&(p[i-1]))->id));   
            if ((&(p[i-1]))->id == 0){
                goto loop1;
            } else goto loop2;
            }   }
printf("Enter name: ");getchar();fgets((&(p[i-1]))->name,50,stdin);
printf("Enter qty: ");scanf("%d", &((&(p[i-1]))->qty));
printf("enter price: ");scanf("%f", &((&(p[i-1]))->price));
}
void print_p(struct product* p, int i){
    for (int count=0;count < i;count ++){
    int len = strlen((&p[count])->name);
        for (int i=0;i<len;i++){
        if (((&p[count])->name)[i] == '\n'){
            ((&p[count])->name)[i] = '\0';
        }
    }

    if (count == 0) puts(" id | name | qty | price | amount ");  
    puts("----+------+-----+-------+--------");
    printf(" %-2.2d | %-4.4s | %-3d | %-5g | %-6.6f \n", (&p[count])->id,(&p[count])->name,(&p[count])->qty,(&p[count])->price,(&p[count])->amount);                                                                        
} }
void run_p(){

    int i = 1;
    char ans[5];    
    struct product* p;   
   
    while (1){
    if (i==1) p = malloc(i * sizeof(struct product));
    scan_p(p,i);
    p[i-1].amount = p[i-1].price * p[i-1].qty;
    print_p(p,i);
    printf("do you insert more product? (yes/no): ");scanf("%s", &ans);
    if (strcmp(ans,"yes") == 0 || strcmp(ans,"y") == 0) {
        i++;
        p = realloc(p, i*sizeof(struct product));
    } else break;
}}