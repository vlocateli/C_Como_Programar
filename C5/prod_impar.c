#include<stdio.h>

int main(void){
 int j ,k ;
 j = 1;
 j = k;
 while(j <= 15){
  k = 1;
  while(k <= 15){
   if(k % 2 != 0 && j % 2 != 0)
    printf("%d * %d  = %d\n",j,k,j*k);
    k++;
  }
  printf("\n");
  j ++;
 }
}

