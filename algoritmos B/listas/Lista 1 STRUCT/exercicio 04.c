//Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elementouma estrutura que contém o nome do produto,
//seu preço de compra e seu preço de venda. Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.

#include <stdio.h>
#include <string.h>
struct tipoProduto{
  char nome[30];
  float compra;
  float venda;
  
};
int main(){
  int i,a;
  float menorCompra=9999999;
  struct tipoProduto p[3];

  for(i=0;i<3;i++){
    printf("Nome do produto %i:",i+1);
    gets(p[i].nome);
    printf("digite o valor da compra de %i: ",i+1);
    scanf("%f",&p[i].compra);
    printf("digite o valor da venda de %i:", i+1);
    scanf("%f",&p[i].venda);
  }

  for(i=0;i<3;i++){
    if(p[i].compra<menorCompra){
      menorCompra=p[i].compra;
      a=i;
    }
  }
printf("\nO PRODUTO  %s de indice %i FOI O QUE TEVE O MENOR PREÇO DE COMPRA %f",p[a].nome,a+1,menorCompra);  

  //p[a].nome



  
  return 0;
}
