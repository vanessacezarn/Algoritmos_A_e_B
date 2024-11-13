#include<stdio.h>
void contador(char nome[],char n){
    int a=0;
    char *p;
    p=nome;
    for(;*p!='\0';p++){
        if(*p==n){
            a++;
        }
    }
    printf("a letra '%c' aparace %i vezes na palavra %s",n,a,nome);
return ;
}

int main(){
char nome[50],n;
printf("digite um nome:");
gets(nome);
printf("digite uma letra:");
scanf("%c",&n);
contador(nome,n);
return 0;
}
