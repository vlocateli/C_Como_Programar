#include<stdio.h>


void imprime(int j);

int main(void){
  int j = 1;
  imprime(j);

}

void imprime(int j){
  while(j <= 10)
  {
  if( j == 10){
    printf("%d\n",j);
    break;
  }

  printf("%d   ",j);
  j++;
  }
}



