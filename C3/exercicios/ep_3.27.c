#define TAM 6 // tamanho do vetor;
#include<stdio.h>
void  acha_2_maiores(int n);
void maiores_vet(int vet[],int n);
int main(void){
    int  vet[TAM] = {1,2,100,200,201,205};
    maiores_vet(vet,TAM);
  
  acha_2_maiores(10);
}


void  acha_2_maiores(int n){
  int i = 0, maior_1,maior_2,num;
  while(i<n){
    printf("Digite um numero\n");
    scanf("%d",&num);
    if(num > maior_1 && num > maior_2)
      maior_1 = num;
    if(num > maior_2 && num < maior_1)
      maior_2 = num;
    i++;
  }    
  printf("Maior 1 %d \nMaior 2 %d \n",maior_1,maior_2);
}

void maiores_vet(int vet [],int n)
{
  int j = 0 , maior_1 = 0 , maior_2 = 0;
  while(j < n){
    if(vet[j] > maior_1 && vet[j] > maior_2){
      maior_2 = maior_1;
      maior_1 = vet[j];
    }

    if(vet[j] > maior_2 && vet[j] < maior_1){
      maior_2 = vet[j];
  }
  j++;
}
  printf("Maior 1 -> %d\n", maior_1);
  printf("Maior 2 -> %d\n",maior_2);

  }





