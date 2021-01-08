#include<stdio.h>

int main(void){
  int cont = 0,entrada,cont_passou=0,cont_n_passou=0;

  printf("Digite 1 -> caso o aluno tenha passado, 2 -> caso o aluno não tenha passado\n");
  scanf("%d",&entrada);
  while(cont < 10){
    if(entrada == 1)
      cont_passou++;
    else if (entrada == 2)
      cont_n_passou++;
    printf("Digite 1: caso o aluno tenha passado,  2: caso o aluno nao tenha passado\n");
    scanf("%d",&entrada);
    cont++;  
  }

  printf("Numero de alunos que passaram\n %02d \n",cont_passou);
  printf("Numero de alunos que nao passaram\n %02d \n",cont_n_passou);
  if(cont_passou > 8)
    printf("Bonus para o instrutor\n");

  return 0;
}






