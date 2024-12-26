//Desenvolva um algoritmo que leia n números e mostre o maior e o menor número lido.

#include<stdio.h>
int main(){
  int n,i,maior=0,menor=999999999;
  for(i=0;i<=5;i++){
    printf("digite um numero:");
    scanf("%d",&n);
    if(n>maior){
      maior=n;
    }

    if(n<menor){
      menor=n;
    }
  }
    
  printf("\n MAIOR numero=%d",maior);
  printf("\n MENOR numero=%d",menor);
  return 0;
}
