//Desenvolva um programa para manipular uma matriz de tamanho NxN, em que N é definido pelo usuário e  apresente um menu com as 
//opções: 1 – Informar os elementos da Matriz (neste caso, o usuário irá digitar os valores)
// 2 – Gerar os elementos da Matriz (neste caso, o programa gera randomicamente os valores) Posteriormente, apresente um Menu com as
//seguintes opções: A – Classe de matriz B – Cálculos sobre a matriz C – Sair 
//Se for selecionada a opção A, determine se a matriz se enquadra em uma das seguintes classes de matrizes:
// -Matriz simétrica: A[i][j] = A[j][i], para todo i e j - Matriz diagonal: A[i][j] = 0, para i != j
// Matriz triangular superior: A[i][j] = 0, para i < j - Matriz triangular inferior: A[i][j] = 0, para i > j
// Se for selecionada a opção B,  calcule e mostre:  O somatório dos elementos da primeira coluna  O valor da multiplicação dos 
//elementos da primeira linha, por um número inteiro   A soma da diagonal principal   O maior valor da matriz e sua posição (índice
//da linha e da coluna). Se houver valores iguais, mostrar todas as posições do maior valor.
// Se for selecionada a opção C,  o programa deve ser encerrado

//PRODUTO DE APRENDIZAGEM 2 - EXERCICIO 2
//VANESSA CEZAR, LUIZA KARLEC, ERIC MARTINS

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h> //Ncessario para a funcao time()
#include <ctype.h> // Necessario para a funcao toupper()

///FUNÇÃO PARA LER UMA MATRIZ
void lerMatriz (float *M, int linha, int coluna){ //VANESSA
    int i, j,k;
    printf("\n Informe os elementos da matriz:\n"); //SOLICITA QUE O USUARIO INFORME OS ELEMENTOS DA MATRIZ
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            k = i*coluna+j;
            printf("Elemento [%i][%i]:",i+1,j+1); //MOSTRA AO USUARIO QUAL A POSIÇAO DO ELEMENTO A SER DIGITADO
            scanf("%f",(M+k));
        }
    }

return ;
}

///FUNÇÃO PARA GERAR UMA MATRIZ
void gerarMatriz(float *a, int l, int c){ //LUIZA
    int i, j, k;

    srand(time(NULL));

    printf("\n");
    for(i=0; i<l; i++)
        for(j=0; j<c; j++){
            k = i*c+j;
            *(a + k) = rand() %100 + 1; //Intervalo de 1 ate 100
        }
}

///FUNÇÃO PARA MOSTRAR A MATRIZ LIDA OU GERADA
void mostrarMatriz(float *M, int linha, int coluna){ //ERIC
    int i, j, k;
    for(i=0; i<linha; i++){
        printf("\n");
            for(j=0; j<coluna; j++){
                k = i*coluna+j;
                printf("%.0f\t", *(M+k));
            }
    }
}

