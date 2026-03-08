#include <stdio.h>

//fatorial
int fat(int n){
    if(n==0) return 1;
    return n*fat(n-1);
}

//Algorítimo de euclídes:
/*
O MDC entre dois numeros, nao se altera se subtrair o maior numero pelo menor. Caso a for maior que b = (a-b , b)
*/
int mdc(int a, int b){
    if(b==0) return a;//passo basee
    
    if(a<b){
        mdc(b,a);//trocando valor
    }

    printf("\n%d|%d",a,b);
    return mdc(b,a%b);
} 

int mdc3(int a, int b, int c){
    int temp = mdc(a,b);//reutilizando o mdc de 2 variaveis
    return mdc(temp,c); 
}

//entendi que quer saber qual a posicao de tal numero na saquencia
int fib(int n){
    if(n<=1) return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);
}

int primo(int x, int y){
    if(y==1) return 1;
    if(x%y ==0) return 0;
    return primo(x,y-1);
}

//imprime inteiros menores que x e maiores que 0 em ordem decrescente
int  decrescente(int x) {
    if (x <= 1) return 0;
    printf("%d ", x - 1);
    return decrescente(x - 1);
}

/*resto da divisao por subtracoes repetidas (usa valores absolutos) */
int res(int a, int b) {
    if(a<b) return b;
    return res(a-b,b);
}

// somatorio de i*i
int form(int n) {
    if (n == 0) return 0;
    return n * n + form(n - 1);
}

// mmc usando mdc
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

// divisao inteira
int divi(int a, int b) {
    if (a < b) return 0;
    return 1 + divi(a - b, b);
}

float raiz(float n, float chute){
    if(chute*chute > n+0.001) return raiz(n,chute/2);
    if(chute*chute < n-0.001) return raiz(n,chute*1.5);
    return chute;
}

// soma dos digitos
int dig(int n) {
    if (n == 0) return 0;
    return (n % 10) + dig(n / 10);
}

// potencia k^n
int exp(int k, int n) {
    if (n == 0) return 1;
    return k * exp(k, n - 1);
}

// imprime em ordem crescente
void crescente(int x) {
    if (x <= 0) return;
    crescente(x - 1);
    printf("%d ", x);
}



int main(){
    int a, b, c, x, y, i, n, k;
    float chute, r;
    // fatorial
    printf("digite n para fatorial: ");
    scanf("%d", &n);
    printf("fat: %d\n", fat(n));

    // mdc
    printf("digite dois numeros 'a,b' para mdc: ");
    scanf("%d,%d", &a, &b);
    printf("mdc: %d\n", mdc(a, b));

    // mdc3
    printf("digite tres numeros 'a,b,c' para mdc3: ");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("mdc3: %d\n", mdc3(a, b, c));

    // fibonacci
    printf("digite n para fibonacci: ");
    scanf("%d", &n);
    printf("fib: %d\n", fib(n));

    // primo
    printf("digite 'x,y', em que y<x para testar primo: ");
    scanf("%d,%d", &x, &y);
    printf("primo: %d\n", primo(x,y));

    // decrescente
    printf("digite x para imprimir decrescente: ");
    scanf("%d", &n);
    decrescente(n);
    printf("\n");

    // resto
    printf("digite 'a,b' para resto: ");
    scanf("%d,%d", &a, &b);
    printf("resto: %d\n", res(a, b));

    // somatorio de i*i
    printf("digite n para somatorio i*i: ");
    scanf("%d", &n);
    printf("form: %d\n", form(n));

    // mmc
    printf("digite 'a,b' para mmc: ");
    scanf("%d,%d", &a, &b);
    printf("mmc: %d\n", mmc(a, b));

    // divisao inteira
    printf("digite 'a,b' para divisao inteira: ");
    scanf("%d,%d", &a, &b);
    printf("div: %d\n", divi(a, b));

    // raiz quadrada
    printf("digite n para raiz quadrada: ");
    scanf("%f", &r);
    printf("digite um chute para raiz quadrada: ");
    scanf("%f", &chute);
    printf("sqrt: %.3f\n", raiz(r, chute));

    // soma dos digitos
    printf("digite n para soma dos digitos: ");
    scanf("%d", &n);
    printf("dig: %d\n", dig(n));

    // exponenciacao
    printf("digite 'k,n' para exponenciacao: ");
    scanf("%d,%d", &k, &n);
    printf("exp: %d\n", exp(k, n));

    // crescente
    printf("digite x para imprimir crescente: ");
    scanf("%d", &n);
    crescente(n);
    printf("\n");

    //amem senhor

    return 0;
}