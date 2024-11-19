#include<stdio.h>
#include<stdlib.h>

void lervetor(int*a, int tam){
    int i;
    printf("digite os elementos do vetor\n");
    for(i=0;i<tam;i++){
        printf("elemento [%i]:",i+1);
        scanf("%i",(a+i));
    }
    return ;
}

void mostravetor(int *a, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("\t%i",*(a+i));

    }
return ;
}

int contaprimo(int*a, int tam){
    int p=0,n=0,i,primoc;

    for(i=0;i<tam;i++){
        n=*(a+i);
        primoc = primo(n);
        if(primoc==0){
            p++;
        }
            }
    return p;
}


int primo(int n){
    int i, flag=0;
    for(i=n;i>=2;i--){
        if(n%i==0)
            flag=1;
    }
    return flag;
}

int main(){
    int *a,tamanho,contador;

    printf("INFORME O TAMANHO DO VETOR:");
    scanf("%i",&tamanho);

    a = (int*)malloc(tamanho*sizeof(int));
    if(!a){
        printf("ERRO NA ALOCACAO DA MEMORIA");
        exit(-1);
    }

    lervetor(a,tamanho);
    printf("\nVETOR DIGITADO: ");
    mostravetor(a,tamanho);
    contador = contaprimo(a,tamanho);
    printf("\nEXISTEM %i NUMEROS PRIMOS NO VETOR DIGITADO",contador);


return 0;
}

