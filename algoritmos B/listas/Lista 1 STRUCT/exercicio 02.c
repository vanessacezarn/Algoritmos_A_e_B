//A loja VendeTudo possui 50 clientes. O gerente, para cada cliente, necessita armazenar o nome, cidade onde mora, o total da compra 
//e o mês que o cliente comprou. Desenvolva o programa para ler e mostrar os dados.

#include<stdio.h>
#include<string.h>

struct tipoLoja{
  char nome[30];
  char cidade[30];
  float totalCompra;
  char mes[30];
};
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}
int main(){
  int i;
  struct tipoLoja c[5];
  
  for(i=0;i<5;i++){
    printf("\nCLIENTE %i\n",i+1);
    printf("nome: ");
    flush_in();
    gets(c[i].nome);
    flush_in();
    printf("cidade onde mora: ");
    gets(c[i].cidade);
    printf("mês da compra: ");
    gets(c[i].mes);
    printf("total da compra: ");
    scanf("%f",&c[i].totalCompra);
       
  }
  printf("\n***DADOS DOS CLIENTES***\n");
  for(i=0;i<5;i++){
    printf("\nCLIENTE %i",i+1);
    printf("\nnome:");
    puts(c[i].nome);
    printf("cidade onde mora:");
    puts(c[i].cidade);
    printf("mes da compra: ");
    puts(c[i].mes);
    printf(" da compra: %.2f",c[i].totalCompra);
    
  }


  
}
