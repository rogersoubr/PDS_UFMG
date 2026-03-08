#include <stdio.h>

int main(int argc, char *argv[]) {


    // Este código roda como ./teste "5 arbex 9.4" "8 valle 10.7"
  
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    

    // Este código roda como ./teste "5 arbex 9.4" "8 valle 10.7"
    for (int i = 1; i < argc; i++) {
        int n;
        char *s;
        float f;
        sscanf(argv[i], "%d %s %f", &n, s, &f);
        printf("Tudo: %d, %s, %.1f deu certo\n", n, s, f); 
    }

    

    // Este código roda como ./teste 5 arbex 9.4
    /*
    int n;
    char * s;
    float f;
    sscanf(argv[1], "%d", &n);
    sscanf(argv[2], "%s", s);
    sscanf(argv[3], "%f", &f);

    printf("N = %d\n", n);
    printf("S = %s\n", s);
    printf("F = %f\n", f);
    */
    return 0;
}