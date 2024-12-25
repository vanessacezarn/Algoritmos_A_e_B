// 2. Escreva um algoritmo para ler o valor da variável x e da variável y e calcular o resultado da equação:
// √(x×y) + x×y/ 2×x +3²+ x²/4

#include<stdio.h>
int main(){
  float r,x,y;
  printf("digite o valor de x e y:");
  scanf("%f%f",&x,&y);

  r=sqrt(x*y)+((x*y)/(2*x))+pow(3,2)+(pow(x,2)/4);
  printf("o resultado eh:%f",r);



  return 0;
}
