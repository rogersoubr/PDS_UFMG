//rogersoubr - 2025108154
//gambiarra
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
    int incdc_pp[100];//incidencia de palavras proibidas

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
    int cmt_num =0;//numero de comentarios
    while(getline(comentarios_completos, auxcmt, ' ')) {
        if(auxcmt != ""){
            cmt[cmt_num] = auxcmt;
            cmt_num++;
        }
    }
    for (int j= 0; j < cmt_num; j++){
        for (int k =0; k <= pp_num; k++){
            if(cmt[j] == pp[k]){
                incdc_pp[k] =+1;
                for (int l = 0; l <= cmt[j].length(); l++){
                    cmt[j][l] = 42;
                }
            }
        }
        //tem que tirar esse ultimo espaco
        cout<<cmt[j]<<" ";
    }
    for (int j = 0; j < pp_num; j++){
        cout <<"\nPalavra "<< pp[j]<< " substituida "<< incdc_pp[j] <<" vez(es).";
    }
    
    
    
    return 0;
}