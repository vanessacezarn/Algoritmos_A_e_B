//Escreva um algoritmo para ler duas notas de cada aluno, de uma turma de 40 alunos. Para cada aluno, escreva na tela a palavra 
//“Aprovado” se a média das duas notas do aluno for maior ou igual a 7,0. Caso a média seja inferior a 7,0, o programa deve ler a nota
//do exame e calcular a média final. Se esta média for maior ou igual a 5,0, o programa deve escrever “Aprovado”, 
//caso contrário deve escrever “Reprovado”.

#include<stdio.h>
int main(){
  float nota1,nota2,exame,soma=0,media,mediaFinal;
  int i;
  for(i=1;i<=5;i++){
    printf("\nALUNO %i\n",i);
    printf("digite a primeira nota:");
    scanf("%f",&nota1);
    printf("digite a segunda nota:");
    scanf("%f",&nota2);
    soma=nota1+nota2;
    media=soma/2;
    printf("media do aluno:%.2f\n",media);
    if(media>=7){
      printf("\nSituação: APROVADO\n",i);
    }else{
      printf("digite a nota do exame:");
      scanf("%f",&exame);
      mediaFinal=(soma+exame)/3;
      if(mediaFinal>5){
        printf("\nSituação: APROVADO\n",i);
      }else{
        printf("\nSituação: REPROVADO\n",i);
      }
    }
  }

  return 0;
}
