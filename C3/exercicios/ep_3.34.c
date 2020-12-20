#include<stdio.h>


void quadrado(int n );
void retangulo(int l, int h);

int main(void){
  int n;
  n = 5;
  quadrado(5);
  retangulo(10,5);

  return 0;

}


void quadrado(int n){
  int h,l;
  h = 1;
  l = 1;
  while(h <= n){
    l = 1;
    while(l <= n){
      if((h == 1 || h == n) || ( l == 1 || l == n) ){
          printf("*");
      }

      else
        printf(" ");
    l++;
    }
    h++;
    printf("\n");
  } 
}


void retangulo(int l,int h){
  int j=0,k=0;
  while(j < h){
    k = 0;
    while(k < l){
      if( (k == 0 || k == l - 1) || ( j == 0 || j == h - 1)){
          printf("*");
      }

      else{printf(" ");}
      
      k++;
  } 
  j++;
  printf("\n");
}
}








