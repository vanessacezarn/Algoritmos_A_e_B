//Faça um algoritmo para ler um número natural e calcular quantos são múltiplos deste número maiores que ele e menores que 1000.

#include<stdio.h>
int main(){
  int n,i,r=0;
  printf("digite um numero:");
  scanf("%d",&n);
  for(i=n+1;i<=1000;i++){
  if(i%n==0){
    r++;
  }
  }
printf("a quantidade de multiplos do  numero %d até o 1000 é %d",n,r);
  
    

  return 0;
}
