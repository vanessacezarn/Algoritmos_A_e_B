//Cálcule a distância entre dois pontos no plano cartesiano, conforme a equação a seguir. Utilize uma estrutura para definir o 
//tipo de dado.  dAB =√[(x2−x1)²+(y2−y1)²]

#include <stdio.h>
#include<string.h>
#include<math.h>
struct tipoPonto{
  int x1,x2,y1,y2;
  float d;
};

int main() {
  struct tipoPonto p;

  printf("digite as coordenadas do primeiro ponto:");
  scanf("%i%i",&p.x1,&p.y1);
  printf("digite as coordenadas do segundo ponto:");
  scanf("%i%i",&p.x2,&p.y2);

  p.d=sqrt(pow(p.x2-p.x1,2)+pow(p.y2-p.y1,2));
  printf("distancia entre pontos = %.2f",p.d);
  
  
  return 0;
}
