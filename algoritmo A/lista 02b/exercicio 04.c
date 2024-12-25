//Faça um programa leia o salário mensal de um funcionário e calcule o desconto do INSS,conforme as alíquotas da tabela:
//     Salário                      Alíquota INSS
//   até R$ 965,67                       8 %
// de R$ 965,68 a R$ 1.609,45            9 %
// de R$ 1.609,46 até R$ 3.218,90        11 %
// O algoritmo deverá apresentar como resultado o salário mensal do funcionário, o percentual de desconto do INSS e o valor em Reais
//do desconto do INSS e o salário líquido (salário mensal menos o valor do INSS)

#include<stdio.h>
int main(){
float salario,valor_R$_inss,salario_liquido;
  printf("digite o valor do salario:");
  scanf("%f",&salario);

  if(salario<965.67){
    printf("aliquota inss de 8%%\n");
    valor_R$_inss=salario*0.08;
    printf("valor_R$_inss=%.2f\n",valor_R$_inss);
    salario_liquido=salario-valor_R$_inss;
    printf("salario_liquido=%.2f\n",salario_liquido); 
  }else{
    if(salario<1609.45){
      printf("aliquota inss de 9%%\n");
       valor_R$_inss=salario*0.09;
      printf("valor_R$_inss=%.2f\n",valor_R$_inss);
      salario_liquido=salario-valor_R$_inss;
      printf("salario_liquido=%.2f\n",salario_liquido);
    }else{
        if(salario<3218.90){
          printf("aliquota inss de 11%%\n");
          valor_R$_inss=salario*0.11;
          printf("valor_R$_inss=%.2f\n",valor_R$_inss);
          salario_liquido=salario-valor_R$_inss;
        printf("salario_liquido=%.2f\n",salario_liquido);
        }


      
    }
  }

  return 0;
}
