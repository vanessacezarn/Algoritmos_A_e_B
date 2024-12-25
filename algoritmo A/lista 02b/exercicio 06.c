//Escreva um algoritmo que leia duas datas, na forma dia, mês e ano e informe qual é a mais recente. 

#include<stdio.h>
int main(){
float ano_A,mes_A,dia_A,ano_B,mes_B,dia_B;
  printf("digite a primeira data em dia,mes(em numero) e ano:");
  scanf("%f%f%f",&ano_A,&mes_A,&dia_A);
  printf("digite a segunda data em dia,mes(em numero) e ano:");
  scanf("%f%f%f",&ano_B,&mes_B,&dia_B);

  if(ano_A>ano_B){
    printf("primeira data eh a mais recente");
  }else{
    if(ano_A<ano_B){
      printf("a sengunda data eh a mais recente");
    }else{
      if(mes_A>mes_B){
        printf("a primeira data eh a mais recente");
      }else{
        if(mes_A<mes_B){
          printf("a segunda data eh a mais recente");
        }else{
          if(dia_A>dia_B){
            printf("a primeira data eh a mais recente");
          }else{
            if(dia_A<dia_B)
              printf("a segunda data eh a mais recente");
          }
        }
      }
    }
    
  }



  
  return 0;
}
