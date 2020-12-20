#define N 10
#define TERM 10 // define o numero de termos
#define X 2.2
#include<stdio.h>
#include<math.h>
#include<time.h>

double fatorial(double n);
double e (double prec);
double e_pow(double prec,double x);
int main(void){

  clock_t t;
  t = clock();
  double res;
  float n = 1;  
  while(n <= N){
    res = fatorial(n);
    printf("%.2f! =  %.2f\n",n,res);
    n++;
  }
  



  

  // iterativo
  double fat = 1;
  int cont = 1;
  
  while(cont <= N ){
    fat *= cont;
    printf("%02d! =  %.2f\n",cont,fat);
    cont++;
  }

  t = clock() - t;
  double tempo = ((double) t / CLOCKS_PER_SEC); //Em segundos
  printf("Tempo levado %.2lf\n",tempo);
  
  res = 0;
  res = e(TERM);
  res  = 0;
  res = e_pow(TERM,X);
}


//recursivo
double fatorial(double n){
  if(n == 0)
    return 1;

  else
    return (n) * fatorial(n-1);
} 

double e( double terms){
  double cont = 1, res = 1;
  
  while(cont <= terms){
    res += (1 / fatorial(cont));
    cont++;
  }
  
  printf("e ~= %f\n",res);

  return res;
}

double e_pow(double terms, double x){
  double e = 1;
  int cont =  1;
  while(cont <= terms){
    e += pow(x,cont)/fatorial(cont);
      cont++;
   }

  printf("E^%f ˜= %f\n",x,e);
  return e;

  }
