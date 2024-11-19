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

int primo(int*a, int tam){
    int p=0,d,d2,i;

    for(i=0;i<tam;i++){
        if(*(a+i)>=1){
            d = *(a+i)%1;
            d2 = *(a+i) % *(a+i);
            if(d==0 && d2 ==0){
                p=p+1;
            }
        }
    }


return p;
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
    contador = primo(a,tamanho);
    printf("\nEXISTEM %i NUMEROS PRIMOS NO VETOR DIGITADO",contador);


return 0;
}


