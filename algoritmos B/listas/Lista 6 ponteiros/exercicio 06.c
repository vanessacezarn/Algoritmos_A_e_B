
#include<stdio.h>
void posicao(char nome[],char n){
char *p;
p=nome;
for(;*p!='\0';p++){
    if(*p==n){
        *p='\0';
    }
}
return ;
}

int main(){
char n,nome[50];
printf("digite uma palavra:");
gets(nome);
printf("digite uma letra:");
scanf("%c",&n);
posicao(nome,n);
puts(nome);

return 0;
}
