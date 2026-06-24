//Roger Souza Brandao - 2024108154
//printf("DEBUG: cheguei\n");
#include <stdio.h>
#include <stdlib.h>

//fazer as funcoes matematicas usando repeticao 

int fat(int n){
    int result =1;
    for(int i = 1;i<=n; i++){
        result = i*result;
    }
    return result;
}

int mdc(int a, int b){
    int temp;
    if (a<b){
        temp = a;
        a = b;
        b = temp;
    }
    int r;
    while(b!=0){
        r = a%b;//tenho que ter um lugar para guardar o resto da divisao passada
        a = b;
        b = r;
    };
    return a;
}

int mdc3(int a, int b, int c){
    /*int temp = mdc(a,b);
    return mdc(temp,c);*/
    int temp = mdc(a,b);
    int aux;
    if(c<temp){
        aux = temp;
        temp = c;
        c = aux;
    }    
    int r;
    while(temp!=0){
        r = c%temp;
        c = temp;
        temp = r;
    }
    return c;
}


int fib(int n){
    //nao estou contando o 0
    if(n == 0) return 0;//vai q a pessoa escreve 0. 
    if(n == 1) return 1;
    int a = 0, b = 1, temp;
    for(int i = 2; i <= n; i++){
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

//primo
int primo(int x){
    if(x <= 1) return 0;//o 1 nao eh primo
    for(int i = 2; i <= x/2; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}


void decrescente(int x){
    for(int i = x-1; i > 0; i--){
        printf("%d ", i);
    }
    printf("\n");
}


int res(int a, int b){
    return a % b;
}

//somatório i*i
int form(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i*i;
    }
    return soma;
}


int mmc(int a, int b){
    return (a * b) / mdc(a,b);
}

//divisão inteira
int divisor(int a, int b){
    return a / b;
}

//tem q ter precisão 0.001
double raiz(int n){
    double x = n;
    double y = 1;
    while(x - y > 0.001){
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

//sominha
int dig(int n){
    int soma = 0;
    while(n > 0){
        soma += n % 10;
        n /= 10;
    }
    return soma;
}


int expn(int k, int n){
    int result = 1;
    for(int i = 0; i < n; i++){
        result *= k;
    }
    return result;
}


void crescente(int x){
    for(int i = 1; i <= x; i++){
        printf("%d ", i);
    }
    printf("\n");
}

int main(){
    int a,b,c,x,n,k;

    printf("\nQuando for mais de 1 num, colocar 'x,x2,x3,...'\n");

    printf("Digite um numero para fatorar: ");
    scanf("%d",&a);

    printf("Resultado: %d\n",fat(a));

    printf("Digite dois numero para mdc: ");
    scanf("%d,%d",&a,&b);
    printf("Resultado: %d\n",mdc(a,b));

    printf("Digite tres numero para mdc3: ");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("Resultado: %d\n",mdc3(a,b,c));

    printf("Digite um n para Fibonacci: ");
    scanf("%d",&n);
    printf("fib(%d) = %d\n",n,fib(n));

    printf("Digite um numero para testar se e primo: ");
    scanf("%d",&x);
    printf("primo(%d) = %s\n",x,primo(x)?"Sim":"Nao");//TERNARIO EM C

    printf("Digite um numero para imprimir decrescente: ");
    scanf("%d",&x);
    decrescente(x);

    printf("Digite dois numeros para resto: ");
    scanf("%d,%d",&a,&b);
    printf("res(%d,%d) = %d\n",a,b,res(a,b));

    printf("Digite um numero para somatorio i*i: ");
    scanf("%d",&n);
    printf("form(%d) = %d\n",n,form(n));

    printf("Digite dois numeros para mmc: ");
    scanf("%d,%d",&a,&b);
    printf("mmc(%d,%d) = %d\n",a,b,mmc(a,b));

    printf("Digite dois numeros para divisao inteira: ");
    scanf("%d,%d",&a,&b);
    printf("div(%d,%d) = %d\n",a,b,divisor(a,b));

    printf("Digite um numero para raiz quadrada: ");
    scanf("%d",&n);
    printf("sqrt(%d) ≈ %.3f\n",n,raiz(n));

    printf("Digite um numero para soma dos digitos: ");
    scanf("%d",&n);
    printf("dig(%d) = %d\n",n,dig(n));

    printf("Digite base e expoente: ");
    scanf("%d,%d",&k,&n);
    printf("exp(%d,%d) = %d\n",k,n,expn(k,n));

    printf("Digite um numero para crescente: ");
    scanf("%d",&x);
    crescente(x);


    return 0;
}