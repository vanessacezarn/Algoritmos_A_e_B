//9. Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o
//primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
// antepenúltimo e assim sucessivamente. Mostre o novo vetor depois da troca.

#include<stdio.h>
int main (){
    int v[10],i=0,a;
    printf("digite os 10 elementos do vetor:");
    for(i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
      for(i=0;i<5;i++){
        a=v[i];
        v[i]=v[9-i];
        v[9-i]=a;
    }
  printf("\napos a troca\n");
  for(i=0;i<10;i++){
    printf("%d\t",v[i]);
  }
  return 0;
}
