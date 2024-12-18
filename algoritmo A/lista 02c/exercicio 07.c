//7. Escreva um algoritmo para ler a idade de uma pessoa e mostrar qual sua situação de eleitor,
// conforme as seguintes condições: se a idade for menor que 16 anos, informar que a pessoa não está
// apta a votar. Se a idade for maior ou igual a 16 anos e menor que 18 anos ou superior a 70 anos,
// informar que o voto é facultativo. Caso contrário, informar que o voto é obrigatório

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
 int idade;
 printf("digite a idade:");
 scanf("%i",&idade);
    if(idade<16){
       printf("NÃO ESTÁ APTO PARA VOTAR");
    }else{
        if(idade>=16 && idade <18 || idade>70){
            printf("VOTO É FACULTATICO");
        }else{
            if(idade>=18 && idade<=70){
                printf("VOTO É OBRIGATORIO");
            }
        }
    }




return 0;
}
