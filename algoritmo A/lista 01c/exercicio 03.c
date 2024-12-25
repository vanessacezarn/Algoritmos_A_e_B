//Uma família deseja informatizar suas despesas domésticas, pois seu filho está cursando Ciência da Computação.Para o cálculo, 
//as despesas da família são: água, luz, telefone, condomínio, mensalidade,saúde, alimentação, vestuário, transporte e segurança. 
//As receitas são o salário do pai e o salário da mãe. Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total
//o total de despesas e o saldo final

#include<stdio.h>
int main(){
  float agua,luz,telefone,condominio,mensalidade,saude;
  float alimentacao,vestuario,transporte,seguranca;
  float salario_pai,salario_mae,renda_total,despesas_totais;
  float saldo_final;

  printf("digite o valor da conta de agua:");
  scanf("%f",&agua);
  printf("digite o valor da conta de luz:");  
  scanf("%f",&luz);
  printf("digite o valor da conta de telefone:");
  scanf("%f",&telefone);
  printf("digite o valor da conta de condominio:");
  scanf("%f",&condominio);
  printf("digite o valor da mensalidade:");
  scanf("%f",&mensalidade);
  printf("digite o valor da conta de saude:");
  scanf("%f",&saude);
  printf("digite o valor da conta de alimentacao:");
  scanf("%f",&alimentacao);
  printf("digite o valor da conta de vestuario:");
  scanf("%f",&vestuario);
  printf("digite o valor da conta de transporte:");
  scanf("%f",&transporte);
  printf("digite o valor da conta de seguranca:");
  scanf("%f",&seguranca);
  printf("digite o valor do salario de sua mae:");
  scanf("%f",&salario_mae);
  printf("digite o valor do salario de seu pai:");
  scanf("%f",&salario_pai);

  //calculos
  renda_total=salario_mae+salario_pai;
  printf("renda total:%2.f\n",renda_total);
  despesas_totais=agua+luz+telefone+condominio+mensalidade+saude+alimentacao+vestuario+transporte+seguranca;
  printf("despesas totais:%2.f\n",despesas_totais);
  saldo_final=renda_total-despesas_totais;
  printf("saldo final:%2.f\n",saldo_final);
  return 0;
}
