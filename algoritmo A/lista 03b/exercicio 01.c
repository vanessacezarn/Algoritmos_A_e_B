//Faça um algoritmo para calcular e escrever a tabuada dos números de 1 a 10.

#include<stdio.h>
int main(){
    int a,b,r;
  printf("***TABUADA DO 1 AO 10***\n");

  for(a=1;a<=10;a++){
      printf("\n***TABUDA DO %d***",a);
      for(b=1;b<=10;b++){
        r=a*b;
        printf("\n%i X %d = %d\t",a,b,r);
        
      }
  }



  return 0;
}
