//Roger Souza Brandao - 20250108154
/* RODAR O ARQUIVO:
1) Vai para o caminho do arquivo
2) Rode o GCC: gcc NOME_ARQUIVO.c
3) Rode o executável gerado: ./a.exe
*/
#include <stdio.h>

int primo(int x){
    if(x<=1) return 0;
    for (int i = 2; i <= x/2; i++){//
        if(x%i == 0 ) return 0; //consigo saber se eh divisivel por alguem
    }
    return 1;//acabando nao tem jeito

    // for (int i=x-1; i>1; i--){
    //     if(x%i == 0) return 0;
    // }
    // return 1;
    
}

int main(){
    int n, x =2;//tenho q comoçar com 2
    printf("Digite um numero: ");
    scanf("%d",&n);
    FILE* arq = fopen("teste.txt","w+t");
    for (int i = 1; i <=n; ){
        if(primo(x)){
            i++;
            fprintf(arq,"%d\n", x);
        };
        x++;
    }
    //também funciona:
    // while (i<n)
    // {
    //     if(primo(x)){
    //         fprintf(arq,"%d\n", x);
    //         i++;
    //     };
    // x++;
    // }
    

    fclose(arq);
    printf("\nresultado em 'teste.txt'\n");

    return 0;
}