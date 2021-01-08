#include<stdio.h>

int calc_soma(void);

int main(void){
  int soma = 0;
  soma = calc_soma();
  printf("Soma = %02d \n",soma);
  return 0;
}


int calc_soma(void){
  int j, soma = 0;
  j = 1;
  while(j <= 10){
    soma += j;
    j++;
  }

  return soma;
}
