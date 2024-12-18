// 6. Ler uma palavra e substituir todas as vogais por #. Mostar a palavra modificada.

#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char nome[50];

    printf("digite uma palavra:");
    gets(nome);

    for(i=0;nome[i]!='\0';i++){
        if(toupper(nome[i])=='A'||toupper(nome[i])=='E'||toupper(nome[i])=='I'|| toupper(nome[i])=='O'||toupper(nome[i])=='U'){
            nome[i]= '#';
        }
    }
    puts(nome);


    return 0;
}
