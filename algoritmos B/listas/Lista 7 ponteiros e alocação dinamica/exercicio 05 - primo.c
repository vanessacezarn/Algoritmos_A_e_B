//COMANDO DA QUESTÃO
//Leia um vetor de N elementos inteiros, onde N é informado pelo usuário. A seguir, conte quantos valores 
//primos existem no vetor informado.


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
        if(n>1){
            primoc = primo(n);
            //printf("\n\t%i",primoc);
            if(primoc==0){
                //printf("\n%i",n);
                p++;
            }
        }
    }
    return p;
}

//PARA SER PRIMO O NUMERO TEM QUE SER DIVISIVEL POR 1 E POR ELE MESMO APENAS 
int primo(int n){  // se flag = 0 --> O NUMERO EH PRIMO E SE FLAG =1 --> O NUMERO NÃO EH PRIMO 
    int i, flag=0; // FLAG = 0 INDICA QUE O NUMERO JA E CONSIDERADO PRIMO 

    for(i=2;i<n-1;i++){ // i COMECA EM DOIS POIS O 1 EH  DIVISOR DE TODOS OS NUMEROS PRIMOS E VAI ATE N-1 POIS TODO NUMERO EH DIVISOR DE SI MESMO 
        if(n%i==0){
            flag=1;  //CASO N SEJA DIVISIVEL POR QUALQUER OUTRO NUMERO DENTRO DO LAÇO INDICA QUE O NUMERO TEM UM DIVISOR ALEM DE 1 E DELE MESMO LOGO NÃO PODE SER PRIMO 
        }
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
