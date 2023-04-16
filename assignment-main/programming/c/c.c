// copyright (c) 2023 , james1freedictionary
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define flush fflush(stdout);
struct product
{
 unsigned int id;
 unsigned int quantity;
 float price;
 float amount;

 char name[30];
};
struct length
{
 size_t* id;
 size_t* name;
 size_t* quantity;
 size_t* price;
 size_t* amount;
};
void find_length(struct length,struct product[],int); 
size_t max(size_t,size_t);
void scan(struct product p[],int count) 
{
if (count==0){

puts("****** Program to insert product ******");
puts("****** copyright (c) 2023, james1freedictionary ******");
puts("****** written by james1freedictionary ******");
}
 printf("Enter id: ");
 flush
 scanf("%u",&p[count].id);
 while ( p[count].id == 0) {
 puts("The id 0 is not allowed");
 printf("Enter id: ");
 flush
 scanf("%u",&p[count].id);

}



 for (int i=0;i<50;i++){ 

while (count != i && p[count].id == p[i].id)
{
 puts("The id is already existed!");
 printf("Enter id: ");
 flush
 scanf("%u", &p[count].id);
 
}

}
 printf("Enter name: ");
 flush
getchar();
 
 fgets(p[count].name,30,stdin); 
 printf("Enter quantity: ");
 flush
scanf("%u",&p[count].quantity);
 printf("Enter price: ");
 flush
 scanf("%f",&p[count].price);
 

}
void print(struct product p[],int count, struct length l)

{

p[count].name[strcspn(p[count].name,"\n")]=0;
if (count == 0) {
puts(" id  |    name    |  qty  |  price  | amount  ");

puts("-----+------------+-------+---------+---------");}
else {
puts("-----+------------+-------+---------+---------");
}

l.id = malloc(sizeof(size_t));
l.name = malloc(sizeof(size_t));
l.quantity = malloc(sizeof(size_t));
l.price = malloc(sizeof(size_t));
l.amount = malloc(sizeof(size_t));

 find_length(l,p,count);
// printf("%u %u %u %u %u",*l.id,*l.name,*l.quantity,*l.price,*l.amount);
if (*l.id >3 ||*l.name>10||*l.quantity>5||*l.price>7||*l.amount>7)
{

size_t n_id;
size_t n_name;
size_t n_qty;
size_t n_price;
size_t n_amount;
char* s_id;
char* s_name;
char* s_qty;
char* s_price;
char* s_amount;

s_id = malloc(sizeof(char)*(*l.id));

s_name = malloc(sizeof(char)*(*l.name));
s_qty = malloc(sizeof(char)*(*l.quantity));
s_price = malloc(sizeof(char)*(*l.price));
s_amount = malloc(sizeof(char)*(*l.amount));
sprintf(s_id,"%u",p[count].id);
sprintf(s_name,"%s",p[count].name);
sprintf(s_qty,"%u", p[count].quantity);
sprintf(s_price,"%.4f",p[count].price);
sprintf(s_amount,"%.4f",p[count].amount);
if (*l.id>3){
if (*l.id % 3 != 0){
n_id = ((*l.id/3)+1);
} else {
 n_id = *l.id/3;
} 
} else {
 n_id = 0;
}
if (*l.name > 10){
if (*l.name % 10 != 0){
n_name =((*l.name/10)+1)    ;
} else 
{
 n_name = *l.id/10;
}

} else {
 n_name = 0;
}
if (*l.quantity >5){
if (*l.quantity % 5 != 0){
 n_qty = ((*l.quantity/5)+1);}
else {
 n_qty = *l.quantity/5;
}

} else {
 n_qty = 0;
}
if (*l.price > 7){ 
if (*l.price % 7 != 0)
{ n_price = ((*l.price/7)+1);
} else {
 n_price = *l.price/7;
}

} else {n_price = 0;}
if (*l.amount > 7){
if (*l.amount % 7 != 0){ 
 n_amount = ((*l.amount/7)+1);
} else {
 n_amount = *l.amount/7;
}
} else {
 n_amount = 0;
}
size_t max1 = max(n_id,n_name);
size_t max2 = max(n_qty,n_price);
size_t max3 = max(max1,max2);
size_t tmax = max(max3,n_amount);
//printf("tmax: %u",tmax);
//printf("id: %s", s_id);
//printf("name: %s\n", s_name);
int next_s_id=0;
int next_s_name=0;
int next_s_qty=0;
int next_s_price=0;
int next_s_amount=0;
for (int i=0;i<tmax;++i)
{
printf(" %-3.3s | %-10.10s | %-5.5s | %-7.7s | %-7.7s \n",
s_id+next_s_id,s_name+next_s_name,s_qty+next_s_qty,
s_price+next_s_price,s_amount+next_s_amount);

next_s_id += 3;
next_s_name +=10;
next_s_qty +=5;
next_s_price +=7;
next_s_amount +=7;

}

}else{
printf(" %-3u | %-10s | %-5u | %-7.4f | %-7.4f \n",p[count].id,p[count].name,p[count].quantity,p[count].price,p[count].amount);
}


}
void find_length(struct length l, struct product p[],int j){

if (p[j].id != 0)
{
*l.id = floor(log10(abs(p[j].id)))+1;
} else {*l.id=0;}
*l.name = (size_t) strlen(p[j].name);
*l.quantity = floor(log10(abs(p[j].quantity)))+1;
if (p[j].price > 0){
*l.price = floor(log10(abs((int)p[j].price)))+1+5;
} else if (p[j].price < 0){
*l.price = 6;
} else { *l.price = 1;}
if (p[j].amount >0){
*l.amount = floor(log10(abs((int)p[j].amount)))+1+5;
} else if (p[j].amount < 0){
*l.amount = 6;

} else {
*l.amount = 1;
}
}
size_t max(size_t a, size_t b)
{
 if (a > b) {
 return a;
} else {
 return b;}


}

int main()
{

struct product p[50];
struct length l;

char answer[5];
for (int i= 0;i<50;i++){
 if (i!=0){
 printf("Do you insert more product? (yes/no): ");
 flush
 scanf("%s", answer);
 if (strcmp(answer, "n")  == 0 || strcmp(answer,"no") == 0) {
 puts("bye bye!"); 
break;
}

}   
scan(p,i);
 p[i].amount = p[i].price * p[i].quantity;
for (int j=0;j <=i;j++){
print(p,j,l);
}
}

}
