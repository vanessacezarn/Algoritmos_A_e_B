// 4. Para uma pesquisa a respeito do consumo mensal de energia elétrica em determinada
// cidade, são fornecidos os seguintes dados dos consumidores: código do consumidor,
// quantidade de kWh consumidos durante o mês, tipo de consumidor (residencial
// representado pela letra ‘R’; comercial, respresentado pela letra ‘C’; e industrial,
// representado pela letra ‘I’). Escreva um algoritmo que calcule e escreva os seguintes
// resultados:
//- o menor consumo dentre os consumidores residenciais e o código desse consumidor;
//-o maior consumo dentre os consumidores comerciais e o código desse consumidor;
//- a média geral de consumo industrial.
// O algoritmo para de ler dados quando o tipo de consumidor fornecido for ‘X’

#include<stdio.h>
int main(){
  int codigo,codigoMaior,codigoMenor,i=0;
  float quantidade,menorConsumo=9999999999,maiorConsumo=0,soma=0,media;
  char tipo;
  printf("***CONSUMO DE ENERGIA ELETRICA***\n");
  do{
    fflush(stdin);
    printf("\ndigite o tipo de consumidor (R-residencial, C-comercial, I-industrial):");
    scanf("%c",&tipo);
    printf("Digite o CODIGO do consumidor:");
    scanf("%i",&codigo);
    printf("digite a quantidade de KWh consumidas no mes:");
    scanf("%f",&quantidade);
    if(tipo=='C'){
        if(quantidade>maiorConsumo){
          maiorConsumo=quantidade;
          codigoMaior=codigo;
        }
    }
     if(tipo=='R'){
                if(quantidade<menorConsumo){
                    menorConsumo=quantidade;
                    codigoMenor=codigo;
                 }
             }
     if(tipo=='I'){
                    i++;
                    soma=soma+quantidade;
               }
  }while(tipo!='X');
  media=soma/i;
  printf("\n O que MAIS consumiu entre os comerciais eh %i e o seu consumo foi de %.2f",codigoMaior,maiorConsumo);
  printf("\n O que MENOS consumiu entre os residenciais eh %i e o seu consumo foi de %.2f",codigoMenor,menorConsumo);
  printf("\n A media geral de consumo industrial eh de %.2f",media);
  
  return 0;
}

