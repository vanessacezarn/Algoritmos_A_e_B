//Escrever um programa que leia duas datas no formato dd/mm/aaaa e verifique qual dada ocorre primeiro. Use estruturas para armazenar
//os dados. Também é necessário o uso da função atoi() que converte uma string em um número inteiro.

#include<stdio.h>
#include<string.h>
struct data{
    int dia;
    int mes;
    int ano;

};

int main(){
    char datalida[15];
    char datalida2[15];
    struct  data x, y;
    char aux[5];
    int k,j;
    printf("digite a data dd/mm/aaaa: ");
    gets(datalida);
    printf("digite a segunda data dd/mm/aaaa:");
    gets(datalida2);

    aux[0]=datalida[0];
    aux[1]=datalida[1];
    aux[2]='\0';
    x.dia=atoi(aux);

    aux[0]=datalida[3];
    aux[1]=datalida[4];
    x.mes=atoi(aux);

    aux[0]=datalida[6];
    aux[1]=datalida[7];
    aux[2]=datalida[8];
    aux[3]=datalida[9];
    aux[4]='\0';
    x.ano=atoi(aux);
//segunda data

    aux[0]=datalida2[0];
    aux[1]=datalida2[1];
    aux[2]='\0';
    y.dia=atoi(aux);

    aux[0]=datalida2[3];
    aux[1]=datalida2[4];
    y.mes=atoi(aux);

    aux[0]=datalida2[6];
    aux[1]=datalida2[7];
    aux[2]=datalida2[8];
    aux[3]=datalida2[9];
    aux[4]='\0';
    y.ano=atoi(aux);

    k=x.ano-y.ano;
    
    if(k!=0){
        if(x.ano>y.ano){
        printf(" \na segunda data ocorreu primeiro");
        }else{
        printf("\na primeira data ocorreu primeiro"); 
        }
    }
 if(k==0){
  j=x.mes-y.mes;
            if(j!=0){
                if(x.mes>y.mes){
                 printf("\na segunda data ocorreu primeiro");
                }else{
                 printf("\na primeira data ocorreu primeiro");
                 }
            }else{
                if(x.dia>y.dia){
                    printf(" \na segunda data ocorreu primeiro");
                }else{
                    printf("\na primeira data ocorreu primeiro"); 
                }
            }
        }
            
    
    
return 0;
}
