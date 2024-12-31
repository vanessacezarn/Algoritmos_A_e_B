//Com o uso de ferramentas de edição e compilação de programas, desenvolva um programa para gerenciar o cenário, descrito a seguir,
// usando funções, estruturas, vetor de estruturas ou listas, ponteiros, passagem de parâmetros e arquivos. Considere que os dados de
// cada equipe cadastrada deve ser armazenado em um arquivo.
// Um sistema de gerenciamento de Maratona de Programação armazena os seguintes dados de cada equipe: nome da equipe, idade de cada 
//um dos três competidores que compõem a equipe e número de acertos (quantidade de questões) durante a competição, pela equipe. 
//No máximo, podem estar inscritas na Maratona 50 equipes. O programa deve mostrar um menu ao usuário, um Menu Inicial, 
//com as seguintes opções: 1. Criar arquivo 2. Ler equipes cadastradas em um arquivo Posteriormente, o programa deve mostrar ao 
//usuário o seguinte Menu de Opções: 1. Cadastrar uma equipe 2. Listar todas as equipes inscritas 3. Mostrar a maior quantidade de 
//acertos e os dados das equipes que obtiveram este resultado durante a Maratona. 4. Calcular e mostrar a média de idade dos 
//competidores de cada equipe. 5. Consultar as equipes cujo nome inicia por uma letra digitada pelo usuário.6. Finalizar o programa

//QUESTAO 2 - MARATONA
//VANESSA CEZAR, LUIZA KARLEC, ERIC MARTINS

#include<stdio.h>
#include<locale.h>
#include <ctype.h> // Bibilioteca para utilixar o tolower (transformar em letra minuscula)

int contadorArquivos = 0; //VARIAVEL QUE CONTA A QUANTIA DE ARQUIVOS
char listaArquivos[50][100]; //VARIAVEL COM TODOS OS NOMES DOS ARQUIVOS

//ESTRUTURA PARA AMAZENAR OS DADOS DAS EQUIPES
struct Maratona{
    char nome[50];
    int idade[3];
    int acertos;
};

//DECLARA��O DAS FUN��ES
void criararquivo();
void lerarquivo();
void cadastrarEquipe();
void menuinicial();
void listarEquipes();
void calcularMediaIdade();
void consultarEquipes(struct Maratona a[], int contador, char letra);

