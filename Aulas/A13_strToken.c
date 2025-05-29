#include <stdio.h>
#include <string.h>

//char* strtok(char *str, const char *delim );

int main(){

    char str[] = "Roger Souza Brandao";
    printf("String: '%s'\n",str);

    char* token = strtok(str," ");//fala o delimitador que é espaço; funcao invasiva 

    printf("token: '%s'\n",token);//string com o primeiro delimitador

    // printf("String: '%s'\n",str);

    // token = strtok(NULL," ");//quando não passa nada, vai continuar até a segundo
    // printf("Token: '%s'\n",token);

    while(token != NULL){
    token = strtok(NULL," ");//quando não passa nada, vai continuar até a segundo
    printf("Token: '%s'\n",token);
    }


    return 0;
}