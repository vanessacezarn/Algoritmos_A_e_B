//Ler um vetor de 10 números chamado amostragem. Cada número desse vetor corresponde à quantidade de amostras de um determinado item. 
//O algoritmo deverá colocar em um segundo vetor,chamado percentual, a porcentagem que a quantidade de cada amostra contida em 
//amostragem,corresponde em relação ao total.O algoritmo deve:
//• mostrar o valor contido em cada amostrangem e o percentual correspondente;
//• calcular a média de valores das amostras;• encontrar a maior quantidade de amostra e seu respectivo percentual;
//• mostrar quais são as amostras que possuem quantidade acima da média

//PRODUTO DE APREDIZAGEM - EXERCICIO 12
//VANESSA CEZAR DO NASCIMENTO
#include <stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    float amostragem[10],maiorQuantidade=0;
    float soma = 0,media,percentual[10],maiorPercentual=0;
    int i;

    printf("Digite a quantidade de amostra\n");
    for (i = 0; i < 10; i++) {
        printf("item %d:",i+1);
        scanf("%f", &amostragem[i]);
        soma = soma + amostragem[i];
    }
    printf("\t***AMOSTRAGEM***");
    for(i=0;i<10;i++){
        percentual[i]=(amostragem[i]*100)/soma;
        printf("\nAmostra [%d] = %.2f e seu percentual = %.2f%%",i+1,amostragem[i],percentual[i]);
        if(amostragem[i]>maiorQuantidade){
            maiorQuantidade=amostragem[i];
            maiorPercentual=percentual[i];
        }
    }
    media = soma / i;
    printf("\n\nA MAIOR quantidade da amostra � %.2f e seu percentual � %.2f%%",maiorQuantidade,maiorPercentual);
    printf("\nA M�DIA dos valores das amostras = %.2f", media);
    printf("\nAs amostragens que poussem QUANTIDADE ACIMA da m�dia s�o:");
    for(i=0;i<10;i++){
        if(amostragem[i]>media){
            printf("\namostra[%d] = %.2f",i+1, amostragem[i]);
        }
    }

  return 0;
}
