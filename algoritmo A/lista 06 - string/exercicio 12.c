//12. Escrever um programa em C para ler uma string e um número n, e eliminar n caracteres do final da string.
//A string resultante deve ser mostrada na tela

#include<stdio.h>
#include<string.h>
int main(){
  int i,n,qtde,k;
  char nome[70],palavra[70];

  printf("digite uma palavra:");
  gets(nome);
  printf("digite um numero:");
  scanf("%i",&n);

  for(i=0;nome[i]!='\0';i++){
    }

  k=i-n;
  nome[k]='\0';

    puts(nome);

  return 0;
}
