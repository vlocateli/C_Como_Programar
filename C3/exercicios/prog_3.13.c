#include<stdio.h>

int main(void){
  int x = 1,total=0,y;
  
  while(x <= 10){
    y = x*x;
    printf("%02d\n",y);
    ++x;
    total+=y;
  }

  printf("total = %02d",total);
  return 0;

}



