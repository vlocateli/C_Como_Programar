#include<stdio.h>

int main(void){
  int n;
  puts("Digite um numero");
  scanf("%d",&n);
  while(n != 1 &&  n != 2){
   puts("Digite um numero (diferente de 1 ou de 2)");
   scanf("%d",&n);
  }
  return 0;

}
