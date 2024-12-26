//Paulo tem 1,48 metro e cresce 2 centímetros por ano. Joaquim 1,25 metro e cresce 3 centímetros por ano. Construa um algoritmo que 
//calcule e mostre quantos anos serão necessários para que Joaquim esteja mais alto que Paulo.

#include<stdio.h>
int main(){
  float i=0,alturaPaulo=1.48,alturaJoaquim=1.25;

  while(alturaPaulo>=alturaJoaquim){
    alturaPaulo+=0.02;
    alturaJoaquim+=0.03;
    i++;
  }
  printf("a quantidade de anos é %.0f",i);
  printf("\nPaulo %.2f",alturaPaulo);
  printf("\nJoaquim %.2f",alturaJoaquim);

  return 0;
}
