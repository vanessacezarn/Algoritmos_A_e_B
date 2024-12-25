//Ler um valor inteiro que indica um período de tempo em dias. O programa deve decompor este valor em dias, meses e anos. 
//Para simplificar, considere que todos os meses tem 30 dias e todos os anos tem 365 dias.

#include<stdio.h>
int main(){
  int idade_em_dias,anos,meses,dias;
  printf("digite a idade em dias:");
  scanf("%i",&idade_em_dias);
  //calculos
  anos=idade_em_dias/365;
  printf("anos:%i\n",anos);
  meses=(idade_em_dias%365)/30;
  printf("meses:%i\n",meses);
  dias=(idade_em_dias%365)%30;
  printf("dias:%i\n",dias);
  
  return 0;
}
