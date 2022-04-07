// copyright 2023, brorojame2030@gmail.com
#ifndef __GNUC__
#include <conio.h>
#endif
#include <stdio.h>
#include <stdlib.h>
int main(int* argc, char** argv){
  // declare case-number pointer and allocate some memory address
  unsigned* n = malloc(sizeof(unsigned));
  puts("1. calculate S = 3+ 5 + 7 + 9");
  puts("2. calculate S = 3 + 6 + 12 + 24");
  puts("3. calculate S = 2 + 4 + 6 + 8");
  printf("Please, choose one of them: ");scanf("%u", n);
  switch(*n){
  case 1: int s=0;for (int i=0;i<4;i++){s=s+((i+1)*2+1);}
    printf("The sum is %d\n", s);break;
  case 2: int s1=0;for (int i=1;i<=8;i*=2){s1=s1+(3*i);}
    printf("The sum is %d\n", s1);break;
  case 3: int s2=0;for(int i=0;i<4;i++){s2=s2+(2*(i+1));}
    printf("The sum is %d\n", s2);break;
  default: fprintf(stderr, "error\n"); exit(1);}
  return 0;
}