///FUNÇÃO PARA OPÇAO A DO MENU --> CLASSE DA MATRIZ     * VANESSA
int classeMatriz(float *M, int linha, int coluna) {
    int i, j, k, r;
    int Simetrica = 1;      //VERIFICAR SE A MATRIZ É SIMETRICA, INICIA COMO SE A MATRIZ DIGITADA FOSSE SIMETRICA
    int Diagonal = 1;       // VERIFICAR SE A MATRIZ É DIAGONAL, INICIA COMO SE A MATRIZ DIGITADA FOSSE DIAGONAL
    int Tsuperior = 1;      // VERIFICAR SE A MATRIZ É TRINAGULAR SUPERIOR, INICIA COMO SE A MATRIZ DIGITADA FOSSE TRINAGULAR SUPERIOR
    int Tinferior = 1;     // VERIFICAR SE A MATRIZ É TRIANGULAR INFERIOR, INICIA COMO SE A MATRIZ DIGITADA FOSSE TRIANGULAR INFERIOR

        for (i = 0; i < linha; i++) {
            for (j = 0; j < coluna; j++) {
                k = i * coluna + j;
                r = j * linha +i; //MATRIZ TRANSPOSTA --> O QUE É LINHA VIRA COLUNA E VICE VERSA --> UTILIZADO PARA VERIFICAR SE A MATRIZ É SIMETRICA

                ///MATRIZ SIMETRICA
                if (*(M+k)!= *(M+r)){ //VERIFICA SE OS ELEMENTO DA MATRIZ E DE SUA TRANSPOSTA SÃO DIFERENTES
                        Simetrica = 0; //CASO OS ELEMENTOS SEJAM DIFERENTES, A VARIAVEL SIMETRICA PASSA A VALER 0 --> INDICANDO ASSIM QUE A MATRIZ NÃO É SIMETRICA

                }

                /// MATRIZ DIAGONAL
                if (i != j) {  // VERIFICA OS ELEMENTOS FORA DA DIAGONAL PRINCIPAL
                    if (*(M + k) != 0) { // VERIFICA SE ALGUM ELEMENTO É DIFERENTE DE ZERO
                        Diagonal = 0; // CASO ALGUM VALOR SEJA DIFERENTE DE  0, A VARIAVEL DIAGONAL PASSA A VALER 0 --> INDICANDO QUE A MATRIZ NÃO É DIAGONAL
                    }
                }

                /// MATRIZ TRIANGULAR SUPERIOR
                if (i > j) {  // VERIFICA OS ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL
                    if (*(M + k) != 0) { // VERIFICA SE ALGUM DESSES ELEMENTOS É DIFERENTE DE ZERO
                        Tsuperior = 0; // CASO ALGUM VALOR SEJA DIFERENTE DE  0, A VARIAVEL Tsuperior PASSA A VALER 0 --> INDICANDO QUE A MATRIZ NÃO É TRIANGULAR SUPERIOR
                    }
                }

                /// MATRIZ TRIANGULAR INFERIOR
                if (i < j) {  // VERIFICA OS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL
                    if (*(M + k) != 0) { // VERIFICA SE ALGUM DESSES ELEMENTOS É DIFERENTE DE ZERO
                        Tinferior = 0; // CASO ALGUM VALOR SEJA DIFERENTE DE  0, A VARIAVEL Tinferior PASSA A VALER 0 --> INDICANDO QUE A MATRIZ NÃO É TRIANGULAR INFERIOR
                    }
                }
            }
        }

    /// RETORNO PARA CLASSIFICAR AS MATRIZES

    if(Simetrica == 1 && Diagonal == 0){
                return 1; // RETORNA 1 , CASO A MATRIZ SEJA SIMETRICA E NAO SEJA DIAGONAL
    }else if (Diagonal == 1 && Tsuperior == 1 && Tinferior == 1 && Simetrica == 1) { //TODA MATRIZ DIAGONAL É TAMBEM CLASSIFICADA COMO TRIANGULAR SUPERIOR E INFERIOR E SIMETRICA
                return 2; // RETORNA 2 , CASO A MATRIZ SEJA DIAGONAL, TRIANGULAR SUPERIOR E INFERIOR
    }
    else if (Tsuperior == 1  ) {
                return 3; // RETORNA 3 , CASO A MATRIZ SEJA TRIANGULAR SUPERIOR
    }
    else if (Tinferior == 1) {
                return 4; // RETORNA 3 , CASO A MATRIZ SEJA TRIANGULAR SUPERIOR
    }
    else {
            return 0; // RETORNA 0 , CASO A MATRIZ NÃO PERTENCA A NENHUMA CLASSE
    }
}

///ERIC
float somarPrimeiraColuna(float *M, int linha, int coluna){
  int i;
  float soma = 0;
  for(i = 0; i < linha; i++) {
    soma += *(M + i * coluna);
  }
  return soma;
}

float multiplicarPrimeiraLinha (float *M, int coluna, int numero){
  int j;
  float produto = 1;
  for(j = 0; j < coluna; j++){
    produto *= *(M + j) * numero;
  }
  return produto;
}

float somarDiagonalPrincipal (float *M, int t){
  float soma = 0;
  int i;
  for(i= 0; i < t; i++){
    soma += *(M + i * t + i);
  }
  return soma;
}

float maiorValor (float *M, int linha, int coluna){
  float maior = *M;
  int i, j;
  for(i = 0; i < linha * coluna; i++){
    if(*(M + i) > maior)
      maior = *(M + i);
  }

  printf("Maior valor na matriz: %.2f\n", maior);
  printf("Posições do maior valor: ");

  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      if (*(M + i * coluna + j) == maior) {
        printf("Linha %d, Coluna %d\n", i+1, j+1);
      }
    }
  }
  return maior;
}