//INICIO DO PROGRAMA
int main(){
    setlocale(LC_ALL,"Portuguese");

    struct Maratona a[50];
    int opcaoMenu1, opcaoMenu2; //PARA ESCOLHA DAS OP��ES DOS MENUS
    int contador=0; //PARA CONTROLAR O NUMERO MAXIMO DE EQUIPES ESCRITAS
    char cadastro[30]; //USADO PARA LER O NOME DO ARQUIVO ONDE DESEJA CADASTRAR UMA EQUIPE
    int arquivoEncontrado=0; //USADO PARA VERIFICA��O DE QUE SE O NOME DO ARQUIVO EXISTE, INICIA COMO '0' INDICANDO QUE O ARQUIVO N�O EXISTE
    int i,k,x; //UTILIZADOS EM FOR
    int maisacertos=0, maior=0;//USADOS NA OP�AO 3 DO MENU DE OP��ES
    char letra;

    //MENU INICIAL
    menuinicial();//CHAMA FUN��O

    //MENU OP��ES
    do{
        printf("\n\t MENU DE OP��ES\n");
        printf("1 - CADASTRAR UMA EQUIPE\n");
        printf("2 - LISTAR TODAS AS EQUIPES\n");
        printf("3 - MOSTRAR A MAIOR QUANTIDADE DE ACERTOS E OS DADOS DAS EQUIPES QUE OBTIVERAM ESTE RESULATADO DURANTE A MARATONA\n");
        printf("4 - CALCULAR E MOSTRAR A M�DIA DE IDADE DOS COMPETIDORES DE CADA EQUIPE\n");
        printf("5 - CONSULTAR AS EQUIPES CUJO NOME\n");
        printf("6 - FINALIZAR O PROGRAMA\n");
        printf("7 - VOLTAR AO MENU INICIAL\n");
        printf("ESCOLHA UMA OP��O:");
        scanf("%i",&opcaoMenu2);

        //PRIMEIRA OP��O
        if(opcaoMenu2 == 1){
            printf("\nCADASTRANDO EQUIPE\n");
            printf("ARQUIVOS EXISTENTES:");
            for(i=0; i<contadorArquivos; i++){
               printf(" %s;",listaArquivos[i]);//LISTA OS NOMES DO ARQUIVOS EXISTENTES
           }
            if(contador<50){//USADO PARA CONTROLE DO NUMERO DE EQUIPES
                printf("\nNOME DO ARQUIVO ONDE DESEJA CADASTRAR A EQUIPE: ");
                fflush(stdin);
                gets(cadastro);

                //VERIFICA SE O NOME DO ARQUIVO DIGITADO EXISTE
                for(i=0;i<contadorArquivos;i++){ //ContadorArquivo -> VARIAVEL GLOBAL QUE ARMAZENA A QUANTIA DE ARQUIVOS CRIADOS
                    if(strcmp(listaArquivos[i], cadastro) == 0){ //COMPARA AS STRING --> NOMES DE ARQUIVO E NOME DIGITADO -> SE O RESULTADO DESSA COMPARA��O FOR 0 AS PALAVRAS S�O IGUAIS
                        arquivoEncontrado = 1; // SE OS NOMES FOREM IGUAIS ALTERA PARA 1 O VALOR DA VARIAVEL
                        cadastrarEquipe(cadastro,&a[contador]); //A FUN��O PARA CADASTRO DE EQUIPES � CHAMADA
                        contador++; //INCREMENTA O VALOR QUE INDICA A QUANTIA DE EQUIPES
                        }
                    }
                if(arquivoEncontrado==0){ //PARA O CASO DOS NOME DIGITADO N�O EXISTIR --> RETORNA AO MENU DE OP��ES
                    printf("N�O EXISTE UM ARQUIVO COM ESSE NOME\n");
                }
            }else
                printf("FORAM CADASTRADAS O NUMERO MAXIMO DE EQUIPES");// PARA O CASO DO NUMEROS MAXIMO DE EQUIPES FOR ATINGIDO

        }else{
            //SEGUNDA OP��O
            if(opcaoMenu2 == 2){
                printf("\nLISTANDO EQUIPES\n");
                listarEquipes(cadastro); //CHAMA A FUN��O
            }else{
                //TERCEIRA OP��O
                if(opcaoMenu2 == 3){
                    printf("\nMAIOR QUANTIDADE DE ACERTOS\n");
                        for(k=0;k<contador;k++){ // UTILIZADO FOR PARA PERCORRER A STRUCT
                            if(maisacertos<a[k].acertos){
                                maior=k; //ARMAZENA O INDICE DA POSI�AO DO MAIOR VALOR
                            }
                        }

                        printf("ACERTOS %i\n",a[maior].acertos);//INFORMA QUAL FOI A MAIOR QUANTIDADE DE ACERTOS
                        printf("NOME DA EQUIPE %s\n",a[maior].nome); //INFORMA QUAL O NOME DA EQUIPE QUE TEVE MAIOR NUMERO DE ACERTOS
                        for(x=0;x<3;x++){
                            printf("IDADE COMPETIDOR %i: %i\n",i+1, a[maior].idade[x]);//INFORMA A IDADE DOS COMPETIDORES DA EQUIPE QUE OBTEVE O MAIOR NUMERO DE ACERTOS
                        }
                }else{
                    //QUARTA OP��O
                    if(opcaoMenu2 == 4){
                        printf("\nMEDIA DE IDADE DOS COMPETIDORES\n");
                        calcularMediaIdade(a, contador); //Chama a fun��o para calcular a media da idade
                    }else{
                        //QUINTA OP��O
                        if(opcaoMenu2 == 5){
                            printf("\nCONSULTANDO EQUIPE\n");
                            printf("\nDigite uma letra para consultar equipes: ");
                            fflush(stdin);
                            scanf("%c", &letra);
                            consultarEquipes(a, contador, letra); // Chama a fun��o para buscar as equipes
                        }else{
                            //SEXTA OP��O
                            if(opcaoMenu2 == 6){
                                printf("\n***FIM DO PROGRAMA*** \n");
                            }else{
                                //S�TIMA OP��O
                                if(opcaoMenu2 == 7){
                                    menuinicial();
                                }else{
                                printf("A OP��O ESCOLHIDA � INV�LIDA");
                                }
                            }
                        }
                    }
                }
            }

        }

    }while(opcaoMenu2!= 6);

    return 0;
}

//FUN��ES DO PROGRAMA

