//4. Escreva um programa que pede para o usuário digitar um número que corresponda a um
//dia da semana. O programa deve apresentar na tela o nome do dia. Utilize o comando
//switch.
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int dia_da_semana;

    printf("digite um numero de 1 a 7:");
    scanf("%d",&dia_da_semana);

    if(dia_da_semana>=8 || dia_da_semana<=0){
        printf("OPÇÃO INVALIDA");
    }else{
        if(dia_da_semana==1){
            printf("O NUMERO 1 CORRESPONDE A DOMIGO");
        }else{
            if(dia_da_semana==2){
                printf("O NUMERO 2 CORRESPONDE A SEGUNDA");
            }else{
                if(dia_da_semana==3){
                    printf("O NUMERO 3 CORRESPONDE A TERÇA");
                }else{
                    if(dia_da_semana==4){
                        printf("O NUMERO 4 CORRESPONDE A QUARTA");
                    }else{
                        if(dia_da_semana==5){
                            printf("O NUMERO 5 CORRESPONDE A QUINTA");
                        }else{
                            if(dia_da_semana==6){
                                printf("O NUMERO 6 CORRESPONDE A SEXTA");
                            }else{
                                printf("O NUMERO 7 CORRESPONDE A SABADO");
                        }
                    }
                }
            }
        }

    }

    }
return 0;
}
