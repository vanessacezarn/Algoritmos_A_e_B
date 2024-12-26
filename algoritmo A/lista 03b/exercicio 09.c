//Faça um algoritmo para calcular o resultado de um valor A elevado a um expoente B. Os valores A e B devem ser lidos.
//Não utilize a função  pow .

#include<stdio.h>
int main(){
  int a,b,r=1,i;
  printf("digite a base:");
  scanf("%d",&a);
  printf("digite o expoente:");
  scanf("%d",&b);
  if(b<0){
    printf("digite um expente positivo");
  }
  for(i=0;i<b;i++){
    r=r*a;
  }
    printf("%d elevado a %d é %d",a,b,r);
  return 0;
}
