// 15. Criar uma string com todas as letras do alfabeto.

#include<stdio.h>
#include<string.h>
int main(){
    char letra[30];
    int i,x;

    for(i=65,x=0;i<91;i++,x++){
        printf("%c",i);
        
        letra[x]=i;
    }
   //para criar a string
    letra[x]='\0';
    printf("\n");
    puts(letra);




return 0;
}
