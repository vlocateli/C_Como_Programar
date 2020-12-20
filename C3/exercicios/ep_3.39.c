#define NUM 
#define N 0
#include<stdio.h>

int cont_n (int n, int num);

int main(void){
  int cont;
  cont  =  cont_n(N,NUM);
  printf("%d\n",cont);
  return 0;

}

int  cont_n (int n, int num){
  int digit, cont = 0;
  while(num){
    digit = num % 10;
    num  = num / 10;
    if(digit == n)
      cont++;



  }
  return cont;




}
