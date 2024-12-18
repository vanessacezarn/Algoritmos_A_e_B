// 6. Escreva um programa que leia valores em um vetor de 5 posições. Escrever os elemento
//do vetor e após escrever os elementos na ordem inversa.
#include<stdio.h>
int main(){
  int a[5],i,b[5];
  printf("digite os 5 elementos de um vetor:");
  for(i=0;i<5;i++){
      scanf("%d",&a[i]);
  }
  for(i=4;i>=0;i--){
    printf("\n%d\n",a[i]);
  
  }
  printf("os elementos na ordem inversa sao");

  return 0;
}
