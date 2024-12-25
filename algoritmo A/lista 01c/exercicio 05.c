 //Júlia ao procurar seu gatinho, o avistou em cima da árvore. Ela pediu ajuda a seu pai, que colocou uma escada junto à árvore para 
//ajudar o gato a descer. Sabendo que a altura que o gato está do chão é o valor a (em metros) e que a escada estava posicionada a b 
//metros da árvore, calcule o comprimento da escada que o gato deverá descer, considerando que este equivale à hipotenusa c.
//Desenvolva um algoritmo para ler os valores de a e b e calcular o comprimento da escada, usando o Teorema de Pitágoras: c² = a² + b²

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
  float a,b,c;
  printf("digite a altura que o gato está do chão:");
  scanf("%f",&a);
  printf("digite a distância  entre a árvore e base da escada:");
  scanf("%f",&b);

  c=sqrt(pow(a,2)+pow(b,2));
  printf("o comprimento de escada que o gato irá descer=%f\n",c);
}
