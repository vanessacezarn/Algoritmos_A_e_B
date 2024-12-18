// 3. Somar uma sequencia de números digitados enquanto os números são diferentes de zero.
#include<stdio.h>
int main(){
  int i,soma=0;

  
  while(i!=0){
  printf("digite um numero:");
  scanf("%d",&i);
  soma=soma+i;
    printf("\ta soma eh %d\n",soma);
  }
  
  

  return 0;
}
