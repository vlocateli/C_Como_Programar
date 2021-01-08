// USE -1 caso nao saiba o tamanho do numero
#define SIZE -1  // tamanho do numero
#define NUM 151 // numero em si


#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool verif_palind(int n, int t);
int verif_tam(int n, int t);

int main(void){
  
    
  bool var;
  int ret;
  int tam;  
 
  
  ret = verif_tam(NUM,SIZE);
  printf("Num  = %i\n", NUM);
  if(SIZE == ret && SIZE != -1)
  {
    var = verif_palind(NUM,SIZE);
    printf("var = %d\n",var);
    if(var)
      printf("%d eh palindromo\n",NUM);
    else
    printf("Nao eh palindromo\n");

  }
  else if(SIZE == -1){
    tam = verif_tam( NUM,-1);
    var = verif_palind(NUM,tam);
    if(var)
      printf("%d eh palindromo\n",NUM);
    else
    printf("Nao eh palindromo\n");
  }



  
  else{
    printf("Fatal 01 : Tamanho de numero incorreto\nEsperava %d recebeu %d\n\n",ret,SIZE);
    return 1;
  }
  return 0;
}

int verif_tam(int n, int t){
  int j = 0;
  while(n){
    n  = n / 10;
    j++;
  }
  return j;
}





bool verif_palind(int n, int t){
  int j = 0 , div  = pow (10, t - 1) , b, e, cont = 0;
  while(j < t){
    e = n % 10;
    b = n / div;
    
    if(b == e)
      cont++;
    n = n / div;
    div = div / 10;
    j++;
  }
  if(cont == t -1 )
    return true;
  else
    return false;
}



