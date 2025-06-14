#include <stdio.h>

void imprimeNaturais(int N){
    if(N <0) return;

    printf("%d\n",N);

    imprimeNaturais(N-1);

}

int main(){
    int n;
    scanf("%d",&n);
    imprimeNaturais(n);
    return 0;
}