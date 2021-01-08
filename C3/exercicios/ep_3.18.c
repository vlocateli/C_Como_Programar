#include<stdio.h>

void limite_credit(int num_conta, float total_enc,float total_credit,float limit_credit, float saldo );



int main(void){
  int num_conta = 100;
  float total_enc = 1000, total_credit = 500,limit_credit = 5500, saldo = 5394.78;
  limite_credit( num_conta,total_enc,total_credit,limit_credit,saldo);


  return 0;
}


void limite_credit(int num_conta, float total_enc,float total_credit,float limit_credit,float saldo ){
  printf("Conta: %02d\n",num_conta);
  printf("Limite de credito %.2f \n",limit_credit);
  saldo = (saldo + total_enc - total_credit);
  printf("Saldo : R$ %.2f\n",saldo);
  if(saldo > limit_credit){ printf("Limite credito ultrapassado\n");}

  while(num_conta != -1 ){
    printf("Digite a conta: \n");
    scanf("%d",&num_conta);
    printf("Digite o saldo inicial\n");
    scanf("%f",&saldo);
    printf("Digite o total de encargos\n");
    scanf("%f",&total_enc);
    printf("Digite o total de creditos\n");
    scanf("%f",&total_credit);
    printf("Digite o limite de crédito\n");
    scanf("%f",&limit_credit);
    saldo = (saldo + total_enc - total_credit);
    printf("Conta: %02d\n",num_conta);
    printf("Saldo : R$ %.2f\n",saldo);
    printf("Limite de credito %.2f \n",limit_credit);
    printf("Saldo : R$ %.2f\n",saldo);
    if(saldo > limit_credit){ printf("Limite credito ultrapassado\n");
}
}
}





