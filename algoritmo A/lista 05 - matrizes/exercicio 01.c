//1. Ler uma matriz informada pelo usuário, com tamanho 3 x 5. Mostrar seus elementos.

#include<stdio.h>
int main(){
    int m[3][5],i,j,n;

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("digite o elemento [%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
    }
