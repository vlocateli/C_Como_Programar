#include<stdio.h>
#define N 10
int main(void){
//  int c; // contador
//  int notas[5]={0,0,0,0,0};
/*  
  printf("Digite a notas em letras\n");
  printf("Digite EOF para encerrar\n\n");
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
    case '-':
    case '+':  
    case '*':
    case '/':   
    break;


    default:
      printf("Letra incorreta\nDigite uma letra entre A e F\n");
      break;

  }
  }
  printf("A -> %02d\n",notas[0]);
  printf("B -> %02d\n",notas[1]);
  printf("C -> %02d\n",notas[2]);
  printf("D -> %02d\n",notas[3]);
  printf("F -> %02d\n",notas[4]);
 
 
 for(c = 0;c<N;c++){
    printf("%d ",c);
  }
  printf("\n");

  c = 0;
  do{
    printf("%d ",c);
    c++;
  }
  while(c<N);
  printf("\n");
  c = 0;
 
  for(c = 0;c<N;c++)
    printf("%d ",c);
  printf("\n");


  switch(c){
    case 0:
      printf("c = 0\n");
      break;
    case 1:
      printf("c = 1\n");
      break;
    case 2:
      printf("c = 2\n");
      break;
    default:
        printf("valor incorreto!\nNao esta entre 0 e 2\n");
        printf("Valor de c -> %d\n",c);
        break;
    }

  int j;
  for(j=0;j<5;j++){
    if(j==3)
      continue;
    printf("%d ",j);
  }
 printf("Saiu do loop com j = %d",j); 
   return 0;
}

*/
/*
int j;
j = 5;
if(!(j==6)){
  printf("%d diferente de 6\n",j);
}

if(j = 0)
 printf("Erro logico");

int x;
printf("x -> %d\n",x++);
printf("x - > %d\n",x);
printf("x -> %d\n",++x);
printf("x - > %d\n",x);

int y;


for(y = 1;y != 10;y += 1)
  printf("%f\n",(float) y/10);
int val;
val = 7;
switch(val % 2 ){
 case 0:
  printf("Eh par\n");
  break;
 case 1:
  printf("Eh impar\n");
  break;
}
*/

int intVal;
char charVal;
printf("Digite um inteiro\n");
scanf("%d",&intVal);
printf("Digite um caractere\n");
scanf(" %c",&charVal); 
printf("Inteiro: %d\nCaractere %c\n",intVal,charVal);


return 0;
}
