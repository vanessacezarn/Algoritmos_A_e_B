//Fazer um programa que leia uma string no formato hh:mm:ss, converta os elementos desta strings em inteiros armazenando-os em uma 
//estrutura e mostre o resultado na seguinte forma: “hh hora(s), mm minuto(s) e ss segundo(s).” Para esta questão, utilize a função 
//atoi() que converte uma string em um número inteiro.

#include<stdio.h>
#include<string.h>
struct horario{
    int hora;
    int min;
    int seg;

};

int main(){
    char horalida[9];//hh:mm:ss\0
    struct horario x;
    char aux[3];//os dois caracteres + o \0
    printf("digite o horario hh:mm:ss : ");
    gets(horalida);
//CONVERSÃO DA HORA --STRING PARA INT --> atoi()
    aux[0]=horalida[0];
    aux[1]=horalida[1];
    aux[2]='\0';
    x.hora=atoi(aux);
//conversão da hora
    aux[0]=horalida[3];
    aux[1]=horalida[4];
    //aux[2] ja esta o \0
    x.min=atoi(aux);
//conversao segundo
    aux[0]=horalida[6];
    aux[1]=horalida[7];
    x.seg=atoi(aux);

    printf("%d hora(s),%d minuto(s) e %d segundos\n",x.hora,x.min,x.seg);
return 0;
}

