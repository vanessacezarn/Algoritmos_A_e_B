 //Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um número de identificação e seu peso. Escreva um 
//algoritmo que recebe como entrada o número de identificação e o peso dos 20 bois. O algoritmo deve mostrar:
// a. O número e o peso do boi mais gordo  b. O número e o peso do boi mais magro  c. A média de peso dos bois

#include<stdio.h>
int main(){
  int identificacao,i,numeroMaior,numeroMenor;
  float peso,pesoMaior=0,pesoMenor=9999999,soma=0,media;

  for(i=1;i<=10;i++){
    printf("\nDigite o numero de identificação do boi %i:",i);
    scanf("%i",&identificacao);
    printf("digite o peso do boi %i:",i);
    scanf("%f",&peso);
    soma=soma+peso;
    if(peso>pesoMaior){
      pesoMaior=peso;
      numeroMaior=identificacao;
    }
    if(peso<pesoMenor){
      pesoMenor=peso;
      numeroMenor=identificacao;
    }
  }
printf("\no boi mais gosdo pesa %.2f e seu numero de identificação é %i",pesoMaior,numeroMaior);
printf("\no boi mais magro pesa %.2f e seu numero de identificação é %i",pesoMenor,numeroMenor);
media=soma/10;
printf("\na media de peso dos bois é %.2f",media);
  
  return 0;
}
