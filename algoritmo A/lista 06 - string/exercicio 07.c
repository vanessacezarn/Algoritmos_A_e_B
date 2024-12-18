// 7. Escreva um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.

#include<stdio.h>
#include<string.h>
int main(){
    int i,j,tamanho,flag=1;
    char nome[50],palavra[50];

    printf("digite a palavra:");
    gets(nome);
    //tamanho de nome
    for(tamanho=0;nome[tamanho]!='\0';tamanho++);
    for(i=0,j=tamanho-1;i<j;i++,j--){
        if(nome[i]!= nome[j])
            flag=0;
    }
    if(flag==1){
        printf("PALINDROMO");
    }else{
        printf("NAO EH PALINDROMO");
    }


return 0;
}
