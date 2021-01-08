#include<stdio.h>

int main(void){
 int vet[5] = {0,0,0,0,0}, num = 0,c = 0,c2;
 while (c < 5){
  printf("Digite um numero\n");
  scanf("%d",&num);
  while(num<1 || num>30){
   printf("Numero invalido\n");
   printf("Digite um numero\n");
   scanf("%d",&num);
  }
  vet[c] = num;
  c++;
  }
 c = 0;
 c2 = 0;
 printf("\n");
 for(c = 0;c<5;c++){
  c2 = 0;
  while(c2 < vet[c]){
    printf("*"); 
    c2++;
  }  
  printf("\n");
 }
}

