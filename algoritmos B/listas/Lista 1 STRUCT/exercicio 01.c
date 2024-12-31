//Escreva um programa que faça o controle das informações relativas aos funcionários de uma determinada empresa. As informações que
//devem ser armazenadas são: Nome, Salário, Cargo e Idade. Defina a estrutura de dados e faça a leitura e exibição dos dados para um 
//funcionário

#include<stdio.h>
#include<string.h>

struct tipoFuncionario{
    char nome[30];
    char cargo[30];
    int idade;
    float salario;
};
int main(){
  struct tipoFuncionario a;

  printf("digite o nome do funcionario:");
  gets(a.nome);
  printf("digite o cargo do funcionario:");
  gets(a.cargo);
  printf("digiete o salario do funcionario:");
  scanf("%f",&a.salario);
  printf("digite a idade do funcionario:");
  scanf("%i",&a.idade);


  printf("***DADOS DIGITADOS DO FUNCIONARIO***\n");
  
  printf("Nome: ");
  puts(a.nome);
  printf("Salario = %.2f\n",a.salario);
  printf("Idade = %i\n",a.idade);
  printf("Cargo : ");
  puts(a.cargo);
  
 
  

  return 0;
}
