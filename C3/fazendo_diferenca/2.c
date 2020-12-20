//exercicio 3.48


#define IDADE 20
#include<stdio.h>
int main(void){
  float fc_n;
  int fc_m;
  fc_m = 220 - IDADE;
  fc_n =(float)  fc_m * 0.5;
  printf("Idade = %02d\n",IDADE);
  printf("Frequencia cardiaca normal %.2f\n",fc_n);
  printf("Freqencia cardiaca maxima %.2f\n",(float) fc_m);


}
