// 9. Desenvolva um algoritmo para gerar uma matriz 4x4 e, depois, calcular e mostrar:
// - O somatório dos elementos da primeira coluna
// - O valor da multiplicação dos elementos da primeira linha
// - A soma da diagonal principal
// -A soma de todos os elementos da matriz

#include <stdio.h>
int main(){
  int i,j,a[4][4],soma=0,multi=1,diagonal=0,matriz=0;

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      a[i][j]=i+j+2;
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(j==0){
        soma=soma+a[i][j];
      }
    }
  }
  printf("SOMA DA PRIMEIRA COLUNA = %d",soma);

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(i==0){
       multi=multi*a[i][j];
      }
    }
  }
  printf("\nMULTIPLICAÇÃO DOS ELEMENTOS DA PRIMEIRA LINHA =  %d",multi);
  
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if(i==j){
       diagonal=diagonal+a[i][j];
      }
    }
  }
  printf("\nSOMA DA DIAGONAL PRINCIPAL = %d",diagonal);

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        matriz=matriz+a[i][j];
      }
    }
  
  printf("\nSOMA DOS ELEMENTOS DA MATRIZ = %d",matriz);

  

  
  return 0;
}
