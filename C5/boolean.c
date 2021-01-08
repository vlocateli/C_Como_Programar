#include<stdio.h>
#include<stdbool.h>
void tip_logic(void);


int main(void){
  tip_logic();

}

void tip_logic(void){
  int exp1 , exp2;
  exp1 = exp2 = 0;
  printf("&& -> AND Logico\n");
  printf("|| -> OR Logico\n");
  printf("! -> NOT Logico\n");
  printf("exp1 = %d\t exp2=%d\t \nexp1&&exp2 = %d\n",exp1,exp2,exp1&&exp2);
  exp2= 3; //nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1&&exp2 = %d\n",exp1,exp2,exp1&&exp2);
  exp2 = 0;
  exp1 = 3; // nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1&&exp2 = %d ",exp1,exp2,exp1&&exp2);
  exp1 = 8; //nao zero
  exp2 = 2; //nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1||exp2 = %d ",exp1,exp2,exp1&&exp2);
  printf("\n");
  exp1 = exp2 = 0;
  printf("exp1 = %d\t exp2=%d\t \nexp1||exp2 = %d\n",exp1,exp2,exp1||exp2);
  exp2= 3; //nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1||exp2 = %d\n",exp1,exp2,exp1||exp2);
  exp2 = 0;
  exp1 = 3; // nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1||exp2 = %d ",exp1,exp2,exp1||exp2);
  exp1 = 8; //nao zero
  exp2 = 2; //nao zero
  printf("exp1 = %d\t exp2=%d\t \nexp1||exp2 = %d ",exp1,exp2,exp1||exp2);
  exp1 = 0;
  printf("\n");
  printf("exp1 = %d, !exp1 = %d\n",exp1,!exp1);
  exp1 = 1;
  printf("exp1 = %d, !exp1 = %d\n",exp1,!exp1);
  

}

