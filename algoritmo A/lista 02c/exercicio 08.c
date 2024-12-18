//8. Escreva um algoritmo que leia o número de inscrição de um nadador, sua idade e sexo (F
//ou M). O algoritmo deve escrever a categoria do nadador, conforme a tabela:
//   Idade         Sexo      Categoria
// 6 a 8 anos        F        Infantil A-F
// 6 a 8 anos        M        Infantil A-M
// 9 a 11 anos     F ou M     Infantil B
// 12 a 14 anos    F ou M       Juvenil 

#include<stdio.h>
int main(){
  char sexo;
  int idade,inscricao;
  printf("digite o sexo do nadador(F-feminino ou M-masculino):");
  scanf(" %c",&sexo);
  printf("digite a inscricao do nadador:");
  scanf("%d",&inscricao);
  printf("digite a idade do nadador:");
  scanf("%d",&idade);

  if(idade<6){
    printf("OPCAO INVALIDA");
    }else{
         if(idade>14){
    printf("OPCAO INVALIDA");
      }
    }
  if(sexo=='F'&& idade>=6 && idade <= 8){
    printf("CATEGOTIA INFANTIAL A-F");
  }else{
       if(sexo=='M'&& idade>=6 && idade <= 8){
         printf("CATEGORIA INFANTIL A-M");
       }else{
          if(sexo=='F'||sexo=='M'&& idade>=9 && idade <= 11){
          printf("CATEGORIA JUVENIL B");
          }else{
           if(sexo=='F'||sexo=='M'&& idade>=12 && idade <= 14){
             printf("CATEGORIA JUVENIL A");
           }
        }
    
  }
  }
  return 0;
}
