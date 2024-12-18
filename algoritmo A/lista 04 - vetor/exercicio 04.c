// 4. Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o
//menor elemento e a sua posição.
#include<stdio.h>
int main(){
  int a[8],menorElemento=9999999999,i,posicao;
  printf("Digite 8 valores:");
  for(i=0;i<8;i++){
    scanf("%d",&a[i]);
     if(a[i]<menorElemento){
        menorElemento=a[i];
          posicao=i;
        
    
    
    }
  }
  printf("o menor elemento é o %d e ele ocupa a posição %d do vetor",menorElemento,posicao);



  return 0;
}
