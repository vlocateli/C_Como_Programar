#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
int main(void){
    int x,y,g,b,a,i,j,val, v;
    bool exp1,exp2;
    y = 8;
    g = 10;
    b = 3;
    a = 1;
    i = 10;
    j = 3;
    printf("(A)");
    exp1 = !(x < 5) && !(y >= 7);
    exp2 = x< 5 || y >= 7;
    if(exp1 != 0 || exp2 != 0){
     exp1 = TRUE;
     exp2 = TRUE;
    }
    else{
     exp1 = FALSE;
     exp2 = FALSE;
    } 
    if(exp1 == exp2)
     printf("Sao equivalentes exp1 e exp2\n");

    printf("(B)");
    exp1 = !(a == b) || !(g != 5);
    exp2 = a == b && g != 5 ;

    if(exp1 != 0 || exp2 != 0){
     exp1 = TRUE;
     exp2 = TRUE;
    }
    else{
     exp1 = FALSE;
     exp2 = FALSE;
    } 
    if(exp1 == exp2)
     printf("Sao equivalentes exp1 e exp2\n");

    printf("(C)");
  
    exp1 = !((x <= 8) && (y > 4) );
    exp2 = x <= 8 && y > 4;
    if(exp1 != 0 || exp2 != 0){
     exp1 = TRUE;
     exp2 = TRUE;
    }
    else{
     exp1 = FALSE;
     exp2 = FALSE;
    }
    
    if(exp1 == exp2)
        printf("Sao equivalentes exp1 e exp2\n");
    printf("(D)");
    exp1 = !(( i > 4) || (j <= 6) );
    exp2 = i > 4 && j <= 6;
    if(exp1 != 0 || exp2 != 0){
     exp1 = TRUE;
     exp2 = TRUE;
    }
    else{
     exp1 = FALSE;
     exp2 = FALSE;
    }
    if(exp1 == exp2)
        printf("Sao equivalentes exp1 e exp2\n");


}
