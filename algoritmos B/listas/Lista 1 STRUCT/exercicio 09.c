// Escrever um programa que lê um horário hh:mm:ss e verifica se este está correto.

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
if(x.hora>24){
    printf("opcao de hora incorreta");
}else{
    if(x.min>60){
    printf("opcao dos minutos incorreta");
}else{
    if(x.seg>60){
    printf("opcao dos segundos incorreta");
}else{
    printf("%d hora(s),%d minuto(s) e %d segundos\n",x.hora,x.min,x.seg);
}
}
}
return 0;
}
