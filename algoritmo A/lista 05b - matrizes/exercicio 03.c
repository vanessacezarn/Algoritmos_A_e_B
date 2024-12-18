//3. Faça um programa que leia uma matriz 5x5. Após leia um valor qualquer e conte quantas vezes este valor
//aparece na matriz. 

#include<stdio.h>
int main(){
  int a[5][5],i,j,n,qtde=0;

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("elemento[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n***MATRIZ***\n");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
}
  printf("digite um numero:");
  scanf("%d",&n);
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(n==a[i][j]){
        qtde++;
      }
    }
  }
  printf("o numero %d sparece %d vezes na matriz",n,qtde);
  return 0;
}
