// 7. Faça um algoritmo que leia 2 vetores A e B, de ordem 8, e calcule o produto escalar do
//vetor. O produto escalar é obtido da seguinte forma: 

#include<stdio.h>
int main (){
    int a[8],b[8],c[8],i,produtoEscalar=0;
    printf("digite os valores do vetor a:");
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    printf("digite os valores do vetor b:");
    for(i=0;i<8;i++){
      scanf("%d",&b[i]);
    }
    for(i=0;i<8;i++){
      c[i]=a[i]*b[i];
      produtoEscalar=produtoEscalar+c[i];
    }
    printf("o produto escalar é %d",produtoEscalar);

  return 0;
}
