 //2. Escreva um programa em C que gere os elementos de uma matriz quadrada 5 x 5 e:
 // - Exiba todos os elementos da matriz
 // - Exiba os elementos da diagonal principal da matriz
 // - Calcule e mostre a média dos valores da diagonal principal da matriz
 // - Calcule e mostre a média dos elementos da matriz
 // - Encontre e mostre na tela os elementos que estão acima da média, com sua posição (índice de linha e
 //coluna)

#include<stdio.h>
int main(){
    int m[5][5],i,j,n;
    float media,mediae,soma=0,somae=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("digite o elemento [%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nMATRIZ DIGITADA\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

     printf("\nDIAGONAL PRINCIPAL DA MATRIZ\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(i==j)
                printf("%d\t",m[i][j]);
        }
    }

    printf("\nMEDIA DOS ELEMENTOS DA DIAGONAL PRINCIPAL\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(i==j)
                soma=soma+m[i][j];
        }
    }
    media=soma/5;
    printf("%.2f",media);

    printf("\nMEDIA DOS ELEMENTOS DA MATRIZ\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                somae=somae+m[i][j];
        }
    }
    mediae=somae/25;
    printf("%.2f",mediae);

    printf("\n ELEMENTOD ACIMA DA MEDIA \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(m[i][j]>mediae){
                    printf("\n%d na linha %d e coluna %d",m[i][j],i,j);
                }
        }

    }



    return 0;
    }