//MENU INICIAL FOI COLOCADO EM UMA FUN��O PARA SER POSSIVEL  QUE QUANDO O USARIO ESTIVER NO MENU DE OP�OES ELE POSSA VOLTAR AO MENU INCIAL
void menuinicial(){
    int opcaoMenu1,i;
    do{
    printf("\n\tMENU INICIAL\n");
    printf("1 - CRIAR ARQUIVO\n");
    printf("2 - LER EQUIPES CADASTRADAS EM UM ARQUIVO\n");
    printf("3 - IR PARA O PROXIMO MENU\n");
    printf("ESCOLHA UMA OP��O:");
    scanf("%i",&opcaoMenu1);

    if(opcaoMenu1 == 1){
        printf("\n\tCRIANDO ARQUIVO\n");
        criararquivo(); //CHAMA A FUN��O CRIA ARQUIVO
    }else{
        if(opcaoMenu1 == 2){
            printf("\n\tLENDO EQUIPES CADASTRADAS EM UM ARQUIVO\n");
            printf("ARQUIVOS EXISTENTES:");
            for(i=0;i<contadorArquivos;i++){//LISTA O NOME DOS ARQUIVOS J� EXISTENTES
               printf(" %s;",listaArquivos[i]);
           }
            lerarquivo();

        }else{
            if(opcaoMenu1==3){

            }else{
            printf("A OP��O ESCOLHIDA � INVALIDA\n");
            }
        }
    }
    }while(opcaoMenu1!=3);
    return;
}

//PRIMEIRA OP��O MENU 1
void criararquivo(){

    char nomearquivo[30];
    FILE *fp;//VARIAVEL PONTEIRO DO TIPO FILE

    printf("DIGITE O NOME DO ARQUIVO A SER CRIADO:");
    fflush(stdin);
    gets(nomearquivo);

    if((fp = fopen(nomearquivo, "w+"))==NULL){ //PONTEIRO fp ARMAZENA O ENDERE�O DO ARQUIVO ABERTO, fopen "w+" CRIA UMA ARQUIVO TEXTO PARA LEITURA/ESCRITA
        printf("Arquivo n�o pode ser criado...PRESSIONE QUALQUER TECLA PARA CONTINUAR");//PARA O CASO DA ABERTURA DO ARQUIVO FALHAR -->  NULL
        getchar();//USUARIO DIGITA UMA TECLAR QUALQUER
        exit(1);//ENCERRA O PROGRAMA
    }
    printf("ARQUIVO CRIADO COM SUCESSO!!!!\n");
    fclose(fp);//FECHA O ARQUIVO

    if (contadorArquivos < 50) {
        strcpy(listaArquivos[contadorArquivos], nomearquivo);//strcpy --> USADO PARA COPIAR O CONTEUDO DE UMA STRING PARA OUTRA
        contadorArquivos++;//INCREMENTA O CONTADOR DA QUANTIDADE DE ARQUIVOS
    }else {
        printf("Limite de arquivos criados atingido.\n");
    }

    return ;
}

//SEGUNDA OP��O MENU 2
void lerarquivo(){
    char ch;//ARMAZENA CARACTERE
    char nomelerarquivo[30];//NOME DO ARQUIVO A SER LIDO
    int i,arquivoEncontrado=0; //VERIFICAR SE O NOME EXISTE
    FILE *fp; //VARIAVEL PONTEIRO DO TIPO FILE

    printf("\nDIGITE O NOME DO ARQUIVO:");
    fflush(stdin);
    gets(nomelerarquivo);

    for(i=0;i<contadorArquivos;i++){ //ContadorArquivo -> VARIAVEL GLOBAL QUE ARMAZENA A QUANTIA DE ARQUIVOS CRIADOS
            if(strcmp(listaArquivos[i], nomelerarquivo) == 0){ //COMPARA AS STRING --> NOMES DE ARQUIVO E NOME DIGITADO -> SE O RESULTADO DESSA COMPARA��O FOR 0 AS PALAVRAS S�O IGUAIS
                arquivoEncontrado = 1; // SE OS NOMES FOREM IGUAIS ALTERA PARA 1 O VALOR DA VARIAVEL
                if((fp = fopen(nomelerarquivo, "r"))==NULL){ //PONTEIRO fp ARMAZENA O ENDERE�O DO ARQUIVO ABERTO, fopen ABRE O ARQUIVO NO MODO DE LEITURA "r"
                    printf("Arquivo n�o pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR"); //PARA O CADO DA ABERTURA DO ARQUIVO FALHAR -->  NULL
                    getchar();//USUARIO DIGITA UMA TECLAR QUALQUER
                    exit(1);//ENCERRA O PROGRAMA
                }
            printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n\n");
            ch = getc(fp); //LE UM CARACTERE DO ARQUIVO E O ARMAZENA NA VARIAVEL ch
            while (ch!=EOF){ //EOF = FIM DO ARQUIVO --> VERIFICA SE O CARACTERE LIDO � O FIM DO ARQUIVO
                putchar(ch);//EXIBI O CARACTER ARMAZENADO EM ch
                ch = getc(fp);// LE O PROXIMO CARACTERE
            }
    fclose(fp);//FECHA O ARQUIVO
            }
    }

    if(arquivoEncontrado==0){ //PARA O CASO DOS NOME DIGITADO N�O EXISTIR --> RETORNA AO MENU DE OP��ES
            printf("N�O EXISTE UM ARQUIVO COM ESSE NOME\n");
    }
    return ;
}

