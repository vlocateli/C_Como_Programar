#include<stdio.h>

int main(void){
 int j;
 for(j = 1;j<= 7; j++)
  printf("%d ",j);
 printf("\n");
 for(j = 3;j<=23;j += 5)
  printf("%d ",j);

 printf("\n");
 for(j = 20;j>= -10; j -= 6)
  printf("%d ",j);
 
 printf("\n");
 for(j = 19;j<= 51;j += 8)
  printf("%d ",j);

 printf("\n");
 return 0;
}


