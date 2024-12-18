// 3. Faça um programa que lê uma string e escreve esta string verticalmente na tela.

#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char nome[40];

    printf("digite uma palavra:");
    gets(nome);

    printf("a palavra escrita verticalmente:\n");
    for(i=0;nome[i]!='\0';i++){
        printf("%c\n",nome[i]);
    }

return 0;
}