//PRIMEIRA OP��O MENU 2
void cadastrarEquipe(char cadastro[], struct Maratona *a){
    FILE *fp;
    int i;

    if((fp = fopen(cadastro, "a+"))==NULL){//ABRE O ARQUIVO NO MODO DE ANEXAR OU CRIAR UM ARQUIVO TEXTO PARA ESCRITA
        printf("Arquivo n�o pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }
    printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n");
    //SOLICITA AS INFORMA��ES DA EQUIPE
    printf("DIGITE O NOME DA EQUIPE:");
    fflush(stdin);
    gets(a->nome);//PONTEIRO PARA STRUCT
    fprintf(fp, "NOME DA EQUIPE:: %s\n", a->nome);//FPRINTF ESCREVE NO ARQUIVO
    for(i=0;i<3;i++){
        printf("IDADE COMPETIDOR %i:",i+1);
        scanf("%i",&a->idade[i]);
        fprintf(fp, "Idade do competidor %i: %i\n", i + 1, a->idade[i]);
    }
    printf("DIGITE O NUMERO DE ACERTOS:");
    scanf("%i",&a->acertos);
    fprintf(fp, "QUANTIDADE DE ACERTOS: %i\n", a->acertos);
    fprintf(fp, "------\n");//PARA ARMAZENAR NO ARQUIVO DE FORMA MAIS ORGANIZADA
    printf("\nT�rmino da Digita��o\n");
    fclose(fp);

    return;
}


//SEGUNDA OP��O MENU 2
void listarEquipes(char cadastro[]){
     FILE *fp;
     int i, ch;

    //caso n�o tenham arquivos cadastrados encerra a fun��o
     if (contadorArquivos == 0) {
        printf("Nenhum arquivo encontrado.\n");
        return;
    }

    //inicio da listagem
    printf("Listando equipes de todos os arquivos...\n");
    for(i=0; i<contadorArquivos; i++){
        fp = fopen(listaArquivos[i], "r"); //fun��o para abrir arquivo em modo leitura

        //caso de erro ao abrir o arquivo
        if(fp == NULL){
            printf("Erro ao abrir o arquivo %s\n", listaArquivos[i]);
            exit(1);
        }

        //imprime o caractere enquanto n�o for EOF (end of file)
        while ((ch = fgetc(fp)) != EOF) { //fget l� um caractere por vez no arquivo
            putchar(ch); //imprime cada caractere lido  na tela
        }

        fclose(fp); //fecha o arquivo

    }

    return;
}

//QUARTA OP��O MENU 2

void calcularMediaIdade(struct Maratona a[], int contador){
    //Verifica se h� equipes cadastradas se contador for = a 0
    if (contador == 0){
        printf("Nenhuma equipe foi cadastrada para calcular a m�dia de idada.\n");
        return;
    }

    // Looping para percorrer as equipes cadastradas
    for(int i=0; i<contador; i++){
        int soma = 0; // Variavel para acumular a soma das idades dos competidores

        for(int j=0; j<3; j++){ // Looping para somar a idade dos 3 competidores
            soma += a[i].idade[j];
        }

        float media = soma / 3.0; // Calculo da m�dia da idade da equipe

        //Exibi��o dos dados
        printf("Equipe: %s\n", a[i].nome);
        printf("M�dia de idade: %.2f\n", media);
        printf("-------------------\n");
    }
return ;
}

//QUINTA OP��O MENU 2
void consultarEquipes(struct Maratona a[], int contador, char letra){
    //Verifica se h� equipes cadastradas se contador for = a 0
    if (contador == 0){
        printf("Nenhuma equipe foi cadastrada para consultar\n");
        return;
    }

    int achouEquipe = 0; //Variavel para indicar que encontrou equipes com a letra solicitada

    printf("Equipes que come�am com a letra '%c': \n", letra);

    for (int i=0; i<contador; i++){ //Percorre as equipes
        if (tolower(a[i].nome[0]) == tolower(letra)){ //Compara a primeira letra do nome da equipe
            achouEquipe = 1;                          //Tolower serve para transformar em minuscula e n�o acontecer conflito
            printf("-> %s\n", a[i].nome);
        }
    }

    if (!achouEquipe){ //Se n�o achou nenhuma equipe, informa ao usuario
        printf("Nenhuma equipe encontrada com a letra '%c'\n", letra);
    }
return;
}


