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

void lervetor(int *V, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("elemento [%i]:",i+1);
        scanf("%i",(V+i));
    }
    return ;
}

void mostravetor(int *V, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%i\t",*(V+i));
    }
return ;
}


int main(){

    int linha, coluna;
    int *a;
    int tamanho, *v;

    ///MATRIZ
    printf("\tMATRIZ\n");
    printf("INFORME O NUMERO DE LINHAS DA MATRIZ:");
    scanf("%i",&linha);
    printf("INFORME O NUMERO DE COLUNAS DA MATRIZ:");
    scanf("%i",&coluna);
    a = (int*)malloc(linha*coluna*sizeof(int));
    if(!a){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria da matriz 1");
        exit(-1);//SAI DO PROGRAMA
    }
    printf("INFORME OS ELEMENTOS DAS MATRIZES A\n");
    lermatriz(a,linha,coluna);


    /// VETOR
    printf("\n\t VETOR \n");
    printf("INFORME O TAMANHO DO VETOR:");
    scanf("%i",&tamanho);
    v = (int*)malloc(tamanho*sizeof(int));
    if(!v){ //VERIFICAR ALOCAÇÃO
        printf("ERRO de alocação de memoria da matriz 1");
        exit(-1);//SAI DO PROGRAMA
    }
    printf("INFORME OS ELEMENTOS DO VETOR\n");
    lervetor(v,tamanho);


    ///MOSTRA AO USUARIO A MATRIZ E O VETOR DIGITADO
    printf("\n\n\tMATRIZ \n");
    mostraMatriz(a,linha,coluna);
    printf("\nVETOR : ");
    mostravetor(v,tamanho);

    free(a);
    free(v);
return 0;
}


