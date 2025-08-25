#include <stdio.h> 

int main() {
    
    int *i;
    int vec[] = {10, 20, 30, 40};
    i = &vec[4];

    printf("*i = %p\nVEC: %p %p %p %p\n", i, &vec[0], &vec[1], &vec[2], &vec[3]);
    printf("Posicao 4: %p\n", &vec[4]);
    
    for (*i = 0; *i < 10; *i = *i + 1) {
        vec[*i] = 1;
        printf("Vec[%d] = %d\n", *i, vec[*i]);
        //getchar();
    }
    

    
    return 0;
}