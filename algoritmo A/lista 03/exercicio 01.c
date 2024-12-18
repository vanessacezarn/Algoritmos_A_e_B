// 1. Ler dois números e mostrar os números pares do intervalo

#include<stdio.h>
int main(){
    int a,b,auxiliar,i;
  printf("digite dois numeros inteiros:");
  scanf("%i%i",&a,&b);

  if(a>b){
    auxiliar=a;
    a=b;
    b=auxiliar;
  }
  printf("os numeros pares do intervalo entre %i e %i são:",a,b);
  for(i=a;i<=b;i++) {
    if(i%2==0){
      printf("\t%i",i);
    }
  }




  return 0;
}
