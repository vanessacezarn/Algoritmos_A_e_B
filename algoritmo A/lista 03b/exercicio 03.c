//Faça um algoritmo para ler dois números inteiros. Calcular e mostrar o valor resultante seelevarmos a base representada pelo 
//primeiro à potência representada pelo segundo.

#include <stdio.h>
int main() {
int a,b,r;
  printf("digite dois numeros interios\n");
  scanf("%i%i",&a,&b);

  r=pow(a,b);
  printf("o resultado eh %i",r);
  
  return 0;
}
