//2. Escreva um programa que leia uma string e mostre ao usuário quantos caracteres possui (tamanho da
// string).

#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char nome[40];

    printf("digite uma palavra:");
    gets(nome);

    for(i=0;nome[i]!= '\0';i++){
    }

    printf("a palavra possui %d caracteres\n",strlen(nome));
return 0;
}
