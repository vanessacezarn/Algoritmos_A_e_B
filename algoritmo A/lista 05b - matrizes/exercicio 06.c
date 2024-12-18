//6. Faça um programa que leia uma matriz 4x3 e encontre a linha que possui a maior soma de seus elementos.
// Mostre qual é a linha que possui a menor soma.

#include<stdio.h>
int main(){
  int i,j,a[4][3],soma1=0,soma2=0,soma3=0,soma4=0;

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("ELEMENTO[%i][%i]:",i,j);
      scanf("%i",&a[i][j]);
    }
  }
    printf("\nMATRIZ\n");
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if(i==0){
        soma1=soma1+a[i][j];
      }
    }
  }
  printf("\nsoma da primeira linha %d",soma1);

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if(i==1){
        soma2=soma2+a[i][j];
      }
    }
  }
  printf("\nsoma da segunda linha %d",soma2);

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if(i==2){
        soma3=soma3+a[i][j];
      }
    }
  }
  printf("\nsoma da terceira linha %d",soma3);

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if(i==3){
        soma4=soma4+a[i][j];
      }
    }
  }
  printf("\nsoma da quarta linha %d",soma4);
  return 0;
}
