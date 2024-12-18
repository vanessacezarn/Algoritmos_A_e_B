//2. Ler dois números e calcular o somatório dos números do intervalo.

#include<stdio.h>
int main(){
  int a,b,aux,soma=0,i;

  printf("digite dois numeros:");
  scanf("%i%i",&a,&b);

  if(a>b){
    aux=a;
    a=b;
    b=aux;
  }
  for(i=a;i<=b;i++){
    soma=soma+i;
  }
  printf("\n A SOMA DOS NUMEROS DO INTERVALO eh %.2i",soma);
  return 0;
}
