//A turma de Algoritmos e Programação B tem 17 alunos. Para cada aluno, é necessário armazenar o nome, número de faltas (em horas),
//os valores das nota 1, nota 2, nota 3 e a média final. A média das notas é a média aritmética e deve ser calculada. Após fazer a 
//leitura dos valores, calcule a média das notas, para cada aluno e mostre o resultado final de acordo com as regras:
// Para ser aprovado, o estudante deve ter 75% de frequência. Caso contrário, está Reprovado por Frequência.
//Se o estudante tem 75% ou mais de frequência nas aulas, o resultado é:
//* Aprovado, se a média final for maior ou igual a 6,0 ou Reprovado, se a média final for menor que 6,0
//Para calcular a frequência, considere que a disciplina tem 80 horas.

#include<stdio.h>
#include<string.h>

struct tipoTurma{
  char nome[30];
  float NdeFaltas;
  float nota1;
  float nota2;
  float nota3;
  float media;
  float soma;
  float frequencia;
};
int main(){
  int i;
  struct tipoTurma a[5];

  for(i=0;i<5;i++){
    printf("\nALUNO %i\n",i+1);
    printf("digite o nome:");
    gets(a[i].nome);
    printf("digite o numero de horas de faltas:");
    scanf("%f",&a[i].NdeFaltas);
    printf("digite a nota 1:");
    scanf("%f",&a[i].nota1);
    printf("digite a nota 2:");
    scanf("%f",&a[i].nota2);
    printf("digite a nota 3:");
    scanf("%f",&a[i].nota3);
      
  }

  for(i=0;i<5;i++){
    a[i].soma=a[i].nota1+a[i].nota2+a[i].nota3;
    a[i].media=a[i].soma/3;
    printf("\nmedia %i  = %f",i+1,a[i].media);
    a[i].frequencia=((80-a[i].NdeFaltas)*100)/80;
    printf("\nfrequencia %f %%",a[i].frequencia);
  }

  for(i=0;i<5;i++){
    if(a[i].media>=6 && a[i].frequencia>=75){
      printf("\nALUNO %c APROVADO",a[i].nome);
    }else{
      printf("\nALUNO %i REPROVADO",i+1);
    }
  }
  return 0;
}
