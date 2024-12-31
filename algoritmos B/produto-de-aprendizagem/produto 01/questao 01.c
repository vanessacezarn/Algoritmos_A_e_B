//No nosso dia-a-dia, durante a resolução de problemas e sua implementação, nos deparamos com diferentes tipos de dado se 
//manipulações desses dados, que precisam ser elaboradas. Com o uso de ferramentas de edição e compilação de programas, faça um 
//programa para gerenciar o Controle de Pacientes, em um consultório pediátrico, conforme a descrição:Em um consultório pediátrico,
//ha um sistema para Controle de Pacientes. No Cadastro de Paciente, são armazenados os seguintes dados:
//Quadro 1 – Dados do Paciente.
//Código Paciente:  Nome do Paciente:Data de Nascimento:Nome da Mãe:Nome do Pai: Junto aos dados do Paciente, são armazenados também
//os dados da Última Consulta:
//Quadro 2 – Dados da Última Consulta
//Data da Última Consulta:Peso (Kg): Altura (cm):Prescrição: Valor Pago (R$): 
//Desenvolva um algoritmo com a estrutura de dados, para armazenar os dados do paciente e da última consulta, e funções para 
//realizar o que se pede:• Apresentar um Menu de Opções:A) Cadastrar Paciente B) Registrar Consulta C) Visualizar Prescrição
//D) Listar Pacientes E) Valor total recebido no mês F) Finalizar
//• Se a opção escolhida for a A), o usuário poderá Cadastrar Pacientes, enquanto desejar (o sistema pode
//perguntar ao usuário se deseja continuar o Cadastro). Esse cadastro é conforme o Quadro 1.
//• Se a opção escolhida for a B), já deve ter sido cadastrado algum Paciente no programa para ser possível
//Registrar a Consulta. Antes de fazer o registro, o sistema deve solicitar ao usuário que informe o Código ou
//o Nome do Paciente, para que seja registrada a consulta. Os dados da consulta são conforme o Quadro 2.
//• Se a opção escolhida for a C), Visualizar Prescrição, o sistema deve solicitar ao usuário que informe o
//Código ou o Nome do Paciente, depois disso, são mostrados os seguintes dados:
//◦ Código e nome do Paciente◦ Data da última consulta◦ Idade (em anos, meses e dias)◦ Peso e Altura do Paciente◦ Prescrição
//• Se a opção escolhida for a D), são listados todos os pacientes e seus dados, conforme o Quadro 1, bem
//como a data da última consulta.
//• Se a opção escolhida for a E), o sistema solicita ao usuário que informe o mês e o ano, para que seja
//calculado e mostrado o valor total recebido naquele mês.
//• Se a opção escolhida for a F), o programa é finalizado.


#include<stdio.h>
#include<string.h>
#include<locale.h>
int contador=0;
int a=0;

struct dados_consultas{
    float peso,altura,valor_pago;
    char prescricao[100],data_consulta[15];

};
struct dados_paciente {
	int codigo_paciente;
	char nome_paciente[50],nome_mae[50],nome_pai[50],data_nascimento[15];
	struct dados_consultas c[50];
};

int cadastrarPaciente (struct dados_paciente d[], int contador){

            int continuar;
            printf("\ncontador %i",contador);
            do{
            printf("\nDigite o código do paciente:");
            scanf("%i",&d[contador].codigo_paciente);
            printf("Digite o nome do paciente:");
            fflush(stdin);
            gets(d[contador].nome_paciente);
            printf("Digite a data de nascimento do paciente:");
            gets (d[contador].data_nascimento);
            printf("Digite o nome da mãe do paciente:");
            fflush(stdin);
            gets(d[contador].nome_mae);
            printf("Digite o nome do pai do paciente:");
            gets(d[contador].nome_pai);
            fflush(stdin);
            printf("Deseja continuar? (1-Sim 2-Nao) ");
            scanf("%i",&continuar);
            contador++; // CONTADOR PARA SABER QUANTOS PACIENTES ESTÃO SENDO CADASTRADOS É NECESSARIO PARA AS OUTRAS OPÇOES DO MENU COMO B E D
            }while(continuar==1);

    return contador;
}

void RegistrarPaciente(struct dados_paciente d[],int contador, int a){
    char op;
    char nome[50];
    int codigo;
    int i;

    printf("\nEscolha informar o nome (N) ou codigo (C) do paciente : ");
    fflush(stdin);
    scanf("%c", &op);

    if(op == 'n' || op == 'N'){
        printf("Digite o nome: ");
        fflush(stdin);
        gets(nome);

        for(i=0; i<contador; i++){
            if(d[i].nome_paciente==nome){

                printf("367\n");
            }

        }
    }

    if(op == 'c' || op == 'C'){
        printf("Digite o codigo: ");
        scanf("%i",&codigo);
        for(i=0; i<contador; i++){
            if(d[i].codigo_paciente==codigo){
                    printf("Digite a data da última consulta:");
                    fflush(stdin);
                    gets(d[i].c[a].data_consulta);
                    printf("Digite o peso em Kg do paciente:");
                    scanf("%f",&d[i].c[a].peso);
                    printf("Digite a altura em cm do paciente:");
                    scanf("%f",&d[i].c[a].altura);
                    printf("Digite a prescrição:");
                    fflush(stdin);
                    gets(d[i].c[a].prescricao);
                    printf("Digite o valor pago pela consulta em reais:");
                    scanf("%f",&d[i].c[a].valor_pago);
                    a++;
            }

        }

    }

return ;
}

