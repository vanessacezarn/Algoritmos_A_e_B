
#include<stdio.h>

int contador(char nome[]){
char *p,a=0;
p=&nome[0];


for( ;*p!='\0'; p++){
    a++;

}
return a;
}


int main(){
char nome[50];
int total;

printf("digite um nome:");
gets(nome);

total=contador(nome);
printf("o numero de caracteres na palavra digitada eh igual %i",total);



return 0;
}
