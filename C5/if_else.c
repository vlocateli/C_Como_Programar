#include<stdio.h>
int main(void){
  int c; // contador
  char * v_lt[6] = {"a","b","c","d","f"};
  char let;
  int notas[5]={0,0,0,0,0};
  
  printf("Digite uma letra\n");
  printf("Digite EOF para encerrar\n\n");
  /*
  while((c = getchar()) != EOF){
  switch(c){
    
    case 'A':
    case 'a':
      notas[0]++;
      break;
    
    case 'B':
    case 'b':
      notas[1]++;
      break;
    
    case 'C':
    case 'c':
      notas[2]++;
      break;  
    
    case 'd':
    case 'D':  
      notas[3]++;
      break;  
    
    case 'F':
    case 'f':
      notas[4]++;
      break;  
    case '\n':
    case '\t':
    case ' ':
    break;


    default:
      printf("Letra incorreta\nDigite uma letra entre A e F\n");
      break;

  }
  }
  */
  while(scanf(" %c ",&let) != EOF){
    while(let != 'a' && let != 'A' && let != 'b' && let != 'B'  && let != 'c' && let != 'C' && let !='d' && let !='D' && let != 'f' && let != 'F' && let != EOF){
       printf("Letra incorreta\nDigite uma letra entre A/B/C/D/F \n");
       scanf("%c",&let);
    }
    if(let == 'a' || let == 'A')
       notas[0]++;
  
    else if (let == 'b' || let == 'B')
       notas[1]++;
  
    else if(let == 'c' || let =='C')
       notas[2]++;
  
    else if(let == 'd' || let == 'D')
      notas[3]++;

    else if(let == 'F' || let == 'f')
      notas[4]++;
    
  
  }
  
  printf("\n"); 
  for(c=0;c<5;c++){
   printf("%s = %d ",v_lt[c],notas[c]);
   printf("\n"); 
  }
  printf("\n"); 

  return 0;
}
