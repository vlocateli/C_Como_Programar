#include<stdio.h>

void prod_quimc ( float vendas);


int main(void){
  float vendas = 5000;
  prod_quimc(vendas);
}


void prod_quimc( float vendas){
  float total = 0;
  total += (float) (200 + 0.09 * vendas);

  while(vendas != -1 && vendas >= 0 ) {
    total = 0;
    total += (float) (200 + 0.09 * vendas);
    printf("O pagamento eh de R$ %.2f\n",total);
    printf("Informe a venda em Reais\n");
    scanf("%f",&vendas);
  }

}


