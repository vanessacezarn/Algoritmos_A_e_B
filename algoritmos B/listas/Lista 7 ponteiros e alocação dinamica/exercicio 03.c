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

void mostraMatriz(int *m,int lin, int col){
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

void somamatriz(int *a,int *b, int *c,int lin, int col){
    int i,j,k;

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                k=i*col+j;
                *(c+k) = *(a+k) + *(b+k);
        }
    }

return ;
}

int main(){
    int linha, coluna;
    int *a,*b,*c;

    printf("INFORME O NUMERO DE LINHAS DA MATRIZ:");
    scanf("%i",&linha);
    printf("INFORME O NUMERO DE COLUNAS DA MATRIZ:");
    scanf("%i",&coluna);

    a = (int*)malloc(linha*coluna*sizeof(int));
    if(!a){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria da matriz 1");
        exit(-1);//SAI DO PROGRAMA
    }

    b = (int*)malloc(linha*coluna*sizeof(int));
    if(!b){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria da matriz 2");
        exit(-1);//SAI DO PROGRAMA
    }

    c = (int*)malloc(linha*coluna*sizeof(int));
    if(!c){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria do matriz resultante");
        exit(-1);//SAI DO PROGRAMA
    }
    //LER A MATRIZ A E B
    printf("\nINFORME OS ELEMENTOS DAS MATRIZES A e B\n");
    printf("\n\tMATRIZ A\n");
    lermatriz(a,linha,coluna);
    printf("\n\tMATRIZ B\n");
    lermatriz(b,linha,coluna);
    //MOSTRAR AO USUARIO AS MATRIZES A E B DIGITADAS
    printf("\n\tMATRIZ A\n");
    mostraMatriz(a,linha,coluna);
    printf("\n\tMATRIZ B\n");
    mostraMatriz(b,linha,coluna);

    //SOMAR AS MATRIZES DIGITADAS
    somamatriz(a,b,c,linha,coluna);
    printf("\n\tMATRIZ SOMA DE A E B\n");
    mostraMatriz(c,linha,coluna);

    free(a);
    free(b);
    free(c);
}

