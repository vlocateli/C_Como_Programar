#include<stdio.h>
#define VAL 7


int main(void){
  int intVal,x,val;
  char charVal;
  //4.5 a)
  val = VAL;
  printf("4.5 a)\n");
  for(x = 100;x >= 1; x--)
   printf("%d\n",x);
  printf("4.5 b)\n");
  switch(val % 2 ){
   case 0:
    printf("Eh par\n");
    break;
   case 1:
    printf("Eh impar\n");
    break;
  }
  printf("4.5 c)\n");
  scanf("%d",&intVal);
  scanf(" %c",&charVal); 
  printf("Inteiro: %d\nCaractere %c\n",intVal,charVal);
    

}

