#include<stdio.h>
#define ALT 5
#define LARG 6

int main(void){
 int x,y,j,k;
 x = ALT;
 y = LARG;
 for(j = 1;j<= x;j++){
  for(k = 1;k<= y;k++){
   printf("@");
  }
  printf("\n");
 }

 return 0;
}

