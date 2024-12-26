//Calcule o valor de y na seguinte função: y = 4x + 3.
// b. Construa uma outra versão deste algoritmo, onde o intervalo de variação do x é informado pelo usuário.

#include<stdio.h>
int main(){
  int x,y,a,b;
  printf("***calculo da função y=4x+3");
  printf("\ndigite o intervalo da variação de x:");
  scanf("%d%d",&a,&b);
  for(x=a;x<=b;x++){
    y=4*x+3;
    printf("\nx=%d\ty=%d",x,y);
  }



  return 0;
}
