#include <stdio.h>
#include <stdlib.h>

int main()
{



int L = 0;
int C=0;
int i,j;
int n=0;
float cont = 1;
float soma=0;
scanf("%d",&n);
L=n;
C=n;
float M[L][C];
for(i=0;i<L;i++){
    for(j=0;j<C;j++){
    M[i][j]=cont;
    cont=cont+1;
    }
}
printf("tr(A) = ");
for(i=0;i<L;i++){
    for(j=0;j<C;j++){
    if(i==j){
        soma=soma+M[i][j];
    }
    if(i==j && j!=C-1){
    printf("(%0.2f) + ",M[i][j]);}
    if(i==j && j==C-1){
        printf("(%0.2f) = %0.2f",M[i][j],soma);
    }
    }
}


    return 0;
}
