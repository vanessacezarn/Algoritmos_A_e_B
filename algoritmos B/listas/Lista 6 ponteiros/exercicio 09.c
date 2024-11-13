#include<stdio.h>
void lervetor(int *a){// ou int a[]
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]); // ou scanf("%d",a+i);
    }
    return;
}
void somarvetores(int *a, int *b, int *s){
    int i;
    for(i=0;i<10;i++){
        *(s+i)=*(a+i)+*(b+i);  // ou s[i]=a[i]+b[i]
    }
    return;
}
void mostrarvetor(int *a){
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",*(a+i));
    }
    return ;
}
void subtracaovetor(int *a, int *b, int *c){
    int i;
    for(i=0;i<10;i++){
        *(c+i)=*(a+i)-*(b+i);  // ou s[i]=a[i]-b[i]
    }
    return;
}
int calcularpe(int *a, int *b){
    int p=0,i;
    for(i=0;i<10;i++){
        p+=*(a+i)* *(b+i);
    }
    return p;
}

int main(){
    int v[10],x[10],soma[10],subtracao[10],pe;
    printf("digite os elementos do vetor:");
    lervetor(v);
    printf("digite os elementos do segundo vetor:");
    lervetor(x);
    somarvetores(v,x,soma);
    printf("vetor soma\n");
    mostrarvetor(soma);
    subtracaovetor(v,x,subtracao);
    pe=calcularpe(v,x);
    printf("produto escalar = %d",pe);
    return 0;
}
