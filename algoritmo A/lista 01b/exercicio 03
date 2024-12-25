// Uma revenda de carros paga a seus vendedores um salário fixo de X reais por mês, acrescido de uma comissão de Y reais para cada
//carro vendido e 4% do valor total de suas vendas. Escreva um algoritmo que leia o código do vendedor, seu salário, o número de 
//carros que ele vendeu no mês e o valor total de suas vendas. O algoritmo deve mostrar o código do vendedor e o seu salário final.

#include<stdio.h>
#include<locale.h>
int main(){
      setlocale(LC_ALL,"Portuguese");
  float código,salário,carros_vendidos,total_vendas,salário_final;
  float comissão,bônus,a;
  printf("digite o código do vendedor:");
  scanf("%f",&código);
  printf("digite o salário fixo:");
  scanf("%f",&salário);
  printf("digite a quantidade de carros vendidos:");
  scanf("%f",&carros_vendidos);
  printf("digite o valor total das vendas:");  
  scanf("%f",&total_vendas);
  printf("digite o valor da comissão por carro vendido:");
  scanf("%f",&comissão);
  //calculo
  a=carros_vendidos*comissão;
  bônus=total_vendas*0.04;
  salário_final=salário+a+bônus;
  //saida de dados
  printf("código do vendedor:%2.f\n",código);
  printf("salário final : %f\n",salário_final);



  return 0;
}
