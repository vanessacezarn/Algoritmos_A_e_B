//1. A empresa XYZ decidiu dar um aumento a seus funcionários de acordo com a seguinte regra:
//-13% para os salários inferiores ou iguais a R$ 2000,00;
//-11% para os salários situados entre R$ 2000,0 e R$ 4000,00 (inclusive);
//-9 % para os salários entre R$ 4000,00 e R$ 8000,00 (inclusive); e
//-7% para os demais salários.
// Desenvolva um programa que receba o salário atual de um funcionário e forneça o valor do
// seu novo salário. Mostre também o bônus (em reais e em %).

#include<stdio.h>
int main(){
  float salario_atual,bonus,salario_final;
  printf("digite o valor do salario atual:");
  scanf("%f",&salario_atual);

  if(salario_atual<=2000){
    bonus=salario_atual*0.13;
    printf("BONUS DE 13%%\n");
    printf("bonus=%.2f\n",bonus);
    salario_final=salario_atual+bonus;
    printf("salario final=%.2f\n",salario_final);
  }else{
      if(salario_atual<=4000){
        bonus=salario_atual*0.11;
        printf("BONUS DE 11%%\n");
        printf("bonus=%.2f\n",bonus);
        salario_final=salario_atual+bonus;
        printf("salario final=%.2f\n",salario_final);
      }else {
        if(salario_atual<=8000){
          bonus=salario_atual*0.09;
          printf("BONUS DE 9%%\n");
          printf("bonus=%.2f\n",bonus);
          salario_final=salario_atual+bonus;
          printf("salario final=%.2f\n",salario_final);
         }else{
            bonus=salario_atual*0.07;
            printf("BONUS DE 7%%\n");
            printf("bonus=%.2f\n",bonus);
            salario_final=salario_atual+bonus;
            printf("salario final=%.2f\n",salario_final);
         }
      }
  }
  return 0;
}
