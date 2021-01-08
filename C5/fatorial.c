#include<stdio.h>
#define N 60.0
long  double   rec_fatorial(long double n);

long double  fatorial(long double  n);

int main(void){
  long double res;
  res = rec_fatorial(N);
  printf("%.3Lf\n",res);  
}



long double fatorial(long double n ){
 long double  res,c;
 c = 1;
 res = 1;
 while(c <= n){
  res *= c;
  c++;
 }
 return res;
}

long double rec_fatorial(long double n){
 if(n == 0)
  return (long double) 1;
 
 else if(n == 1)
  return 1;

 else
  return n * rec_fatorial(n - 1 );
}

