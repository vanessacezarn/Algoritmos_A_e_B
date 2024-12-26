// Desenvolva um algoritmo para ler o código, o salário líquido e o número de filhos dos funcionários de uma empresa. Para cada 
//funcionário, o algoritmo deve escrever seu código e salário líquido acrescido de um adicional de 5% para cada filho. 
//O algoritmo para de ler os dados quando o código fornecido for zero.

#include<stdio.h>
int main(){
 int codigo,filhos,i=0;
 float salarioLiquido,salarioFinal,acrescimo;

  do{
    printf("\nDigite o codigo do funcionario:");
    scanf("%i",&codigo);
    if(codigo==0){
      printf("fim do programa");
    }else{
    printf("Digite o salario do funcionario:");
    scanf("%f",&salarioLiquido);
    printf("Digite a quantidade de filhos do funcionario:");
    scanf("%i",&filhos);
    acrescimo=salarioLiquido*0.05;
    salarioFinal=salarioLiquido+(acrescimo*filhos);
    printf("O salario FINAL do funcionario %i eh: %.2f\n",codigo,salarioFinal);
    }
  }while(codigo!=0);

  return 0;
}
