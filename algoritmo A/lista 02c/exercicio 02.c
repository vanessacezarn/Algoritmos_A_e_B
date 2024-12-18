//2. Desenvolva um programa para ler um número inteiro de 1 a 12, que corresponde a um dos
// meses do ano, e outro número inteiro que corresponde ao ano. Encontre e mostre o número de dias
// referente ao mês informado.

#include<stdio.h>
int main(){
  int mes,ano,x,y;
  printf("Digite um numero entre 1 e 12 que indique um mes: ");
  scanf("%d",&mes);
  printf("Digite um ano: ");
  scanf("%d",&ano);

  if(mes>=13){
    printf("OPÇAO INVALIDA");
  }else{
    if(mes==1){
      printf("Janeiro\n");
    }else{
      if(mes==2){
        printf("Fevereiro\n");
      }else{
        if(mes==3){
          printf("Março\n");
          
        }else{
          if(mes==4){
            printf("Abril\n");
          }else{
            if(mes==5){
              printf("Maio\n");
            }else{
              if(mes==6){
                printf("Junho\n");
              }else
                if(mes==7){
                  printf("Julho\n");
                }else{
                  if(mes==8){
                    printf("Agosto\n");
                  }else{
                    if(mes==9){
                      printf("Setembro\n");
                    }else{
                      if(mes==10){
                        printf("Outubro\n");
                      } else{
                        if(mes==11){
                          printf("Novembro\n");
                        }else{
                          if(mes==12){
                            printf("Dezembro\n");
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
              
          }
        }
      }
        
    }
    
  
  //calculo ano 
  x = ano % 100;
  y=x%4;
  if(mes==2){
      if(x==00 || y==00){
    printf("o ano eh bissexto\n");
    printf("29 dias");
      }else{
        printf("28 dias");
      }
  }else{
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
      printf("31 dias");
    }else{
      if(mes==4 || mes==6 || mes==9 || mes==11){
        printf("30 dias");
      }
    }
  }

  
  return 0;
}
