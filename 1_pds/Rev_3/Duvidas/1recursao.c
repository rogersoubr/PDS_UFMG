//criar fatorial
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fatorial(int num){
    if (num <= 1){
        return 1;
    }
    return num*fatorial(num-1);
    

}
int main(){

    int n = 5;
    printf("%lu",fatorial(n));
    
    return 0;
}