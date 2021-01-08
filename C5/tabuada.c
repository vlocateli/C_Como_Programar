#define END 10
#define BGN 5
#include<stdio.h>
void tabuada(int bgn,int end);
void tabuada_for(int bgn,int end);

int main(void){
  tabuada(BGN,END);
  tabuada_for(BGN,END);
}


void tabuada(int bgn,int end){
  int i,j;
  i = bgn;
  j = 0;
  while(i<=end){
    j = 0;
    printf("Tabuada do %d\n",i);
    while(j<=end){
      printf("%d x %d = %d\n",i,j,i*j);
      j++;
    }
    printf("\n");
    i++;
  }
}

void tabuada_for(int bgn,int end){
  int i,j;
  for(i = bgn; i<= end; i++){
    printf("Tabuada do %02d\n",i);
    for(j = 0 ; j<= end; j++)
      printf("%02d x %02d = %02d\n",i,j,i*j);
    printf("\n");
  }

}
