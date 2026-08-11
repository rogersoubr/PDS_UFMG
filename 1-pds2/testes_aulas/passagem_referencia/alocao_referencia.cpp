#include <iostream>

using namespace std;

const int TAM = 1000;

struct Grande{int num; int dados[TAM]; };

void ImprimeDados(const Grande &x){
    cout <<x.num << endl;

    for(int i = 0; i<TAM; i++) cout << x.dados[i] << endl;
}

int main(){

    struct Grande a;
    
    a.num = 213;
    for(int i=0; 1 < TAM; i++) a.dados[i] = i;

    ImprimeDados(a);

    return 0;
}