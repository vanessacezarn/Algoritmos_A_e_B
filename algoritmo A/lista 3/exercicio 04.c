//4. Contar a quantidade de números pares e ímpares digitados por um usuário enquanto o
// número for diferente de zero.

#include<stdio.h>
int main(){
    int n,qtdePar=0,qtdeImpar=0;
    printf("\tpara SAIR digite zero\n");
    printf("digite um numero inteiro:");
    scanf("%d",&n);

    
    while(n>0){
      if(n%2==0){
        qtdePar++;
      }else{
        qtdeImpar++;
      }
      printf("Digite um numero inteiro:");
      scanf("%i",&n);
    }
    printf("\tA quantidade de numeros PARES eh %i\n",qtdePar);
    printf("\tA quantidade de numeros IMPARES eh %i\n",qtdeImpar);


  return 0;
}
