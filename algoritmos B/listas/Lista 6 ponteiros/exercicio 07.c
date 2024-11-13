#include<stdio.h>

int contador(int x[],int n){
    int *p,c=0;
    p=x;
    for(;*p<5;p++){
        if(*p==n){
            c++;
        }
    }
    return c;
}

int main(){
    int x[5],i,n,con;
    printf("digite os elementos do vetor:\n");
    for(i=0;i<5;i++){
        printf("elemento %i :",i+1);
        scanf("%i",&x[i]);
    }
    printf("digite um numero:");
    scanf("%i",&n);

    con=contador(x,n);
    printf("o numero %i aparece %i veze(s) no vetor",n,con);


return 0;
}
