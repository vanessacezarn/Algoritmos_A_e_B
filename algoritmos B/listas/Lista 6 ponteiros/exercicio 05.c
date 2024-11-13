#include<stdio.h>

int compara(char nome[], char palavra[]){
    char *p,*p2;
    p=nome;
    p2=palavra;
    for(;*p!='\0'||*p2!='\0';p++,p2++){
    if(*p!=*p2){
        return 1;
    }
    }
return 2;
}

int main(){
char nome[50],palavra[50];
int comp;

printf("digite um nome:");
gets(nome);
printf("digite um segundo nome:");
gets(palavra);
comp=compara(nome,palavra);
if(comp==2){
    printf("as palavras digitadas sao iguais.");
}else{
    printf("as palavras digitadas sao diferentes");
}



return 0;
}
