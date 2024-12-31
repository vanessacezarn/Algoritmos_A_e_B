//Desenvolva um programa na linguagem C, que tenha duas matrizes A e B, com tamanho N x N (N ≤ 10). Inicialize (gere) os elementos de
//cada uma das matrizes. Posteriormente, disponibilize ao usuário um Menu de opções para fazer as seguintes operações com matrizes:
//a) Somar as matrizes A e B (C = A + B) b) Encontrar o maior elemento da matriz A c) Encontrar o menor elemento da matriz A
//d) Multiplicar a matriz A por um número lido k (D = k * A) e) Multiplicar a matriz A por um vetor V (E = V * A)


//PRODUTO DE APRENDIZAGEM 3 - 08/07/2024
//PROBLEMA 1
//VANESSA CEZAR DO NASCIMENTO

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int m;
    printf("escolha o tamanho das matrizes A e B ambas são mxm (m<=10):");
    scanf("%d",&m);
    while(m<=0 && m>10){
        printf("OPÇÃO INVALIDA\n");
        printf("escolha o tamanho dentro do limite m<=10:");
        scanf("%d",&m);
    }

    int a[m][m],b[m][m],c[m][m],d[m][m];
    int i,j,k,maior=0,menor=9999999,x,y;
    char n;
    int v[m],V,soma[m],adicao=0,p;

    printf("***MATRIZ A***\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
         a[i][j]=i+j+2;
         printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n***MATRIZ B***\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            b[i][j]=j-i+2;
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\n\t***MENU***\n");
    printf("a)somar as matrizes A e B.\n");
    printf("b)encontrar o maior elemento da matriz A.\n");
    printf("c)encontrar o menor elemento da matriz A.\n");
    printf("d)multiplicar a matriz A por um numero lido k.\n");
    printf("e)multiplicar a matriz A por um vetor V.\n");
    fflush(stdin);
    printf("ESCOLHA UMA DAS OPÇÕES DO MENU:");
    scanf("%c",&n);

    while(n!='a'&& n!='A'&& n!='b'&& n!='B'&& n!='c'&& n!='C'&& n!='d'&& n!='D'&& n!='e'&& n!='E'){
        printf("OPÇÃO INVALIDA\n");
        fflush(stdin);
        printf("ESCOLHA UMA DAS OPÇÕES DO MENU:");
        scanf("%c",&n);
    }
     printf("\n OPÇÃO ESCOLHIDA -  ");

    if(n=='a'||n=='A'){
        printf("A) soma das matrizes A e B\n");
        printf("MATRIZ RESULTANTE:\n");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
        printf("\n");
        }
    }

    if(n=='b'||n=='B'){
        printf("B) maior elemento da matriz A\n");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(a[i][j]>=maior){
                    maior=a[i][j];
                    x=i+1;
                    y=j+1;
                }
            }

        }
        printf("O MAIOR elemento é o %d e ele se encontra na posição %dx%d",maior,x,y);
    }

    if(n=='c'||n=='C'){
        printf("C) menor elemento da matriz A\n");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                    if(a[i][j]<=menor){
                    menor=a[i][j];
                    x=i+1;
                    y=j+1;
                }
            }
        }
         printf("O MENOR elemento é o %d e ele se encontra na posição %dx%d",menor,x,y);
    }

    if(n=='d'||n=='D'){
        printf("D) matriz A multiplicada por k => A*k\n ");
        printf("digite um numero k:");
        scanf("%d",&k);
        printf("MATRIZ RESULTANTE:\n");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                d[i][j]=k*a[i][j];
                printf("%d\t",d[i][j]);
            }
        printf("\n");
        }
    }
    
    if(n=='e'||n=='E'){
        printf("E) matriz A multiplicada por um vetor V => A*V\n");
        printf("digite os %d elementos do vetor:\n",m);
    for(V=0;V<m;V++){
      scanf("%d",&v[V]);
     }

      i=0;
      while(i<m){
        for(j=0;j<m;j++){
          for(V=0;V<m;V++)
            p=a[i][j]*v[V];
            adicao=adicao+p;
            soma[i]=adicao;
      }
        i++;
        adicao=0;
    }
    printf("\nVETOR RESULTANTE DA MULTIPLICACAO:");
    for(i=0;i<m;i++){
        printf("\n %d",soma[i]);
    }
    }

return 0;
}
