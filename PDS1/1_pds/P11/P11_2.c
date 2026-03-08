#include <stdio.h>
#include <math.h>

int somaCubos(int n){
    if(n ==0) return 0;
    return n*n*n+somaCubos(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int r = somaCubos(n);
    printf("%d",r);
    return 0;
}