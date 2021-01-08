#include<stdio.h>

#define MAX_DIG 9 //Number of digits in the bin representation, in this case is 256 in bin

void int_to_bin(int n);





int main(void){
 
  int j; 
  j = 1;
  printf("---------------------------------------------------------------------------------------------------------------\n");
  printf("Base 10\t\t|\t\tBase 16\t\t|\t\tBase 8\t\t|\t\tBase 2\n");
 
  while(j<=256){
   printf("%d\t\t|\t\t%X\t\t|\t\t%o\t\t|\t\t",j,j,j);
   int_to_bin(j);
   printf("\n");
   j++; 
  } 
  printf("---------------------------------------------------------------------------------------------------------------\n");
  
  return 0;
}


void int_to_bin (int n){
  int vet[MAX_DIG];

  int r,cont,j; //resto
  cont = 0;
  while(n){ // while num != 0
    
      vet[cont] = n % 2;
     

    n /= 2;
    cont++;
    }

  for( j = cont - 1;j>=0;j--)
    printf("%d",vet[j]);
    
  }  
    
