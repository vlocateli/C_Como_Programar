#include<stdio.h>

void desenha_tab (int linhas);
int main(void){
  

  desenha_tab(8);
  return 0;
}

void desenha_tab (int linhas){
  int j = 0;
  int k = 0;
  while(j < 8){
    k = 0;
    while(k<8){
      if(j % 2 == 0)
        printf("* ");
      else
        printf(" *");
    k++;
    }  
  
    printf("\n");
    j++;
  }
  


};

