//Faça um algoritmo para ler um número menor que 1000 e calcular e mostrar todos os números ímpares maiores que o número lido
//e menores que 1000.

#include<stdio.h>
int main(){
  int a,r,i;
  printf("digite um numero inteiro menor que mil:");
  scanf("%d",&a);

  if(a>1000){
    printf("ERRO: O NUMERO DIGITADO NÃO É MENOR QUE 1000");
  }else{
    printf("OS NUMEROS IMPARES DO INTERVALO DE %d AO 1000 SÃO:\n",a);
  for(i=a;i<=1000;i++){
    r=i%2;
    if(r!=0){
      printf("%d\t",i);
    }
  }
  }


  return 0;
}
