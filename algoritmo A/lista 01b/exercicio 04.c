//Escreva um algoritmo que leia a matrícula, o valor da hora e o número de horas trabalhadas por um empregado. O algoritmo deve 
//escrever a matrícula e o salário líquido do empregado, calculado conforme as seguintes regras:
//- o salário bruto mensal é o produto das horas trabalhadas pelo valor da hora;
//- sobre o salário bruto mensal é aplicado um desconto de 9% referente ao INSS;
//- sobre o salário bruto mensal é aplicado um desconto de 8% referente ao FGTS;
//- o salário líquido é o salário bruto mensal menos os encargos (descontos).

#include<stdio.h>
int main(){
  float matricula,valor_hora,horas_trabalhadas,salario_bruto;
  float salario_liquido,inss,fgts;
printf("digite o a matricula o funcionario:");
  scanf("%f",&matricula);
  printf("digite o valor da hora trabalhada:");
  scanf("%f",&valor_hora);
  printf("digite o numero de horas trabalhadas:");
  scanf("%f",&horas_trabalhadas);

  //calculo
  salario_bruto=valor_hora*horas_trabalhadas;
  inss=salario_bruto*0.09;
  fgts=salario_bruto*0.08;
  salario_liquido=salario_bruto-inss-fgts;

  printf("matricula:%3.f\n",matricula);
  printf("salario liquido:%3.f\n",salario_liquido);


  return 0;
  
}
