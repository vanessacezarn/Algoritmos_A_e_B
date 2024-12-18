//4. Escreva um programa que leia uma palavra qualquer e escreva como resultado a mesma palavra na ordem
// inversa.

#include<stdio.h>
#include<string.h>
int main(){
    int i,tamanho=0;
    char nome[50];

    printf("digite uma palavra:");
    gets(nome);

    for(i=0;nome[i]!= '\0';i++){
            tamanho++;
    }

    printf("\npalavra na ordem inversa:");
    for(i=tamanho;i>=0;i--){
        printf("%c",nome[i]);
    }

return 0;
}
