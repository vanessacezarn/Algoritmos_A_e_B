 //5. Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que encontrar a
 //letra informada.

#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char nome[50],n;

    printf("digite uma palavra:");
    gets(nome);

    printf("digite uma letra:");
    scanf("%c",&n);

    for(i=0;nome[i]!='\0';i++){
        if(nome[i]==n){
            nome[i]='\0';
        }
    }
puts(nome);
return 0;
}
