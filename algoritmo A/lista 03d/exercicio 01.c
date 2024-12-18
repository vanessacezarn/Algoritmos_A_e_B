//1. Encontre as raízes de uma equação de 2º grau ax2 + bx + c. O algoritmo deverá ler os 
//coeficientes a, b e c e calcular as raízes utilizando a fórmula de Báskara:
// O algoritmo deve ficar lendo os valores dos coeficientes a, b e c até que os valores
// fornecidos para os três coeficientes sejam 0 (zero). Para cada conjunto de valores de
// coeficientes lidos, o algoritmo deverá calcular e escrever os valores das duas raízes x1 e
//x2. Se as raízes forem imaginárias (∆ negativo, sendo ∆ = b2 - 4ac ) o algoritmo deverá
//escrever que não foi possível calcular as raízes. Se a = 0, ele deve escrever que a equação
// é de primeiro grau.

#include<stdio.h>
int main(){
  int a,b,c,x1,x2,delta;
  printf("***BASCARA DE 3 NUMEROS DIGITADOS***\n");

  while(a!=0 & b!=0 & c!=0){
    printf("digite tres valores:");
    scanf("%d%d%d",&a,&b,&c);
  if(a==0){
    printf("NÃO EH UMA EQUAÇÃO DO SEGUNDO GRAU\n");
  }else{
    delta=b*b-4*a*c;
    printf("delta=%d\n",delta);
    if(delta<0){
    printf("NÃO FOI POSSIVEL CALCULAR AS RAIZES\n");
    }else{
    x1=-b+sqrt(delta)/2*a;
    x2=-b-sqrt(delta)/2*a;
    printf("x1=%d e x2=%d\n",x1,x2);
  }
  }
  }


  return 0;
}
