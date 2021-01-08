#include<stdio.h>


int main(void){
 int j,k,lim = 1,esp = 1;
 printf("(A)\n"); 
 for(j = 1;j<=10;j++){
  for(k=lim;k>=1;k--)
    printf("*");
 
  printf("\n");
  lim ++;
 }
 printf("\n");
 lim = 10;
 printf("(B) \n");
 for(j = 1;j<=10;j++){
  for(k=lim;k>=1;k--)
    printf("*");
 
  printf("\n");
  lim --;
 }
 
 printf("(C)\n"); 
 lim = 10;
 
 for(j = 1;j<=10;j++){
  esp = 1;
  for(k=lim;k>=1;k--){
   while(esp <= 10 - lim){
    printf(" ");
    esp++; 
    }
    printf("*");
  
  }
  printf("\n");
  lim --;
 }
 printf("(D)\n"); 
 lim = 1;
 for(j = 1;j<=10;j++){
  esp = 1;
  for(k=lim;k>=1;k--){
    while(esp <= 10 - lim){
    printf(" ");
    esp++; 
    }
    printf("*");
  }

  printf("\n");
  lim ++;
 }
 printf("\n");

 
 
 
 return 0;
}


