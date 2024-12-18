// 2. Escreva um algoritmo que leia um vetor com 50 posições de números inteiros, mostre
//somente os positivos e por fim mostre a quantidade de números positivos no vetor.

#include<stdio.h>
int main(){
  int vetor[5],qtde=0;

  for(int i=0;i<5;i++){
   printf("digite um numero:"); 
  scanf("%i",&vetor[i]);
    if(vetor[i]>0){
      qtde++;
    }
  }
  printf("a quantidade de numeros positivos é %d",qtde);


  return 0;
}
