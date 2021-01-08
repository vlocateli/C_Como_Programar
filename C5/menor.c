#include<stdio.h>

int main(void){
 int n,menor, c = 0,atual;
 printf("Digite quantos inteiros\n");
 scanf("%d",&n);
 while(c < n){
  scanf("%d",&atual);
  if(atual<= menor)
   menor = atual;
  c++;
 }
 printf("Menor = %d\n",menor);
 return 0;
}

