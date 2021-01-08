#include<stdio.h>
#define FALSE 1
#define TRUE 0

int verifica (int n);

int main(void){
  int n = 8, v;
  v = verifica(n);
  if(TRUE  == v)
   printf("%d eh par\n",n);
  else
   printf("%d eh impar\n",n);


}


int verifica(int n){
 int ret;
 switch(n % 2){
  case 0:
   return TRUE;
  case 1:
   return FALSE;
   } 
return -1;   
}
