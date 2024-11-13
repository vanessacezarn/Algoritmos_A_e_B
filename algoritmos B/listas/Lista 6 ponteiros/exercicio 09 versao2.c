#include<stdio.h>
void soma(int a[],int b[]){
    int c[5],*pa,*pb,i;
    pa=a;
    pb=b;
     printf("vetor soma de a + b\n");
    for(i=0;i<5;i++){
        c[i]=*(pa+i)+*(pb+i);
        printf(" elemento %i = %i\n",i+1,c[i]);
    }


return;
}

void subtracao(int a[],int b[]){
    int c[5],*pa,*pb,i;
    pa=a;
    pb=b;
     printf("vetor subtracao de a - b\n");
    for(i=0;i<5;i++){
        c[i]=*(pa+i)-*(pb+i);
        printf(" elemento %i = %i\n",i+1,c[i]);
    }


return;
}

void produtoescalar(int a[],int b[]){
    int *pa,*pb,i,somatorio=0;
    pa=a;
    pb=b;
     printf("vetor produto escalar de a e b\n");
    for(i=0;i<5;i++){
        somatorio=somatorio + (*(pa+i) * *(pb+i));
    }
 printf(" o produto escalar eh %i",somatorio);

return;
}

int main(){
int a[5],b[5],i;
printf("digite os elementos do vetor \n");
for(i=0;i<5;i++){
    printf("elemento %i: ",i+1);
    scanf("%d",&a[i]);
}
printf("digite os elementos do vetor 2\n");
for(i=0;i<5;i++){
    printf("elemento %i: ",i+1);
    scanf("%d",&b[i]);
}
soma(a,b);
subtracao(a,b);
produtoescalar(a,b);
return 0;
}
