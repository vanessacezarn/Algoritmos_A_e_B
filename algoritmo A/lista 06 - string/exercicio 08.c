// 8. Ler uma palavra qualquer e uma letra qualquer. Contar quantas vezes esta letra é encontrada na palavra.

#include<stdio.h>
#include<string.h>
int main(){
  int i,qtde=0;
  char nome[50],n;

  printf("digite uma palavra:");
  gets(nome);
  printf("digite uma letra:");
  scanf("%c",&n);

  for(i=0;nome[i]!='\0';i++){
    if(nome[i]==n)
      qtde++;
  }
  printf("a letra '%c' é encontrada %d vezes na palavra %s",n,qtde,nome);
  



  return 0;
}
