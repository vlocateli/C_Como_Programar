// juros simples 
// juros = principal * taxa * dias / 365

#include<stdio.h>

void calc_juros(float emprestimo, float taxa, int dias);  

int main(void){
  float emprestimo,taxa, juros = 0;
  int dias;

  emprestimo = 1000;
  taxa = 0.08375;
  dias = 224;
  calc_juros(emprestimo,taxa,dias);
}



void calc_juros(float emprestimo, float taxa, int dias){
  float juros = 0;
  while(emprestimo > 0 ){
    juros = emprestimo* taxa * dias / 365;
    printf("O valor dos juros eh de %.2f\n",juros);
    printf("Informe o valor principal do emprestimo (-1 para terminar) \n");
    scanf("%f",&emprestimo);
    printf("Informe o valor principal  a taxa de juros \n");
    scanf("%f",&taxa);
    printf("Informe o prazo do emprestimo em dias\n");
    scanf("%d",&dias);
    juros = emprestimo * taxa * dias  / 365;
 
}
}



