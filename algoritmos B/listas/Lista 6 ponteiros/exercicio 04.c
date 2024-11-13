#include<stdio.h>

int palindromo(char nome[]){
    char *p,*pf,*aux;
    pf=p=nome;

    for(;*pf != '\0';pf++);

    pf--;

    for( ;p<pf; p++,pf--){
            if(*p!= *pf){

                return 1;
            }

    }
    return 2;
}



int main(){
char nome[50], *p;
int pal;
printf("digite uma palavra:");
gets(nome);
p=nome;
pal=palindromo(p);
if(pal==2){
    printf("a palavra eh palindromo");
}else{
    printf("nao eh palindromo");
}




return 0;
}
