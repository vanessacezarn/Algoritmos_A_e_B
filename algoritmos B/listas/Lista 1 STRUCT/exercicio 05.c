//Escrever um programa que leia as coordenadas de três pontos cartesianos. Considerando que os dois primeiros pontos definem um 
//retângulo de arestas paralelas aos eixos, verifique se o outro ponto está ou não dentro do retângulo.

#include <stdio.h>
#include<string.h>
struct tipoCoordenada{
    int x1,x2,x3;
    int y1,y2,y3;
};
int main(){
  struct tipoCoordenada c;
  printf("digite as coordenadas do primeiro ponto:");
  scanf("%i%i",&c.x1,&c.y1);
  printf("digite as coordenadas do segundo ponto:");
  scanf("%i%i",&c.x2,&c.y2);
  printf("digite as coordenadas do terceiro ponto:");
  scanf("%i%i",&c.x3,&c.y3);

  //x1<=x3<=x2 se x1>x2, else x2<=x3<=x1;
  //y1<=y3<=y2 se y1>y2, else y2<=y3<=y1; ###

  if(c.x1>=c.x2){
    if(c.y1>c.y2){
      if(c.x3<=c.x1 && c.x3>=c.x2 && c.y3<=c.y1 && c.y3>=c.y2){
        printf("\no ponto esta dentro do retangulo");
      }else{
        printf("\n o ponto esta fora do retangulo");
      }
    }
  }else{
    if(c.x1<=c.x2){
        if(c.y1<=c.y2){
          if(c.x3>=c.x1 && c.x3<=c.x2 && c.y3>=c.y1 && c.y3<=c.y2){
            printf("\no ponto esta dentro do retangulo");
          }else{
            printf("\n o ponto esta fora do retangulo");
          }
          
        }
    }
  }
  if(c.x1<=c.x2){
      if(c.y1>=c.y2){
        if(c.x3>=c.x1 && c.x3<=c.x2 && c.y3<=c.y1 && c.y3>=c.y2){
          printf("\no ponto esta dentro do retangulo");
        }else{
          printf("\n o ponto esta fora do retangulo");
        }

      }
  }else{
    if(c.x1>=c.x2){
        if(c.y1<=c.y2){
          if(c.x3<=c.x1 && c.x3>=c.x2 && c.y3>=c.y1 && c.y3<=c.y2){
            printf("\no ponto esta dentro do retangulo");
          }else{
            printf("\n o ponto esta fora do retangulo");
          }

        }
    }
  }
  
  
  //continuar 
  return 0;
}
