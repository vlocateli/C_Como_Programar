#include<stdio.h>

void imprime(int n);


int main(void){
  int n = 10;
  imprime(n);


}

void imprime(int n){
  int j = 1;
  printf("N\t\t10*N\t\t100*N\t\t1000*N\t\t\n");
  while(j<=n){
    printf("%d\t\t%d\t\t%d\t\t%d\t\t\n",j,j*10,j*100,j*1000);
    j++;
  }
}

    
