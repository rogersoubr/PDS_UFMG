#include <stdio.h>
#include <stdlib.h>

int count =0;

// int b(){
//     printf("B \n");
// }

// int c(){
//     printf("C \n");
// }

// int a(){
//     printf("a \n");
//     b();
//     c();
// }  

// void teste(int n){
//     if(n<0) return;
//     printf("N = %d\n",n);
//     teste(n-1);
//     //printf("N = %d\n",n);//depois tirar esse
// }
int soma(int n){
    if(n <=0) return 0;
    return n + soma(n-1);
}

int fatorial(int n){
    if(n <= 1) return 1;
    return n * fatorial(n-1);
}

unsigned long long int fibonacci(int n){
    if(n <= 2) return 1;
    return fibonacci(n -1) + fibonacci(n -2);
}

int main(){
    //a();
    int s, f, fib;
    s = soma(10);
    printf("%d\n",s);

    f = fatorial(10);
    printf("%d\n",f);

    fib = fibonacci(10);
    printf("%llu\n",fib);



    return 0;
}