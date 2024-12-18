//Um produtor organizou as áreas de sua lavoura da seguinte forma:
// A00  A01  A02  A03
// A10  A11  A12  A13
// Em cada área, ele aplicou diferentes formas de tratamento do solo e das plantas (insumos, pesticidas...).
// Após realizar a colheita, ele armazenou os dados da produtividade (quantidade de sacos/hectare) de cada
// uma das áreas.
// a) Utilize uma matriz para armazenar os valores da produtividade de cada área
// b) Leia os dados armazenados em cada área
// c) Calcule e exiba a média de produtividade da lavoura
// d) Identifique e mostre as áreas que produziram acima da média e abaixo da média


#include<stdio.h>
int main(){
    int i,j,n;
    float soma=0,media,m[2][4];

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("digite a produtividade da area [%d][%d]:",i,j);
            scanf("%f",&m[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
                printf("%.2f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\nMEDIA DA PRODUTIVIDADE:");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            soma=soma+m[i][j];
        }
    }
    media=soma/8;
    printf("%.2f",media);

    printf("\nAREAS COM PRODUTIVIDADE MAIOR QUE A MEDIA:");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(m[i][j]>media){
                printf("\tA%d%d",i,j);
            }
        }
    }
    printf("\nAREAS COM PRODUTIVIDADE MENOR QUE A MEDIA:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(m[i][j]<media){
                printf("\tA%d%d",i,j);
            }
        }
    }

    return 0;
    }
