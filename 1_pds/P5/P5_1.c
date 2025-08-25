#include <stdio.h>

int soma(int n){
    //int n = 10;
    int aux= 0;
    for (int i = 1; i <= n; i++){
        aux += i;
        //printf("%d\n",aux);
    }
    //printf("%d\n",aux);
    return aux;
 
}


// int main(){
//     soma(10);
//     return 0;
// }