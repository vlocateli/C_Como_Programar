#include<stdio.h>


void quadrado(int n );

int main(void){
  int n;
  n = 20;
  while(n >  0){
    quadrado(n);
    printf("\n");
    n--;
  }



  return 0;

}


void quadrado(int n){
  int h,l;
  if(n < 1 || n > 20){
    printf("Numero fora do intervalo [1 ate 20] !");
  }

  else{
    h = n;
    l = n;
    while(l  > 0){
    while(h > 0){
      printf("*");
      h--;

    }
    printf("\n");
    l--;
    h = n;
    }

  }





}
