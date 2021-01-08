#include<stdio.h>

#define N 20

void h_sqr(int n);

int main(void){
  h_sqr(N);

}


void h_sqr(int n){
  int cont1 = 0; //altura
  int cont2 = 0; // largura

  while(cont1 < n){
    cont2 = 0;
    while(cont2 < n){
      if(cont1 == 0  || cont1 == n - 1 || cont2 == 0 || cont2 == n -1)
        printf("*");
      else
        printf(" ");
     cont2++;
    }
    printf("\n");
    cont1++;

  }


}
