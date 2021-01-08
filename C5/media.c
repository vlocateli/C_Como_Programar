#include<stdio.h>
double media(void);
int main(void){
  double res = 0;
  res = media();
  printf("Media  = %.3f\n",res);
}

double media(void){
 double media;
 int c = 0,cont = 0,soma = 0;
 while(9999 != c){
  soma += c;
  printf("Digite um numero\n");
  scanf("%d",&c);
  if(c != 9999)
   cont++;
 }
 media = soma / cont;
 return media;
}
