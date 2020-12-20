#include<stdio.h>

int main(void){
  int j = 0,num, max;
  while(j<10){
    printf("Digite um numero\n");
    scanf("%d",&num);
    if(num > max)
      max = num;
    j++;
  }
  printf("Maximo = %d\n",max);




}
