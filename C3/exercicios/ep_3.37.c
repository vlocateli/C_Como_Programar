#include<time.h>
#include<stdio.h>
#include<math.h>

/*

O codigo abaixo comentado serve como ideia para o codigo com numeros maiores, nao eh aconselhavel rodar o programa. O programa comentado roda em aproximadamente 0.000123, dividindo por 60 * 60 (numero de segundos em uma hora), vemos 12300 horas, dividindo por 24 (numero de horas em 1 dia), temos 512 que da aproximadamente 1 ano e 40 % de um ano

*/

int main(void){
  double soma = 0, cont = 1, cont2 = 0;
  clock_t t;

 char p;
 printf("Deseja realmente rodar o programa (S/N)\n");
 scanf("%c",&p);
 while(p  != 'S' && p != 'N'){
 printf("Opcao invalida\n\n");
 printf("Deseja realmente rodar o programa (S/N)\n");
 scanf("%c",&p);
 }
 if(p == 'S'){
  t = clock();
  while( cont2 < 100000000){ 
      soma = 0;
      cont = 1;
      while(cont <=300000000 ){
        soma+=cont;
        if(fmod(cont,100000000) == 0){
            printf("%.0f\n",cont);
        }
        cont++;

    }
      cont2++;
    }
  }
 else{
   printf("Saindo...\n\n");
   return 1;

 }

 /*


  while(cont2 < 1){
    soma = 0;
    cont = 1;
    while(cont < 3){
      soma += cont;
      if(fmod(cont,1) == 0)
        printf("%.0f\n",cont);
      
      cont++;
    }
    cont2++;


    }
*/

  

  t = clock() - t;
  double tempo = ((double) t / CLOCKS_PER_SEC); // em segundos
  printf("Levou %f\n",tempo);


  return 0;
}

