#include<stdio.h>

int potencia(int base,int expoente);

int main(void){
  int x, y, resultado;
  printf("Digite o valor da base\n");
  scanf("%d",&x);
  printf("Digite o valor do expoente\n");
  scanf("%d",&y);
  resultado = potencia(x,y);
  printf("%02d ^ %02d = %02d",x,y,resultado);
  return 0;
}

int potencia(int base,int expoente){
  int res = 1, cont = 0;
  while (cont < expoente){
    res *= base;
    cont++;
  }

  return res;
}

