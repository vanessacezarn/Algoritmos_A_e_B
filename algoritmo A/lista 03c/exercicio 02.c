//No 1º turno de eleição para Presidente da República, há 10 candidatos. Escreva um algoritmo para ler o número da legenda do candidato
//e a quantidade de votos recebidos. O algoritmo deve mostrar o candidato com maior número de votos e o percentual recebido
// por este candidato sobre a quantidade total de votos.

#include<stdio.h>
int main(){
  int numero,numeroMaior,i;
  float percentual,votos,soma=0,maiorVotos=0;
  for(i=1;i<=10;i++){
  printf("digite o numero do candidato %i:",i);
  scanf("%i",&numero);
  printf("digite a quantidade de votos recebida pelo candidato %i:",i);
    scanf("%f",&votos);
    soma=soma+votos;
    if(votos>maiorVotos){
      maiorVotos=votos;
      numeroMaior=numero;
    }
  }
  percentual=(maiorVotos/soma)*100;
  printf("\no candidato com maior numero de votos foi o de numero %i com %.2f %% dos votos",numeroMaior,percentual);



  return 0;
}
