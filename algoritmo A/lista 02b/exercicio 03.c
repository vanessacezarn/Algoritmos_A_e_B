//Escreva um algoritmo que lê três valores para os lados de um triângulo (cada lado do triângulo deve ser menor que a soma dos outros
//dois lados). O programa deve verificar se os lados fornecidos formam realmente um triângulo, e caso esta condição seja verdadeira,
//se o triângulo é equilátero (todos lados iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)

#include<stdio.h>
int main(){
   float a,b,c;
printf("digite os valores dos lados de um triangulo:");
scanf("%f%f%f",&a,&b,&c);
  if(a+b>c && a+c>b && b+c>a){
    printf ("os valores formam um triangulo\n");
  }else{
    printf("os valores não formam um triangulo\n");
  }
    if(a==b && b==c && a==c){
    printf("o triangulo é equilatero\n");
    }else{
          if(a!=b && b!=c && a!=c){
            printf("o triangulo é escaleno\n");
    }else{
            printf("o triangulo é isosceles\n");
          }
            
    
   }

  return 0;
}
