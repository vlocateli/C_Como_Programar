#include<stdio.h>


void km_por_litro (int km, float litros);


int main(void){
  int km;
  float litros, res;
  /*printf("digite a quantidade de litros (-1 para terminar)\n");
  scanf("%f",&litros);
  while(litros != -1){
    printf("Informe a quantidade de quilometros dirigidos\n");
    scanf("%d",&km);
    res = (float) km / litros;
    printf("KM / L = %.2f \n",res);
    printf("Digite a quantidade de litros (-1 para terminar)\n");
    scanf("%f",&litros);
  }*/
  km = 287;
  litros = 25.6;
  km_por_litro(km,litros);

  return 0;
}

void km_por_litro(int km, float litros){
  float res;
  if (litros > 0 ){
    res = km / litros;
  }

  printf("KM / L =  %.2f\n",res);
  printf("Digite a quantidade de litros (-1 para terminar)\n");
  scanf("%f",&litros);

  while(litros != -1 && litros > 0){
      printf("Informe a quantidade de quilometros dirigidos\n");
      scanf("%d",&km);
      res = (float) km / litros;
      printf("KM / L = %.2f \n",res);
      printf("Digite a quantidade de litros (-1 para terminar)\n");
      scanf("%f",&litros);

  }

}