int main(){ //VANESSA
 setlocale(LC_ALL,"Portuguese");
 int d, lin, col,opcao,classe,num;
 float *m;
 char opcao2;

 ///SOLICITA AO USUARIO QUE INFORME A QUANTIA DE LINHA E COLUNAS DA MATRIZ
 printf("Informe o numero de linhas da matriz:");
 scanf("%d", &lin);
 printf("Informe o numero de colunas da matriz:");
 scanf("%d", &col);

 m = (float *) malloc(lin*col*sizeof(float));

 if (!m){
 printf("Erro na alocacao dinamica de memória\n");
 exit(0);
 }

 ///PRIMEIRO MENU --> OFERECE AS FUNÇOES PARA O USUARIO DIGITAR UMA MATRIZ OU QUE O PROGRAMA GERE UMA MATRIZ
 ///UTILIZADO DO...WHILE PARA GARANTIR QUE O USUARIO ESCOLHA UM OPÇAO VALIDA

 do{
 printf("\n\t*** MENU ***");
 printf("\n1 - Informar os elementos da matriz");
 printf("\n2 - Gerar a matriz");
 printf("\nEscolha uma opcao:");
 scanf("%i",&opcao);

if(opcao==1){ ///CASO A OPÇAO ESCOLHIDA SEJA A 1 - INFORMAR OS ELEMENTOS
            lerMatriz(m, lin, col); //CHAMA A FUNÇAO LERMATRIZ, PARA QUE O USUARIO POSSA INFORMAR OS ELEMENTOS DA MATRIZ
            printf("\n\tMATRIZ DIGITADA\n");
            mostrarMatriz(m, lin, col); //CHAMA A FUNÇAO MOSTRARMATRIZ, MOSTRA AO USUARIO QUAL MATRIZ FOI DIGITADA
        }else if(opcao == 2){///CASO A OPÇAO ESCHOLIDA SEJA 2 --> GERAR A MATRIZ
                    gerarMatriz(m, lin, col);//CHAMA A FUNÇAO GERARMATRIZ, O PROGRAMA GERA UMA MATRIZ DE FORMA ALEATORIA
                    printf("\n\tMATRIZ GERADA\n");
                    mostrarMatriz(m, lin, col);//CHAMA A FUNÇAO MOSTRARMATRIZ, MOSTRA AO USUARIO QUAL MATRIZ FOI GERADA
                }else{
                    printf("\nOPÇÃO INVÁLIDA\n");//CASO O USUARIO ESCOLHA UMA OPÇAO QUE NÃO ESTA NO MENU
                }
    }while(opcao != 1 && opcao != 2);

 ///SEGUNDO MENU --> OFERECE AO USUARIO AS FUNÇOES PARA SABER A CLASSE DA MATRIZ, CALCULO SOBRE MATRIZ E OPÇAO SAIR DO PROGRAMA
 ///UTILIZADO DO...WHILE PARA GARANTIR QUE O USUARIO ESCOLHA UM OPÇAO VALIDA

    do{
 printf("\n\n\t*** MENU ***");
 printf("\nEscolha uma opção:");
 printf("\nA) Classe de matriz");
 printf("\nB) Cálculos sobre a matriz");
 printf("\nC) Sair ");
 printf("\nEscolha uma opcao:");
 fflush(stdin);
 scanf("%c",&opcao2);
 opcao2 = toupper(opcao2); // CONVERTE A OPÇAO PARA MAISCULO

if(opcao2=='A'){ //VANESSA
            printf("\nOPÇÃO ESCOLHIDA - A\n");
            printf("Classes de matriz: ");
            classe=classeMatriz(m,lin,col);
            //CONFORME O VALOR RETORNADO PELA FUNÇAO CLASSEMATRIZ É INDICADO AO USUARIO A QUAL CLASSE A MATRIZ PERTENCE
            if(classe==0){
                printf("MATRIZ NÃO PERTENCE A NENHUMA CLASSE");
            }else{
                if(classe==1){
                    printf("MATRIZ SIMETRICA");
                }else{
                    if(classe==2){
                        printf("A MATRIZ É DIAGONAL, TRIANGULAR SUPERIOR, TRIANGULAR INFERIOR E SIMETRICA");
                    }else{
                        if(classe==3){
                            printf("MATRIZ TRIANGULAR SUPERIOR");
                        }else{
                            if(classe==4){
                                printf("MATRIZ TRIANGULAR INFERIOR");
                            }
                        }
                    }
                }
            }
        }else if(opcao2 == 'B'){ //ERIC
                    printf("\nOPÇÃO ESCOLHIDA - B\n");
                    printf("Cálculo sobre matriz\n");
                    printf("\nO somatório dos elementos da primeira coluna é: %.2f", somarPrimeiraColuna(m, lin, col));
                    printf("\nDigite um número inteiro para multiplicar a primeira linha da matriz: ");
                    scanf("%d", &num);
                    printf("O resultado da multiplicação por %d é: %.2f\n", num, multiplicarPrimeiraLinha(m, col, num));
                    printf("A soma da diagonal principal é: %.2f\n", somarDiagonalPrincipal(m, lin));
                    maiorValor(m, lin, col);

                }else{
                    if(opcao2=='C'){
                        printf("\nOPÇÃO ESCOLHIDA - C\n");
                        printf("\t***FIM DO PROGRAMA***");
                    }else{
                        printf("OPÇÃO INVÁLIDA");
                    }

                }
}while(opcao2!= 'C');
 free(m);
 return 0;
 }
 
