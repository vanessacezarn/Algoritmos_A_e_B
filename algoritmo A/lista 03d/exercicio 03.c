// 3. Escreva um algoritmo que imprima a tabela de equivalência de graus Fahrenheit para
// Celsius (centígrados). Os limites são de 50 a 70 graus Fahrenheit, com intervalo de 1
// grau. A fórmula para conversão de Fahrenheit (F) para Celsius (C) é

#include<stdio.h>
int main(){
  int C,F;
  printf("***CONVERSÃO DE FAHRENHEIT PARA CELSIUS***\n");
  for(F=50;F<=70;F++){
  C=(F-32)/1.8;
  printf("\n%i°F = %i°C",F,C);
  }
  



  return 0;
}
