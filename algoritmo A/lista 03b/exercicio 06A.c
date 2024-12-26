 //Calcule o valor de y na seguinte função: y = 4x + 3.
 // a. Faça a primeira versão com o x variando de -7 até 15.

#include<stdio.h>
int main (){
  int x,y,i,a;
  printf("***calculo da função y=4x+3***");
  for(x=-7;x<=15;x++){
    y=4*x+3;
    printf("\n x=%d\ty=%d",x,y);
  }


  return 0;
}
