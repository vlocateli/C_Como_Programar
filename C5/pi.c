#include<stdio.h>
#include<math.h>
#define MAX 100000000 
int main(void){
  long double pi, den,j;
  
  den = 3;
  pi = (long double) 4;
  j = 1;
  while(j < MAX){
   if(fmodl((long double)j,(long double)2) != 0 )
    pi -= 4/den;
   else
    pi += 4/den;
   den += 2;
   j++;
   //printf("term = %d\npi = %Lf\n",j,pi); 
  }
   
  printf("term = %.Lf\npi = %Lf\n",j,pi); 
}
