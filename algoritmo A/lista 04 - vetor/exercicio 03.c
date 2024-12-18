// 3. Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
// elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
// resultante.
#include<stdio.h>
int main(){
  int a[2],b[2],c[2],i;
  printf("digite 10 valores para os vetores A:\n");
  for(i=0;i<10;i++){
     printf("valor %i:",i+1);
    scanf("%i",&a[i]);
  }
  printf("digite os valores para os vetores B:\n");
  for(i=0;i<10;i++){
    printf("valor %i:",i+1);
    scanf("%i",&b[i]);
  }
  for(i=0;i<10;i++){
    c[i]=a[i]*b[i];
    printf("\nMULTIPLICAÇÃO DOS VETORES A*B:%i",c[i]);
  }
  return 0;
}
