#include<limits.h>
#include<stdio.h>

int main(void){
  
  int var = 0, a = 100;
    while(var != -1){
        if(var == 1)
          printf("INT_MAX\n");
        else if(var == 2)
          printf("INT_MIN\n");
        printf("Pre-decremento (--a)\n");
        printf("a = %d\n",a);
        printf("%d\n",--a);
        printf("a = %d\n",a);
        printf("Pos-decremento(a--)\n");
        printf("%d\n",a--);
        printf("a = %d\n",a);
        printf("Digite -1 para interromper o programa\n");
        printf("Nota -> Caso queira ver o compartamento com o INT_MAX ou INT_MIN, digite 1 para INT_MAX e 2 para INT_MIN e 3 para voltar ao default (a = 100) \n");
        scanf("%d",&var);
        if(var == 1)
          a = INT_MAX;
        else if(var == 2 )
          a = INT_MIN;
        
        else if(var == 3)
          a = 100;
    }
    return 0;
}

    

