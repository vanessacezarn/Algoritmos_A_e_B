 //7. Gere uma matriz A, 10 x 10, e mostre ao usuário. A seguir, leia um número diferente de zero e gere uma
 //nova matriz B, 10 x 10, sendo que cada elemento de B é obtido pela divisão do elemento correspondente de
 //A pelo número informado.

#include <stdio.h>
int main(){
  int i,j,a[4][4],soma=0,multi=1,diagonal=0,matriz=0;
  float b[4][4],n;

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      a[i][j]=i+j+2;
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }

  printf("digite um numero:");
  scanf("%f",&n);

  printf("NOVA MATRIZ\n");
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      b[i][j]=a[i][j]/n;
      printf("%.2f\t",b[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
