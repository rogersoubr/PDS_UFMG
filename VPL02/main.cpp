//rogersoubr - 2025108154

//1. vou receber "num lista das palavras probidas"
//2. vou receber "comentário"
//3. tenho que remover essas proibidas do comentário. Imprimir censurado
// imprimir "palavra que foi removida e quantidade"

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
    int pp_num;//numero de palavras proibidas
    string pp_full;//palavras proibidas totais
    string pp[100];//palavras proibidas
    string cmt_full;//comentario completos
    string cmt[100];//comentarios

    cout<<"digite as palavra proibida (quantidade palavra1 palavra2...): ";
    cin >> pp_num;
    getline(cin, pp_full);
    stringstream palavras_proibidas(pp_full);
    string auxpp;//nao posso colocar uma matriz de char no getline ):
        int i =0;
        while(getline(palavras_proibidas, auxpp, ' ')) {
            if(auxpp != ""){
                pp[i] = auxpp;
                i++;
            }
        }
    if (pp_num != i){
        cout<<"\nerro, quantidade de palavras proibidas incoerentes"<<endl;
        return 1;
    }
    
    cout<<"digite o comentario: ";
    getline(cin, cmt_full);
    stringstream comentarios_completos(cmt_full);
    string auxcmt;
    int cmt_num =0;
    while(getline(comentarios_completos, auxcmt, ' ')) {
        if(auxcmt != ""){
            cmt[cmt_num] = auxcmt;
            cmt_num++;
        }
    }
    
    // for (int i = 0; i < count; i++){
    //     /* code */
    //     for (int k = 0; k <= j; k++){
    //         if(cmt[k])
    //     }
    // }
    

    

    return 0;
}