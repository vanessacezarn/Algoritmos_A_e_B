//3. Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a
// idade da pessoa em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).

#include<stdio.h>
int main(){
//declaraçao de variaveis
int idade_em_anos,meses,dias,idade_em_dias;
//entrada de dados
printf("digite o valor de idade_em_anos,meses,dias:");
scanf("%i%i%i",&idade_em_anos,&meses,&dias);
//calculos
idade_em_dias=(idade_em_anos*365)+(meses*30)+dias;
//saida de dados
printf("idade_em_dias=%i\n",idade_em_dias);



return 0;
}
