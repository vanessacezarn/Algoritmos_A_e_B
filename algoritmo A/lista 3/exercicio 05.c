// 5. Faça um algoritmo para ler um valor numérico e calcular e escrever o seu fatorial.

#include<stdio.h>
int main(){
int fat=1,i,n;
printf("digite um numero para calcular seu fatorial:");
scanf("%i",&n);

    for(i=1;i<=n;i++){
        fat=fat*i;
    }
    printf("%i!=%i",n,fat);

return 0;
}
