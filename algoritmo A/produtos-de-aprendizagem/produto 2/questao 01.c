//A Federação Gaúcha de Futebol contratou um estudante de Ciência da Computação para fazer um levantamento estatístico do resultado
//de vários Grenais. Escreva um algoritmo que leia para cada Grenal, o número de gols marcados pelo Grêmio e o número de gols
//marcados pelo Internacional, imprimindo o nome do time vitorioso ou a palavra EMPATE. A solução deve ser desenvolvida com o uso de 
//vetores. Após, o programa ele deve escrever a mensagem: Novo Grenal (1. Sim 2. Não)? e solicitar uma resposta. Considere que no
//máximo serão inseridos 50 Grenais.Se a resposta for 1, o algoritmo deve solicitar novamente o número de gols marcados pelos times 
//em uma nova partida; se a resposta for 2 ou a quantidade máxima de Grenais for alcançada,deve ser exibido na tela:
//• quantos Grenais fizeram parte da estatística;• o número de vitórias do Grêmio;• o número de vitórias do Internacional;
//• o número de empates; e • uma mensagem indicando qual o time que venceu o maior número de Grenais (ou “Não houve vencedor”).
//Antes de encerrar, o algoritmo deve encontrar e mostrar a(s) partida(s) em que houve maior quantidade de gols.

//PRODUTO DE APREDIZAGEM - EXERCICIO 1
//VANESSA CEZAR DO NASCIMENTO
#include<stdio.h>
#include<locale.h>
int main(){
  setlocale(LC_ALL,"Portuguese");
  int golGremio[50],golInter[50],grenal=1,vGremio=0,vInter=0,empates=0,i,n=1;
  int golPartida[50],Maiorgol;

  do{
    printf("\nGRENAL %d\n",grenal);
    printf("Digite o n�mero de gols marcados pelo GR�MIO:");
    scanf("%d",&golGremio[grenal]);
    printf("Digite o n�mero de gols marcados pleo INTERNACIONAL:");
    scanf("%d",&golInter[grenal]);
    if(golGremio[grenal]>golInter[grenal]){
       printf("GR�MIO GANHOU\n");
       vGremio++;
    }else{
      if(golGremio[grenal]<golInter[grenal]){
         printf("INTER GANHOU\n");
         vInter++;
      }else{
         printf("EMPATE\n");
         empates++;
      }
    }
    printf("NOVO GRENAL? 1-SIM 2-N�O:");
    scanf("%d",&i);
    grenal++;
  }while(i==1 && grenal<=50);

  printf("\nFIZERAM PARTE DA ESTATISTICA %d GRENAL(IS)\n",grenal-1);
  printf("O GR�MIO venceu %d grenal(is)\n",vGremio);
  printf("O INTERNACIONAL venceu %d grenal(is)\n",vInter);
  printf("Houve %d EMPATE(S)\n",empates);
  if(vGremio>vInter){
      printf("O GR�MIO VENCEU O MAIOR NUMERO DE GRENAL(IS): %d\n",vGremio);
  }else{
    if(vGremio<vInter){
        printf("O INTERNACIONAL VENCEU O MAIOR NUMERO DE GRENAL(IS) : %d\n",vInter);
    }else{
      printf("N�O HOUVE VENCEDOR\n");
    }
  }
  Maiorgol=golGremio[1]+golInter[1];
  for(n=1;n<grenal;n++){
    golPartida[n]=golGremio[n]+golInter[n];
    if(golPartida[n]>Maiorgol){
       Maiorgol=golPartida[n];
    }
  }
  printf("Os grenais que tiveram o MAIOR NUMERO DE GOLS marcados foram:");
  for(n=1;n<grenal;n++){
   if(golPartida[n]==Maiorgol)
      printf("\n\tgrenal %d com %d gols",n,Maiorgol);
  }

  return 0;
}
