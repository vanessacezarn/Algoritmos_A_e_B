// Desenvolva um algoritmo para ler o código, o salário líquido e o número de filhos dos funcionários de uma empresa. Para cada 
//funcionário, o algoritmo deve escrever seu código e salário líquido acrescido de um adicional de 5% para cada filho. 
//O algoritmo para de ler os dados quando o código fornecido for zero.

#include<stdio.h>
int main(){

  int codigo,filhos,i=0;
  float salarioLiquido,salarioFinal;

  printf("***SALARIO COM FILHOS***\n");
 
   do{
     printf("\nDigite o CODIGO do funcionario:");
     scanf("%d",&codigo);
      if(codigo!=0){
     
     printf("Digite o SALARIO do funcionario:");
     scanf("%f",&salarioLiquido);
     printf("digite a quantidade de FILHOS do funcionaro:");
     scanf("%d",&filhos);
     salarioFinal=salarioLiquido+(salarioLiquido*0,05*filhos);
     printf("SALARIO FINAL0 do funcionario:%.2f\n",salarioFinal);
      }
   }
    while(codigo != 0);




  return 0;
}
