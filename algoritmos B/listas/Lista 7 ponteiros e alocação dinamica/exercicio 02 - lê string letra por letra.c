//COMANDO DA QUESTÃO
//Faça um programa que lê uma string, letra por letra, e ao final da execução mostra a string completa. Antes 
de começar a ler as letras de string, peça para o usuário informar o tamanho da string e aloque 
dinamicamente um vetor com o tamanho necessário.

#include<stdio.h>
#include<stdlib.h>

//E SE QUISER DIGITAR UMA FRASE ???

void lerString(char *s, int tam){
    int i;
    printf("digite a string letra por letra:\n");

    for(i=0;i<tam;i++){ //LE A STRING LETRA POR LETRA
        printf("letra %i :", i+1); //INDICA A POSIÇÃO QUE A LETRA DIGITADA VAI OCUPAR NA PALAVRA
        fflush(stdin);
        scanf("%c",(s+i));
    }
}

int main(){
    char *s;
    int tamanho;

    printf("DIGITE O TAMANHO DA STRING: ");
    scanf("%i",&tamanho);

    s = (char*)malloc(tamanho*sizeof(char));

    if(!s){
        printf("ERRO NA ALOCAÇÃO DE MEMÓRIA");
        exit(-1);
    }
lerString(s,tamanho);//CHAMA UMA FUNÇAO PARA LER A STRING
printf("PALAVRA DIGITADA : ");
puts(s); //MOSTRAR A PALAVRA DIGITADA --> AO LER A LETRA E ARMAZENAR NO PONTEIRO NÃO É NECESSARIO UM NOVO FOR PARA MOSTRAR A PALAVRA

return 0;
}
