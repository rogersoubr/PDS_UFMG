#include <stdio.h>

int divisivel(int x, int y){
    return (x%y==0);
}
//nivel baixo de recursividade, usa outra funcao, não é ele propria
int bissexto(int ano){
    return (divisivel(ano,400) || (divisivel(ano,4) && !divisivel(ano,100)) );
}

int main(){
    int ano, result;
    printf("Digite um ano: ");
    scanf("%d",&ano);
    result = bissexto(ano);
    
    if(result == 1){
        printf("O ano %d e bissexto",ano);
    }else{
        printf("O ano %d nao e bissexto",ano);
    }

    return 0;
}