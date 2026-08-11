//rogersoubr - 2025108154

//1. vou receber "num lista das palavras probidas"
//2. vou receber "comentário"
//3. tenho que remover essas proibidas do comentário. Imprimir censurado
// imprimir "palavra que foi removida e quantidade"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
    int pp_num;
    string pp_full;
    string pp;
    string coment;

    cout<<"digite as palavra proibida (quantidade palavra1 palavra2...): ";
    cin >> pp_full;


    for(int i=0; pp_full[i] != '\0'; i++){
        cout<<"DEPURACAO"<<endl;
        if(isspace(pp_full[i])){
            cout<<"achei um espaco";
        };
    }
    

    cout<<"digite o comentario: ";
    cin >> coment;

    return 0;
}