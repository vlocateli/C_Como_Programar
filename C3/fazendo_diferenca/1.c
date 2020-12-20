#include<stdio.h>

int main(void){
  double n;
  n = 7.75e9;
  double amnt = 83e6;
  
  int cont = 0;
  while(cont < 5){
    printf("Ano -> %02d\n",(2020 + cont  + 1) );
    n+= amnt;
    printf("Populacao -> %.2e \n",n);
    cont ++;
  }
  return 0;


}
