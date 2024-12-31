//A Cifra de César é uma das técnicas de criptografia de dados mais simples. É conhecida também como Cógido de César ou Troca de 
//César. É um tipo de cifra por substituição, em que cada caracter é substituido por outro caracter.Essa Cifra consiste em receber 
//uma mensagem (string) e modificá-la de forma que cada caracter é substituído por outro caracter que se apresenta no alfabeto 
//abaixo dela um número fixo de vezes. Esse número fixo de vezes, é chamado de número de troca ou deslocamento à direita ou chave de
//criptografia.Por exemplo, se a mensagem recebida for ABACO e a número de troca for igual a 3, a mensagem será codificada para: 
//DEDFR, ou seja, o A foi substituído por D, e os demais caracteres foram substituídos pelo caracter 3 posições à sua frente.
//Desenvolva um programa na linguagem C para ler uma mensagem (string) de no máximo 100 caracteres e ler o número de troca.
//Posteriormente, o programa deve codificar a mensagem conforme a Cifra de César e exibi-la ao usuário

//PRODUTO DE APRENDIZAGEM 3 - 08/07/2024
//PROBLEMA 2
//VANESSA CEZAR DO NASCIMENTO

#include<stdio.h>
#include<string.h>
int main(){
  int i,n;
  char palavra[100];

  printf("***CIFRA DE CESAR***\n");

  printf("DIGITE SUA MENSAGEM:");
  gets(palavra);
  printf("DIGITE O NUMERO DE TROCA:");
  scanf("%i",&n);

  for(i=0;palavra[i]!='\0';i++){
    if(palavra[i]>=65 && palavra[i]<=90){
      palavra[i]=palavra[i]+n;
      if(palavra[i]>90){
        palavra[i]=palavra[i]-26;
      }
    }else{
      if(palavra[i]>=97 && palavra[i]<=122){
        palavra[i]=palavra[i]+n;
        if(palavra[i]>122){
          palavra[i]=palavra[i]-26;
        }
      }
    }
  }

  printf("MENSAGEM CODIFICADA: ");
  puts(palavra);


  
return 0;
}
