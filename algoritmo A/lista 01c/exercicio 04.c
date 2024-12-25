// Considere a cotação do dia do Dólar Americano em relação ao Real Brasileiro: US$ 1,00  = R$ 4,98  Desenvolva um algoritmo que leia 
//um valor em Reais, informado pelo usuário, calcule e mostre o valor equivalente em Dólares, conforme a cotação informada na questão

#include<stdio.h>
#include<locale.h>
  int main(){
    setlocale(LC_ALL,"Portugese");
    float real,dólar;
    printf("digite o valor em reais:");
    scanf("%f",&real);
    //calculos]
    dólar=real/4.98;
    printf("o valor em dólar é:%f",dólar);
  return 0;
}
