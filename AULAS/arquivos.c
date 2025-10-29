#include <stdio.h>

int primo(int n){
    for (int i=n-1; i>1; i--){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int x = 2;//possibilidade de primos, comeca com 2 pq 2 dois eh o menor numero primo
    int contador = 0;
    FILE* f_primo = fopen("primos.txt", "w+t");//este arquivo é para as duas coisas
    if(f_primo == NULL){
        printf("Não consegui criar o arquivo");
        return 1;
    }
    while (contador<n){
        if(primo(x)){
            fprintf(f_primo, "%d\n",x);
            contador++;
        }
        x++;
    }
    
    fclose(f_primo);
    return 0;

}