#define T 5
#include<stdio.h>
/*

----*----
---***---
--*****--
-*******-
*********
-*******-
--*****--
---***---
----*----

*/
int main(void){
  
  int esp, lim_est,j,k,i;
  esp = 4;
  lim_est = 1;
 for(i=0;i<5;i++){
   for(j=esp;j>0;j--){
      printf(" ");
   }
   for(k = 0;k<lim_est;k++){
    printf("*");
   } 
    printf("\n");
    lim_est +=2;
    esp--;
 }
esp = 1;
lim_est = 7;
for(i = 0;i<4;i++){
 for(j=0;j<esp;j++)
  printf(" ");
 for(k = 0;k<lim_est;k++)
  printf("*");
 printf("\n");
 esp++;
 lim_est -= 2;
 }

return 0;
}



