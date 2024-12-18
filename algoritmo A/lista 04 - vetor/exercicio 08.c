//8. Faça um algoritmo que leia um vetor V de 10 posições e, após, verifica se um número N,
//fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão
// escrever a mensagem "O número fornecido não existe no vetor!".

#include<stdio.h>
int main(){
  int v[10],i,N,existe=0;
  //existe=0 flag=bandeira//
  printf("Digite os 10 elementos:\n");
  for(i=0;i<10;i++){
    scanf("%d",&v[i]);
  }
  printf("digite um numero:");
  scanf("%d",&N);
  for(i=0;i<10;i++){
    if(N==v[i]){
      printf("o %d existe na posição %d\n",N,i);
      existe=1;
    }
  }
  if(existe==0){
    printf("o valor %d não existe no vetor\n",N);
  }


  return 0;
}
