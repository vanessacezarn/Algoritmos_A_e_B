// 1. Escreva um programa que leia uma palavra qualquer e conte o número de vogais.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int a=0,i=0;
    char nome[40];

    printf("digite um nome:");
    gets(nome);

    for(i=0;nome[i]!='\0';i++){
        if(toupper(nome[i])=='A'|| toupper(nome[i])=='E'||toupper(nome[i])=='I'||toupper(nome[i])=='O'||toupper(nome[i])=='U')
        a++;
    }
    printf("o numero de vogais da palavra eh %d",a);



return 0;
}
