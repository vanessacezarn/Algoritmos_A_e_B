// 2. Uma determinada região está sendo desmatada a uma taxa percentual constante, ano após
// ano. Escreva um algoritmo que leia a área da região, a taxa de desmatamento anual e
// escreva o ano em que a mata estará reduzida a menos de 20% de sua atual área.
// Por exemplo, se a área de floresta é 10.000.000 km2 e a taxa de desmatamento é de 1,5%
// ao ano, o algoritmo deve escrever como saída:
// “Em 2131, a área estará reduzida a menos ou igual a 20% de sua área atual, o que corresponde a 1984616 km2.”

#include<stdio.h>
int main(){
  float area,taxa,novaArea=0,desmatamento_final,qtde,ano,anoFinal;

  printf("Digite a area da regiao em km²:");
  scanf("%f",&area);
  printf("Digite a taxa de desmatamento anual em porcentagem:");
  scanf("%f",&taxa);
  printf("digite o ano atual:");
  scanf("%f",&ano);
  desmatamento_final=area*0.2;
  novaArea=area;

  do{
    novaArea=novaArea-(novaArea*taxa/100);
     qtde++;
  }while(novaArea>=desmatamento_final);
      printf("%f",qtde);
    anoFinal=ano+qtde;
  printf("\nO ano em que a area desmatada sera menor ou igual a 20%% da area atual é em %.0f e a area correspondera a %.2f km²",anoFinal,novaArea);
  return 0;
}
