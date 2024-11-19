//COMANDO DA QUESTÃO
//Fazer a soma de dois vetores alocados dinamicamente. O tamanho dos vetores é informado pelo usuário.

#include<stdio.h>
#include<stdlib.h>

void lervetor(float *V, int tam){
    int i;
    printf("digite os elementos do vetor\n");
    for(i=0;i<tam;i++){
        printf("elemento [%i]:",i+1);
        scanf("%f",(V+i));
    }
    return ;
}

void mostravetor(float *V, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("\t%.2f",*(V+i));
    }
return ;
}

void somavetores (float *v, float *v2,float *vR, int tam){
    int i;

    for(i=0;i<tam;i++){
        *(vR+i)=*(v+i)+*(v2+i);
    }
    return ;
}

int main (){
float *v, *v2,*vR;
int tamanho;

printf("digite o tamanho do vetores:"); //OS VETORES TEM QUE TER O MESMO TAMANHO PARA PODEREM SER SOMADOS
scanf("%i",&tamanho);

v=(float *)malloc(tamanho*sizeof(float)); // ALOCAÇÃO DO PRIMEIRO VETOR
if(!v){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria do vetor 1");
        exit(-1);//SAI DO PROGRAMA
    }

v2 = (float *)malloc(tamanho*sizeof(float)); //ALOCAÇÃO DO SEGUNDO VETOR

if(!v2){ //VERIFICA ALOCAÇÃO
        printf("ERRO de alocação de memoria do vetor 2");
        exit(-1);//SAI DO PROGRAMA
    }

vR = (float *)malloc(tamanho*sizeof(float)); //ALOCAÇÃO DO  VETOR RESULTADO

if(!v2){ //VERIFICA ALOCAÇÃO
        printf("ERRO de alocação de memoria do vetor resultado");
        exit(-1);//SAI DO PROGRAMA
    }
//PEDE AO USUARIO QUE DIGITE OS ELEMENTO DO VETOR ATRAVES DA FUNÇÃO lervetor()
printf("\tvetor 1\n");
lervetor(v,tamanho);
printf("\n\tvetor 2\n");
lervetor(v2,tamanho);

//MOSTRA AOS USUARIOS OS VETORES DIGITADOS PARA ISSO CHAMA A FUNÇAO mostravetor()
printf("\nVETOR 1 : ");
mostravetor(v,tamanho);
printf("\nVETOR 2 : ");
mostravetor(v2,tamanho);

//REALIZA A SOMA DOS VETORES DIGITADOS PELA FUNÇÃO somavetores
somavetores(v,v2,vR,tamanho);
printf("\n\nVETOR RESULTADE DA SOMA DOS DOIS VETORES INICIAIS : ");
mostravetor(vR,tamanho); //CHAMA A FUNÇAO PARA MOSTRAR O VETOR RESULTANTE

free(v);
free(v2);
free(vR);
  
return 0;

}


