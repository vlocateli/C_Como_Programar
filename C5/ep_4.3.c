#include<stdio.h>
double pow(double base,double exp);
int main(void){
 int soma = 0,j,x = 1;
 //float x = 333.546372;
 for(j=1;j<=99;j++){
  if(j % 2 != 0)
    soma+=j;
 }
/*
printf("Soma = %d\n",soma);

printf("x = %15.1f\n",x,j);
printf("x = %15.2f\n",x,j);
printf("x = %15.3f\n",x,j);
printf("x = %15.4f\n",x,j);
printf("x = %15.5f\n",x,j);
printf("x = %15.f\n",x,j);
printf("x = %-15.f\n",x,j);

double res;
res = pow(2.5,3);
printf("%-10.2f\n",res);
*/
while(x <= 20){
 printf("%d",x);
 if (x % 5 == 0)
  printf("\n");
 else
  printf("\t");
 ++x;
}
int y;


for(y = 1;y != 10;y += 1)
  printf("%f\n",(float) y/10);

return 0; 
}

 
double pow(double base,double exp){
 double res = 1, cont = 0;
 if(exp >= 0)
 {
  while(cont<exp){
   res *= base;
    cont++;
 }
 } 
 else{
  exp *= -1;
  while(cont < exp){
   res *= base;
   cont++;
  }
 res /= 1;
 }
 return res;
}


