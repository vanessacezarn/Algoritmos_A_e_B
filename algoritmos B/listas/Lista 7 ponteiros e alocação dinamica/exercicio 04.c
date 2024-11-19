#include<stdio.h>
#include<stdlib.h>

void lermatriz(int *m,int lin, int col){
    int i,j,k;

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                k=i*col+j;
            printf("ELEMENTO [%i][%i]: ",i+1,j+1);
            scanf("%i",(m+k));
        }
    }

return ;
}

void mostraMatriz(int *m, int lin, int col){
    int i,j,k;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            k=i*col+j;
            printf("%i\t",*(m+k));
        }
        printf("\n");
    }

return ;
}

void escalar(int *a, int *b,int n, int lin, int col){
    int i,j,k;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            k=i*col+j;
            *(b+k) = *(a+k) * n;
        }
    }

return ;
}

int main(){
    int linha,coluna;
    int *a,*b,num;

    printf("DIGITE O NUMERO DE LINHAS DA MATRIZ:");
    scanf("%i",&linha);
    printf("DIGITE O NUMERO DE COLUNAS DA MATRIZ:");
    scanf("%i",&coluna);

    a = (int*)malloc(linha*coluna*sizeof(int));
    if(!a){
        printf("ERRO NA ALOCAÇÃO DE MEMORIA");
        exit(-1);
    }
    b = (int*)malloc(linha*coluna*sizeof(int));
    if(!a){
        printf("ERRO NA ALOCAÇÃO DE MEMORIA");
        exit(-1);
    }
    printf("DIGITE A MATRIZ:\n");
    lermatriz(a,linha,coluna);
    printf("\n\tMATRIZ DIGITADA:\n");
    mostraMatriz(a,linha,coluna);

    //SOLICITA AO USUARIO QUE INSIRA UM NUMERO QUE IRA MULTIPLICAR UMA MATRIZ

    printf("INFORME UM NUMERO INTEIRO:");
    scanf("%i",&num);

    escalar(a,b,num,linha,coluna);
    printf("\nMATRIZ APOS MULTPLICACAO POR UM ESCALAR: \n");
    mostraMatriz(b,linha,coluna);



    free(a);
    free(b);

return 0;
}

