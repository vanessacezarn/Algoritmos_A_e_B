// 5. Escreva um algoritmo que leia um vetor inteiro de 20 posições. Crie um segundo vetor,
//substituindo os valores nulos por 2. Mostre os vetor lido e o vetor resultado.

#include<stdio.h>
int main(){
    int a[20],i,b[20];
  printf("digite os 20 elementos:\n");
  for(i=0;i<20;i++){
    scanf("%d",&a[i]);
  }
  i=0;
  while(i<20){
      if(a[i]!=0){
        b[i]=a[i];
      }else{
        b[i]=2;
      }
    i++;
  }
  printf("vetor resultado:");
  for(i=0;i<20;i++){
    printf("%d\t",b[i]);
  }
  return 0;
}
