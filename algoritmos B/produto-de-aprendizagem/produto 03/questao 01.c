//Desenvolva um programa, na linguagem C, para implementar o Jogo da Forca: jogo de adivinhar uma palavra, escolhendo letras que
//podem estar contidas na palavra. Como estamos trabalhando a interface em modo texto, use a criatividade para representar quantas
//chances o usuário terá para adivinhar a palavra. Para o desenvolvimento deste programa, devem ser utilizados os conteúdos 
//trabalhados durante o semestre: funções, passagem de parâmetros, strings, ponteiros, alocação dinâmica de memória e arquivos.


//QUEST�O 1 - JOGO DA FORCA
//VANESSA CEZAR, LUIZA KARLEC, ERIC MARTINS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <ctype.h> // Bibilioteca para utilixar o tolower (transformar em letra minuscula)


char* arquivo();   // Fun��o para criar o arquivo e escolher uma palavra aleat�ria
int contaLetras(char *palavra);
void jogo(char *palavra, int quantialetras);
void tentativasRestantes();

int main() {
    setlocale(LC_ALL, "Portuguese");
    char *palavra;  // Ponteiro para armazenar a palavra escolhida
    int quantiaLetras, i;

    palavra = arquivo();  // Atribuindo o valor retornado pela fun��o
    //printf("\n\t%s\n", palavra);  // Exibe a palavra escolhida aleatoriamente

    quantiaLetras = contaLetras(palavra);
    printf("\n a palavra possui %i letras: ",quantiaLetras);
    for(i=0;i<quantiaLetras;i++){
        printf("_ ");
    }
    printf("\n");

    jogo(palavra,quantiaLetras);

    return 0;
}

char* arquivo() {   // Fun��o para criar um arquivo e armazenar as palavras
    FILE *fp;
    char *nome = "jogo_forca.txt";//DEFINE O NOME E O FORMATO DO ARQUIVO
    char *palavras[6] = {"abacaxi", "elefante", "computador", "guitarra", "universo", "internet"};//ESTABELECE QUAIS AS POSSIVEIS PALAVRAS QUE SERAM USADAS NO JOGO
    int numero;

    if ((fp = fopen(nome, "w+")) == NULL) {//PONTEIRO fp ARMAZENA O ENDERE�O DO ARQUIVO ABERTO, fopen "w+" CRIA UMA ARQUIVO TEXTO PARA LEITURA/ESCRITA
        printf("Arquivo n�o pode ser criado...PRESSIONE QUALQUER TECLA PARA CONTINUAR");//PARA O CASO DA ABERTURA DO ARQUIVO FALHAR -->  NULL
        getchar();//USUARIO DIGITA UMA TECLAR QUALQUER
        exit(1);//ENCERRA O PROGRAMA
    }
    printf("ARQUIVO TEXTO CRIADO COM SUCESSO!!!\n");
    for (int i = 0; i < 6; i++) {
        fprintf(fp, "%s\n", palavras[i]);  // ARMAZENA AS PALAVRAS NO ARQUIVO
    }
    fclose(fp);//FECHA O ARQUIVO

    // ESCOLHE DE FORMA ALEATORIA UMA PALAVRA QUE J� EST�O PREVIAMENTE ESTABELECIDAS
    srand(time(NULL));
    numero = rand() % 6; //GERA UM NUMERO QUE INDICARA O INDICE DA PALAVRA QUE IRA PARA O JOGO
    //printf("N�mero aleat�rio: %i\n", numero);


    return palavras[numero];// Retorna a palavra escolhida
}

int contaLetras(char *palavra){ //VERIFICA QUANTAS LETRAS EXISTEM NA PALAVRA QUE DEVERA SER ADIVINHADA
    int letras=0;

    for( ;*palavra!='\0'; palavra++){ //PERCORRE TODO PONTEIRO
        letras++;
    }
    return letras;//RETORNA A QUANTIA DE LETRAS
}

void tentativasRestantes(t){

        if(t == 6){
        printf("\n 0 \n");
        printf("/|\\ \n");
        printf("/ \\ \n");
    }else if(t == 5){
                printf("\n 0 \n");
                printf("/|\\ \n");
                printf("  \\ \n");
            }else if(t == 4){
                        printf("\n 0 \n");
                        printf("/|\\ \n");
                        printf("\n");
                    }else if(t == 3){
                                printf("\n 0 \n");
                                printf("/| \n");
                                printf("\n");
                            }else if(t == 2){
                                        printf("\n 0 \n");
                                        printf("/ \n");
                                        printf("\n");
                                    }else if(t == 1){
                                                printf("\n 0 \n");
                                                printf("\n");
                                                printf("\n");
                                            }
    return 0;
}

void jogo(char *palavra,int quantialetras){
    char letra;
    char nome[50];
    int i, j, posicao;
    int flag, flagVitoria;
    int tentativas = 6;

    //aloca��o de mem�ria para palavra
    char *p, *pp;
    p = (char*) malloc(2 * quantialetras);
    if(!p){
        printf("Erro na alocacao!");
        exit(-1);
    }

    pp = p;

    for(i=0; i<quantialetras; i++){
        *pp = '_';
        pp++;
        *pp = ' ';
        pp++;
    }

    pp = p + (2 * quantialetras);
    *pp = '\0';


    do{
        tentativasRestantes(tentativas); //mostra tentativas restantes
        printf("\nDIGITE UMA LETRA: ");
        fflush(stdin);
        scanf("%c",&letra);

        flag = 0;
        flagVitoria = 0;

        //mostra avan�o da palavra
        for(i=0; i<quantialetras; i++){
            if(palavra[i] == tolower(letra)){
                for(j=0; j<(quantialetras*2); j++){
                    p[i*2] = tolower(letra);
                }
            }
        }
        printf("\n%s\n", p);

        //caso tenha acertado uma letra flag = 1
        for(i=0; i<quantialetras; i++){
            if(tolower(letra) == palavra[i])
                flag = 1;
        }

        //caso nao tenha acertado nenhuma flag permanece 0 e diminui uma tentativa
        if(flag == 0){
            tentativas--;
        }

        //verificar se completou a palavra e GANHOU
        for(j=0; j<(quantialetras*2); j++){
           if(p[j]== '_'){
                flagVitoria = 1;
           }
        }
        if(flagVitoria == 0){
            printf("\nPARABENS!!! VOCE GANHOU!!!\n");
            free(p);
            exit(0);
        }

    }while(tentativas > 0);

    printf("\nFIM DE JOGO!!\n");
    printf("\nA PALAVRA ERA %s\n\n",palavra);
    free(p);

    return ;
}
