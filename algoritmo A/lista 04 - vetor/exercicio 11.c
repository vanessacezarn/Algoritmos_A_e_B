// 11.Escreva um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de
// números. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na
// ordem em que foi lido. Se o código for 2, mostre o vetor na ordem inversa, do último
// elemento até o primeiro.

#include<stdio.h>
int main(){
    int codigo,v[6],i,a;
 
  printf("digite os valores do vetor:");
  for(i=0;i<6;i++){
    scanf("%i",&v[i]);
  }
    printf("digite o codigo:");
    scanf("%d",&codigo);
      if(codigo==0){
        printf("programa encerrado");
      }else
        if(codigo==1){
        for(i=0;i<6;i++)
      printf("%d\t",v[i]);
        } 
      else{
      if(codigo==2){
        for(i=0;i<3;i++){
          a=v[i];
          v[i]=v[5-i];
          v[5-i]=a;
        }
        printf("na ordem inversa:");
        for(i=0;i<6;i++)
          printf("%i\t",v[i]);
      }
   
  }
  return 0;
}
