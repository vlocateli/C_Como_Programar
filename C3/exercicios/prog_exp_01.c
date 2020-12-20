#include<stdio.h>

float calc_media(int qtd_alunos);

float calc_sentinela(void);



int main(void){
/*
  int cont = 0;
	float media = 0, soma = 0, nota = 0;
	
	while(cont < 10){
		printf("Digite a nota\n");
		scanf("%f",&nota);
		soma += nota;
		cont ++;
	}


	media = soma / 10;
	printf("Media = %.2f\n",media);
*/
/*
  int n = 10;
  float media = 0;
  media = calc_media(n);
  printf("Media = %.2f\n",media);
*/
  float media = 0;
  media = calc_sentinela();
  printf("Media = %.2f\n",media);
	return 0;
}

float calc_media(int  qtd_alunos){
  float media, soma = 0, nota = 0;
  int cont = 0;
  while(cont < qtd_alunos){
    printf("Digite a nota\n");
    scanf("%f",&nota);
    soma+=nota;
    cont++;
  }

  media = soma/qtd_alunos;

  return media;
}

float calc_sentinela(void){
  float media,soma = 0;
  int nota,qtd = 0;
  printf("Digite -1 para encerrar a leitura de notas\n");
  printf("Digite a nota\n");
  scanf("%d",&nota);
  while(nota != -1){
          qtd++;
          soma += nota;
          printf("Digite -1 para encerrar a leitura de notas\n");
          printf("Digite a nota\n");
          scanf("%d",&nota);
  }
  
  if(qtd != 0){
    media  = soma / qtd;
    //printf("Media  = %.2f", media);
  }
  else
    printf("Fatal error : Quantidade de alunos = 0, encerrando programa\n");
  return media;
  
  return soma;
}

