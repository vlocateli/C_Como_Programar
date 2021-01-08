#define N 10
#define TAX 0.05
#define INV 1000
#include<stdio.h>
/*
vf = vp(1+t)^n
vf -> valor do deposito depois do enesimo ano
vp -> valor original investido
t  -> taxa de juros anual
n  -> numero de anos
*/
float power(float base,float exp);
int main(void){
 int i; 
 float vf = 0, vp,t;
 t = TAX;
 vp = (float) INV;
 for(i = 1;i<=N;i++) {
   vf = vp * (power((1.0 + t),(float) i));
   printf("Ano %02d\t\tValor na conta %.2f\n",i,vf);
 }


}

float power(float base,float exp){
    float res = 1,cont=1;
  if(exp>= 0){
    while(cont<= exp){
      res *= base;
      cont++;
    }
  }
  else{
    exp *= -1;
    while(cont<=exp){
      res *= base;
      cont++;
    }
    res = 1/res;
  }
  return res;
  }


