//3. Ler uma matriz 3 x 2 e um número informados pelo usuário. O algoritmo deve gerar uma nova matriz que é
// o resultado da multiplicação do número pela matriz lida.

#include<stdio.h>
int main(){
    int m[3][2],i,j,n;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("digite o elemento [%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\ndigite um numero:");
    scanf("%d",&n);

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            m[i][j]=(m[i][j])*n;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

return 0;
}
