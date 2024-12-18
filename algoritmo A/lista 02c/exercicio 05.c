//5. Fazer um algoritmo que leia valores para as variáveis hora, minuto e segundo; verificando e
// escrevendo se elas correspondem a um horário válido ou não. Para um horário ser válido, a hora
// deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.

#include<stdio.h>
int main(){
  int hora,minuto,segundo;
  printf("digite a hora com minutos e segundos:");
  scanf("%d%d%d",&hora,&minuto,&segundo);

  if(hora>=0 && hora<=23 && minuto>=0 && minuto<=59 && segundo>=0 && segundo<=59){
    printf("HORA VALIDA\n");
    printf("HORA: 0%d:0%d:0%d",hora,minuto,segundo);
  }else{
    printf("HORA INVALIDA\n");
  }


  return 0;
}
