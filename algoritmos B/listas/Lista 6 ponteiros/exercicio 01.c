#include<stdio.h>

void vertical(char nome[]){
char *p;
p=&nome[0];

printf("nome na vertical:\n");
for( ;*p!='\0'; p++){
    printf("%c\n",*p);

}
return ;
}


int main(){
char nome[50],*p,*p2;

printf("digite um nome:");
gets(nome);

vertical(nome);



return 0;
}
