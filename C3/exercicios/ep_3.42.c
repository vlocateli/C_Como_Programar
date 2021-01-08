#define PI 3.14159
#define RAIO 5
#include<stdio.h>


void circulo(float raio);

int main(void){
  circulo(RAIO);


}

void circulo(float raio){
  float dmtr, a, crc;
  crc = 2 * PI * raio;
  a = PI * (raio * raio);
  dmtr = 2 * raio;
  printf("Diametro = %.2f\n",dmtr);
  printf("Circuferencia = %.2f\n",crc);
  printf("Area = %.2f\n",a);




}
