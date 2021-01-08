#include<stdlib.h>
#include<stdio.h>
#define NUM 1001
#define BIN 0b1001
#define NUM_OCT 20
int pot (int base, int exp);
int bin_to_int(int n);
int octal_to_int(int n);

int main(void){
  int res;
  res = bin_to_int(NUM);
  printf("%d  =  %d \n",NUM,res);
  res = octal_to_int(NUM_OCT);
  printf("%d  = %d \n",NUM_OCT, res);


}

int pot (int base, int exp){
  int res = 1, cont = 0;
  while(cont < exp){
    res *= base;
    cont++;
  }

   
  return res;

}

int octal_to_int(int n){
  int digit, j = 1, soma = 0;
  while(n){
    digit = n % 10;
    n = n / 10;
    soma += digit * j;
    j *= 8;
  }

  return soma;


}
int bin_to_int(int n){
  int digit, j = 1, soma  = 0;
  printf("NUMERO  = %i \n",NUM);
  while(n){
  digit = n % 10;
  n = n / 10;
  soma += digit * j;
  j *= 2;
  }

  if( soma == (int) (BIN) )
    printf("Sao iguais\n");
  else{
    printf("O macro %d nao corresponde ao macro do numero a ser convertido (%d) -- \nFatal\n",BIN,NUM);
    exit(-1);
  }






  return soma;

}


