// 11. Ler uma palavra e duas letras, toda vez que a primeira letra aparecer substituí-la pela segunda. Apresentar a
// como resultado a nova palavra.

#include<stdio.h>
#include<string.h>
int main(){

  int i;
  char nome[50],letra1,letra2;

  printf("digite uma palavra:");
  scanf("%s",nome);
  printf("digite uma letra:");
  //fflush(stdin);
  scanf(" %c",&letra1);
  printf("digite uma letra:");
  //fflush(stdin);
  scanf(" %c",&letra2);
  //enquanto usar replit dar um espaço antes do %c para ler duas letra = seria o equivalente ao fflush(stdin) no codeblocks

  for(i=0;nome[i]!='\0';i++){
    if(nome[i]==letra1){
      nome[i]=letra2;
    }
  }
puts(nome);

  return 0;
}
