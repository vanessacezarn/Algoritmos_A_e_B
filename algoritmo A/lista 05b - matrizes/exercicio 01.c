// 1. Implemente um algoritmo para transpor matrizes 2x3. Transpor uma matriz significa transformar suas
// linhas em colunas e vice-versa.

#include<stdio.h>
int main(){
  int a[2][3],b[3][2],i,j;

  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("Elemento [%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n***MATRIZ***\n");
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
printf("\n***MATRIZ TRANSPOSTA***\n");
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      b[i][j]=a[j][i];
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }

  return 0;
}
