 //6. Determine e informe a faixa etária de uma pessoa, a partir do seu ano de nascimento e do
 //ano atual. Faixas:
//- 0 a 9 anos: criança
//-10 a 11 anos: pré-adolescente
//- 12 a 18 anos: adolescente
//- 18 a 25 anos: jovem
//- 26 a 59 anos: adulto
//- 60 em diante: idoso

#include <stdio.h>
int main(){
  int ano_nascimento, ano_atual, idade;
  printf("Digite o ano de nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Digite o ano atual: ");
  scanf("%d", &ano_atual);
  idade = ano_atual - ano_nascimento;
  printf("Idade = %d\n", idade);

  if(idade>=0 && idade<=9){
    printf("CRIANÇA");
  }else{
      if(idade>=10 && idade<=11){
        printf("PRE-ADOLESCENTE");
      }else{
        if(idade>=12 && idade<=18){
          printf("ADOLESCENTE");
        }else{
          if(idade>=19 && idade<=25){
            printf("JOVEM");
          }else{
            if(idade>=26 && idade<=59){
              printf("ADULTO");
            }else{
              printf("IDOSO");
            }
          }
        }
      }
  }
  
  return 0;
}
