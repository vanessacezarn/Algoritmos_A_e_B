//4. Faça um algoritmo para ler duas matrizes de inteiros, de ordem 4x4, e verifique se a soma dos elementos
// das diagonais principais são iguais.

#include<stdio.h>
int main(){
  int a[4][4],b[4][4],i,j,n,p,soma=0,soma2=0;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("digite o elemento [%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n***MATRIZ 1***\n");
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(i==j){
        soma=soma+a[i][j];
        }
    }
  }
  printf("soma dos elementos da diagonal principal:%d\n\n",soma);
  
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("digite o elemento [%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n***MATRIZ 2***\n");
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(i==j){
        soma2=soma2+b[i][j];
        }
    }
  }
  printf("soma dos elementos da diagonal principal:%d\n",soma2);

  if(soma==soma2){
    printf("\nA soma dos elementos da diagonal principal da matriz é IGUAL a da matriz 2");
  }else{
    printf("\nA soma dos elementos da diagonal principal da matriz é DIFERENTE a da matriz 2");
  }
  
  return 0;
}
