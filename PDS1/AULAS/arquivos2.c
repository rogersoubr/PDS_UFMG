#include <stdio.h>

int main(){

    FILE* f_naturais = fopen("naturais.txt","r+t");
    if(f_naturais==NULL){
        printf("Não consegui abrir o arquivo");
        return 1;
    }
    int x;
    fscanf(f_naturais, "%d", &x);
    while (!feof(f_naturais)){
        fscanf()
    }
    

    return 0;
}