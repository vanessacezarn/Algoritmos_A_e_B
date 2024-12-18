//4. Em um concurso, a identificação das cadeiras da sala são armazenadas em uma matriz. Considere que
//existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
//para armazenar a identificação das cadeiras que é informada pelo usuário. A matriz deve ser exibida. Após,
//apresentar ao usuário a mensagem: “Insira o número da fila:” para que o algoritmo leia o número de uma
//fila e mostra a identificação de todas as cadeiras desta fila.

#include<stdio.h>
int main(){
    int m[7][6],i,j,n;

    for(i=0;i<7;i++){
        for(j=0;j<6;j++){
            m[i][j]=2+i-j;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n digite o numero de fila:");
    scanf("%d",&n);
    for(i=0;i<7;i++){
        for(j=0;j<6;j++){
            if(j==n-1)
            printf("%d\t",m[i][j]);
        }
    }


return 0;
}
