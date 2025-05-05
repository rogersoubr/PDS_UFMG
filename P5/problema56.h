#include <stdio.h>

int fatorial(int n){
    //int n = 10;
    unsigned long long aux= 1;
    for (int i = 1; i <= n; i++){
        aux *= i;
        //printf("%d\n",aux);
    }
    //printf("%d\n",aux);
    return aux;
 
}


// int main(){
//     fatorial(6);
//     return 0;
// }