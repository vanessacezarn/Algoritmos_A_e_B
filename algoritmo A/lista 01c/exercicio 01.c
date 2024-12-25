//Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a idade da pessoa 
//em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese:");
  int ano,meses,dias,idade_em_dias;
  printf("digite a idade em anos, meses e dias:");
  scanf("%d%d%d",&ano,&meses,&dias);
  //CALCULO
  idade_em_dias=ano*365+meses*30+dias;

  if(meses>=13 && dias>=31){
    printf("OPÇÃO INVÁLIDA:MÊS E DIAS INCORRETOS");
  }else{
      if(meses>=13){
        printf("O VALOR ULTRAPASSA O LIMITE DE MESES DE UM ANO");
      }else{
          if(dias>=31){
            printf("O VALOR ULTRAPASSA O LIMITE DE DIAS DE UM MÊS");
          }else{
            printf("idaded em dias:%d",idade_em_dias);
          }
      }
  }
  return 0;
}
