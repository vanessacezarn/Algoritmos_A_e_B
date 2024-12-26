// Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: sexo (0-feminino, 1-masculino), 
//idade e altura. Faça um algoritmo para ler as informações coletadas e mostre as seguintes informações:  
//a) Média de idade dos habitantes. b) Média de altura das mulheres. c) Média de altura dos homens.
//d) Maior idade dos habitantes. e) Maior altura dos habitantes. f) Percentual de pessoas com idade entre 18 e 35 anos (inclusive).

#include<stdio.h>
int main(){
  int sexo;
  float idade,i,maiorIdade=0,mediaIdade,m=0,h=0,a=0,percentual;
  float altura,alturaM=0,alturaH=0,mediaAlturaMulheres,mediaAlturaHomens,maiorAltura=0,Idade=0;
printf("***PESQUISA ENTRE OS HABITANTES***");
    for(i=0;i<5;i++){
      printf("\ndigite o sexo - 0 para feminino e 1 para masculino:");
      scanf("%i",&sexo);
    printf("digite a idade:");
    scanf("%i",&idade);
    printf("digite a altura:");
    scanf("%f",&altura);
      Idade+=idade;
      printf("\t%d",Idade);
      if(sexo==0){
        alturaM=alturaM+altura;
        m++;
      }
      if(sexo==1){
        alturaH=alturaH+altura;
        h++;
      }
      
      if(idade>maiorIdade){
        maiorIdade=idade;
      }
      if(altura>maiorAltura){
        maiorAltura=altura;
      }
      
      if(idade>=18 && idade<=35){
        a=a+1;
      }
    }
    mediaIdade=Idade/5;
    mediaAlturaMulheres=alturaM/m;
    mediaAlturaHomens=alturaH/h;
    percentual=(a/5)*100;
  printf("\t%f",a);
  printf("\t%f",Idade);
  
  printf("\na) a media de idade dos habitantes é:%f",mediaIdade);
  printf("\nb) a media de altura das mulheres é:%.2f",mediaAlturaMulheres);
  printf("\nc) a media de altura dos homens é:%.2f",mediaAlturaHomens);
  printf("\nd) a maior idade entre os habitantes é %f",maiorIdade);
  printf("\ne) a maior altura entre os habitantes é %.2f",maiorAltura);
  printf("\nf) o percentual de pessoas entre 18 e 35 anos é %.2f",percentual);
  return 0;
}
