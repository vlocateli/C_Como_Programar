#include<stdio.h>
#include<math.h>

double fatorial(double n);

int main(void){


  double res, n = 0;
  while(n < 100){
    res = fatorial(n);
    printf("%.2f\n",res);
    n++;
  }



}

double fatorial(double n){
  if(n == 0)
    return 1;

  else
    return (n) * fatorial(n-1);
} 
