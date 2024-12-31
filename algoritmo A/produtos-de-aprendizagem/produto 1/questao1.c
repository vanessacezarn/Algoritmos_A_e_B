//Uma loja vende seus produtos com pagamento à vista ou parcelado em uma entrada maisduas prestações. Escreva um programa que leia
//o valor total da compra e a forma de pagamento.Para cada forma de pagamento, o programa segue as respectivas regras descritas:
//• Para o pagamento parcelado, a entrada deve ser maior ou igual que o valor daprestação. As prestações devem ser iguais, inteiras
//e as maiores possíveis. Porexemplo, se o valor da compra for R$ 270,00, a entrada e as duas prestações sãoiguais a R$ 90,00. Outro 
//exemplo, se o valor da compra for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais a R$ 100,00.
//* o programa deve calcular e mostrar o o valor da entrada e das duas prestações.
//• Para o pagamento à vista, os descontos são concedidos de acordo com o valor dacompra e somente aceitam pagamentos em dinheiro vivo:
//  Valor da Compra (R$)                     Desconto %
//  Até R$ 300,00 (inclusive)                   5 %
// De R$ 300,00 a R$ 500,00 (inclusive)         7 %
//De R$ 500,00 a R$ 800,00 (inclusive)          10 %
//  De R$ 800,00 a R$ 1000,00 (inclusive)       12 %
//  Acima de R$ 1000,00                         15 %
//• O programa deve mostrar o valor do desconto em percentual e em reais.• O programa deve mostrar o valor a pagar da mercadoria.
//• Desafio de aprendizado (opcional): Como o pagamento é em dinheiro vivo, oprograma também deve calcular o troco e a quantidade 
//de notas de cada valor, quedevem ser devolvidas ao cliente, considerando que existem notas de R$ 200,00, R$100,00, R$ 50,00, 
//R$ 20,00, R$ 10,00, R$ 5,00 e R$ 2,00 e moedas de R$ 1,00, R$0,50, R$ 0,25, R$ 0,10, R$ 0,05 e R$ 0,01


//PRODUTO DE APRENDIZAGEM - VANESSA CEZAR DO NASCIMENTO//
#include<stdio.h>
int main(){
  float valor_compra,pagamento,desconto,valor_final;
  float entrada=0,aux;
  int parcela_1,parcela_2;
  float valor_recebido,troco,x;

  printf("Informe o valor total da compra:");
  scanf("%f",&valor_compra);
  printf("\nInforme a forma de pagamento - 1 para a vista e 2 para parcelado:");
  scanf("%f",&pagamento);

  if(pagamento != 1 && pagamento !=2){
    printf("\nForma de pagamento INVALIDA\n");
  }

  if(pagamento==1){
    if(valor_compra<=300){
      printf("\n PAGAMENTO DA COMPRA A VISTA\n");
      printf("\nDESCONTO DE 5%%\n");
      desconto=valor_compra*0.05;
      valor_final=valor_compra-desconto;
      printf("VALOR DO DESCONTO=%.2f\n",desconto);
      printf("O VALOR FINAL DA COMPRA = %.2f\n",valor_final);
    }else{
        if(valor_compra>300 && valor_compra<=500){
          printf("\nDESCONTO DE 7%%\n");
          desconto=valor_compra*0.07;
          valor_final=valor_compra-desconto;
          printf("VALOR DO DESCONTO=%.2f\n",desconto);
          printf(" O VALOR FINAL DA COMPRA = %.2f\n",valor_final);
        }else{
            if(valor_compra>500 && valor_compra<=800){
              printf("\nDESCONTO DE 10%%\n");
              desconto=valor_compra*0.1;
              valor_final=valor_compra-desconto;
              printf("VALOR DO DESCONTO=%.2f\n",desconto);
              printf(" O VALOR FINAL DA COMPRA = %.2f\n",valor_final);
            }else{
                if(valor_compra>800 && valor_compra<=1000){
                  printf("\nDESCONTO DE 12%%\n");
                  desconto=valor_compra*0.12;
                  valor_final=valor_compra-desconto;
                  printf("VALOR DO DESCONTO=%.2f\n",desconto);
                  printf(" O VALOR FINAL DA COMPRA = %.2f\n",valor_final);
                }else{
                    printf("\nDESCONTO DE 15%%\n");
                    desconto=valor_compra*0.15;
                    valor_final=valor_compra-desconto;
                    printf("VALOR DO DESCONTO=%.2f\n",desconto);
                    printf(" O VALOR FINAL DA COMPRA = %.2f\n",valor_final);
                }
              }
            }
        }
    }else{
    if(pagamento==2){
      parcela_1=valor_compra/3;
      aux=parcela_1;
      entrada=valor_compra-(parcela_1*2);

      printf("\n Valor da entrada = %.2f\n",entrada);
      printf("Valor da parcela 1 = %.2f\n",aux);
      printf("Valor da parcela 2 = %.2f\n",aux);
    }
  }

  if(pagamento==1){
  printf("\nInforme o valor recebido:");
  scanf("%f",&valor_recebido);
  if(valor_recebido==valor_final){
    printf("NAO HA TROCO");
  }else{
    if(valor_recebido<valor_final){
      printf("VALOR INSUFICIENTE PARA PAGAR A COMPRA");
    }else{
      troco=valor_recebido-valor_final;
      printf("\nO TROCO EH DE : %.2f\n",troco);
      printf("\n A quantidade de notas a serem devolvidas no troco eh:");
    }
  }

  float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;

  while(troco>=200){
    troco=troco-200;
    a++;
  }
      if(a>=1){
      printf("\n %.0f notas de 200",a);
      }
  while(troco>=100){
    troco=troco-100;
    b++;
  }
      if(b>=1){
        printf("\n %.0f notas de 100",b);
      }
  while(troco>=50){
    troco=troco-50;
    c++;
  }
      if(c>=1){
        printf("\n %.0f notas de 50",c);
      }
  while(troco>=20){
    troco=troco-20;
    d++;
  }
      if(d>=1){
        printf("\n %.0f notas de 20",d);
      }
  while(troco>=10){
    troco=troco-10;
    e++;
  }
      if(e>=1){
        printf("\n %.0f notas de 10",e);
      }
  while(troco>=5){
    troco=troco-5;
    f++;
  }
      if(f>=1){
        printf("\n %.0f notas de 5",f);
      }
  while(troco>=2){
    troco=troco-2;
    g++;
  }
      if(g>=1){
        printf("\n %.0f notas de 2",g);
      }
  while(troco>=1){
    troco=troco-1;
    h++;
  }
      if(h>=1){
        printf("\n %.0f moedas de 1",h);
      }
  while(troco>=0.5){
    troco=troco-0.5;
    i++;
  }
      if(i>=1){
        printf("\n %.0f moedas de 0.5",i);
      }
  while(troco>=0.25){
    troco=troco-0.25;
    j++;
  }
      if(j>=1){
        printf("\n %.0f moedas de 0.25",j);
      }
  while(troco>=0.10){
    troco=troco-0.10;
    k++;
  }
      if(k>=1){
        printf("\n %.0f moedas de 0.10",k);
      }
  while(troco>=0.05){
    troco=troco-0.05;
    l++;
  }
    if(l>=1){
        printf("\n %.0f moedas de 0.05",l);
      }
  while(troco>=0.01){
    troco=troco-0.01;
    m++;
  }
      if(m>=1){
        printf("\n %.0f moedas de 0.01",m);
      }




  }
  return 0;
}


