#include <stdio.h>
#define PESO_1 3.5
#define PESO_2 7.5
int main() {
 
    
    double A ,B, MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    MEDIA = ((A*PESO_1) + (B*PESO_2)) / (PESO_1+PESO_2);
    printf("MEDIA = %.5f\n",MEDIA);
    return 0;
}
