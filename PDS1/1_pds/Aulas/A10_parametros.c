#include <stdio.h>

void errado(int x, int y){
    printf("Endereco errado : x = %p, y = %p\n",&x,&y);
    x++;
    y++;
}
void certo(int* x, int* y){
    printf("Endereco certo : x = %p, y = %p\n",&x,&y);
    (*x)++;
    (*y)++;
}

int main(){
    int x= 1, y=2;
    printf("Antes : x = %d, y = %d\n",x,y);
    errado(x,y);
    printf("Depois 1: x = %d, y = %d\n",x,y);
    certo(&x,&y);
    printf("Depois 2(certo): x = %d, y = %d\n",x,y);

}