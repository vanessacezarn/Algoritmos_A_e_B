// Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um número de identificação e seu peso. Escreva um 
//algoritmo que recebe como entrada o número de identificação e o peso dos 20 bois. O algoritmo deve mostrar:
// a. O número e o peso do boi mais gordo  b. O número e o peso do boi mais magro  c. A média de peso dos bois

//Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo umnúmero de identificação e seu peso. Escreva um algoritmo que recebe como entrada onúmero de identificação e o peso dos 20 bois. O algoritmo deve mostrar:a. O número e o peso do boi mais gordob. O número e o peso do boi mais magroc. A média de peso dos bois//

#include<stdio.h>
int main(){
  int numero,i,N=5,numeroMaior,numeroMenor;
  float peso,pesoMaior=0,pesoMenor=999999999999999;
  float soma = 0, media;

  printf("***problema dos BOIS***");
  for(i=1;i<=N;i++){
    printf("Entrada %i\n",i);
    printf("Numero do boi: ");
    scanf("%i",&numero);
    printf("Peso do boi: ");
    scanf("%f",&peso);

    if(peso>pesoMaior){
      pesoMaior=peso;
      numeroMaior=numero;
    }

    if(peso<pesoMenor){
      pesoMenor=peso;
      numeroMenor=numero;
    }
    soma=soma+peso;
  }
    media=soma/N;
    printf("o maior boi é o de numero %d e pesa %.2f\n",numeroMaior,pesoMaior);
    printf("o menor boi é o de numero %d e pesa %.2f\n",numeroMenor,pesoMenor);
    printf("A media do peso dos bois é %.2f\n",media);

  return 0;
}
