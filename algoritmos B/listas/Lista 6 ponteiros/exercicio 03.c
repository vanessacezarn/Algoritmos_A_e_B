#include<stdio.h>

void vertical(char s[]){
char *pf,*ps,aux;

pf = ps = s;


    //laço para posicionar pf no \0
    for( ;*pf != '\0'; pf++);

    //posicionar o ponteiro na ultima letra
    pf--;

    //inverter a palavra
    for( ;ps<pf; ps++,pf--){
        aux = *ps;
        *ps = *pf;
        *pf = aux;
    }

    printf("Palavra invertida: %s", s);


return ;
}


int main(){
char nome[50],*p,*p2;

printf("digite um nome:");
gets(nome);

vertical(nome);



return 0;
}
