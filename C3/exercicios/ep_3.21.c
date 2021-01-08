#include<stdio.h>


void calc_sal(int horas,float sal);


int main(void){
  int horas = 41;
  float sal = (float) 10;
  calc_sal(horas,sal);





}


void calc_sal (int horas,float sal){
  int diferenca = 0;
  float res = 0;
  if(horas <= 40){
    printf("O salario eh de %.2f\n",horas * sal);}
  else{
      diferenca = horas - 40;
      res = diferenca * (sal * 1.5);
      sal = sal * 40 + res;
      printf("Salario = %.2f\n",sal);}
  
  printf("Digite o numero de horas trabalhadas (-1 para interromper)\n");
  scanf("%d",&horas);
  printf("Digite o salario por hora do funcionario\n");
  scanf("%f",&sal);
  while(horas != -1){
        if(horas < 40 || horas == 40){
          printf("O salario eh de %.2f",horas * sal);}
        else{
          diferenca = horas - 40;
          res = diferenca * (sal * 1.5);
          sal = sal * 40 + res;
          printf("Salario = %.2f",sal);}
      
      printf("Digite o numero de horas trabalhadas (-1 para interromper)\n");
      scanf("%d",&horas);
      printf("Digite o salario por hora do funcionario\n");
      scanf("%f",&sal);

  }

}
