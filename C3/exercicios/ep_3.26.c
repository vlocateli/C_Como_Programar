#include<stdio.h>

void imprime(int n);


int main(void){
  int n = 5;
  imprime(n);


}

void imprime(int n){
  int j = 3,cont = 1;
  printf("A\t\tA+2\t\tA+4\t\tA+6\t\t\n");
  while(cont<=n){
    printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",j,j+2,j+4,j+6);
    j+= 3;
    cont++;
  }

}

    

