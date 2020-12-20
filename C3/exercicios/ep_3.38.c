#include<stdio.h>


int main(void){
  int n = 0;
  while(n < 100){
    if(n % 10 != 0)
      printf("*");
    else
      printf("\n");
    
  n++;
  }
  printf("\n");

}