void prescricao (struct dados_paciente d[],int contador, int a){
    char opcao;
    char nome[50];
    int codigo;
    int i;

    printf("\nEscolha informar o nome (N) ou codigo (C) do paciente : ");
    fflush(stdin);
    scanf("%c", &opcao);

    if(opcao == 'n' || opcao == 'N'){
        printf("Digite o nome: ");
        fflush(stdin);
        gets(nome);

        for(i=0; i<contador; i++){
            if(d[i].nome_paciente==nome){

                printf("367\n");
            }

        }
    }

    if(opcao == 'c' || opcao == 'C'){
        printf("Digite o codigo: ");
        scanf("%i",&codigo);
    for(i=0;i<contador;i++){
        printf("\nNome do paciente : %s",d[i].nome_paciente);
        printf("\nCodigo do paciente: %i",d[i].codigo_paciente);
        printf("\nData da ultima consulta : %s",d[i].c[a].data_consulta);
        //printf("\nIdade );
        printf("\nPeso do paciente: %.2f Kg",d[i].c[a].peso);
        printf("\nAltura do paciente : %.2f cm",d[i].c[a].altura);
        printf("\nPrescricao :");
        puts(d[i].c[a].prescricao);

    }
    }

return ;
}



void listaPaciente(struct dados_paciente d[]){
    int i;
    for(i=0;i<contador;i++){
                    printf("\n \t***DADOS PACIENTE %i***",i+1);
                    printf("\nnome do paciente : %s",d[i].nome_paciente);
                    printf("\nCodigo do paciente: %i",d[i].codigo_paciente);
                    printf("\ndata de nascimento: %s",d[i].data_nascimento);
                    printf("\nnome da mae do paciente: %s",d[i].nome_mae);
                    printf("\nnome do pai do paciente: %s",d[i].nome_pai);
                    printf("\ndata da ultima consulta %s",d[i].c[a].data_consulta);//adicionar a data
    }

return ;

}

int main() {
     setlocale(LC_ALL,"Portuguese");
	struct dados_paciente d[100];
	//struct dados_consultas c[100];
	char n;
	int continuar,i;
	do{
        printf("\n \t***MENU DE OPCÕES***");
        printf("\n A) Cadastar paciente.");
        printf("\n B) Registrar consulta.");
        printf("\n C) Visualizar prescrição.");
        printf("\n D) Listar pacientes.");
        printf("\n E) Valor total recebido no mes.");
        printf("\n F) Finalizar");
        printf("\nESCOLHA UMA DAS OPCOES DO MENU:");
        fflush(stdin);
        scanf("%c",&n);

        while(n!='a'&& n!='A'&& n!='b'&& n!='B'&& n!='c'&& n!='C'&& n!='d'&& n!='D'&& n!='e'&& n!='E'&& n!='f' && n!='F') {
            printf("OPCOES INVALIDA\n");
            printf("\nESCOLHA UMA DAS OPCOES DO MENU:");
            fflush(stdin);
            scanf("%c",&n);

        }


        if(n=='a'|| n=='A') {
            printf("\n OPCOES ESCOLHIDA - A)Cadastrar paciente.");
            contador=cadastrarPaciente(d, contador);

        }

        if(n=='b'||n=='B'){
            printf("\n OPCOES ESCOLHIDA - B)Registrar consulta.");
            if(contador>0){
               RegistrarPaciente(d,contador,a);
            }else{
                printf("\nÉ NECESSÁRIO CADASTRAR UM PACINTE ANTES DE REGISTRAR SUA CONSULTA");
            }

        }
        if(n=='c'||n=='C'){
            printf("\n OPCOES ESCOLHIDA - C)Visualizar prescricao.");
            if(contador>0){
                prescricao(d,contador,a);
                //CalculoData(d);
            }else{
                //TAMBÉM É NECESSSARIO FAZER O REGISTRO DE UM PACIENTE ANTES
                printf("\nÉ NECESSÁRIO CADASTRAR UM PACINTE ANTES DE VISUALIZAR A PRESCRIÇÃO");
            }

        }

        if(n=='d'||n=='D'){
            printf("\n OPCOES ESCOLHIDA - D) Listar pacientes.");
            if(contador>0){
                listaPaciente(d);

            }else{
                printf("\n NAO HA NENHUM PACIENTE CADASTRADO");
            }

        }


        if(n=='e'||n=='E'){
            printf("\n OPCOES ESCOLHIDA - E) Valor total recebido no mes.");

        }



    }while(n!= 'F' && n!='f');


	return 0;

}

