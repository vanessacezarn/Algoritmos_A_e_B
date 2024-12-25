//Escrever um algoritmo que efetue as operações de uma calculadora com 4 operações. O algoritmo lê o primeiro operando, a operação 
//( ‘+’, ‘-’, ‘*’ e ‘/’) e o operando. O algoritmo deve escrever na tela: 1º operando operação 2º operando = resultado
// Por exemplo, se forem lidos os valores 2 * 5, o algoritmo deverá escrever: 2*5 = 10

#include<stdio.h>
int main(){
float a,b,resultado;
char operacao;
  printf("digite o primeiro numero: ");
  scanf("%f",&a);
  printf("digite a operacao(+ ou -ou *ou /):");
  scanf("%s",&operacao);
  printf("digite o segundo numero: ");
  scanf("%f",&b);

  if(operacao == '+'){
    resultado = a + b;
    printf("\n%f + %f = %f",a,b,resultado);
    }else{
      if(operacao == '-'){
        resultado = a - b;
        printf("\n%f - %f = %f",a,b,resultado);
      }else{
        if(operacao == '*'){
          resultado = a * b;
          printf("\n%f * %f = %f",a,b,resultado);
        }else{
          if(operacao == '/')
            resultado=a/b;
            printf("\n%f / %f = %f",a,b,resultado);
        }
      }
    }
  


  return 0;
}
