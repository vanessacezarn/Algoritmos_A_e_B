// 9. Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso contrário,
// informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira ou se são
// diferentes e tem o mesmo tamanho.

#include<stdio.h>
#include<string.h>
int main(){
  int i,a,qtde=0;
  char nome[50],palavra[50];

  printf("digite uma palavra:");
  gets(nome);
  printf("digite uma palavra:");
  gets(palavra);

      for(i=0;nome[i]!= '\0';i++){
      }
  printf("tamanho do nome:%d\n",i);
    
    for(a=0;palavra[a]!= '\0';a++){
      }
  printf("tamanho do nome:%d\n",a);

  if(i==a){
    printf("as palavras tem o mesmo tamanho");
    for(i=0;nome[i]!= '\0';i++){
     if(nome[i]==palavra[i]){
       printf("\nas palavras são iguais");
     }else{
       printf("\nas palavras tem o mesmo tamanho mas são diferentes");
     }
    }
  }else{
    printf("as palavras tem tamanhos diferentes");
    if(i>a){
      printf("\na primeira palavra eh maior que a segunda palavra");
    }else{
      printf("\na segunda palavra eh maior que a primeira palavra");
    }
  }


 
  
  

  return 0;
}
