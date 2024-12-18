//1. Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
// conte quantos valores pares existem no vetor.

#include<stdio.h>
int main(){
  int a[20],i,qtde=0;

    for(i=0;i<20;i++){
      printf("digite um numero:");
      scanf("%d",&a[i]);
    
    if(a[i]%2==0){
      qtde++;
    }
    }
    printf("quantidade de numeros pares:%d\n",qtde);
    
  return 0;
}
