#include <iostream>
using namespace std;

// 0) Função que incrementa as três variáveis
void incrementarVariaveis(int &referencia, int *ponteiro, int valor) {
    referencia++;
    (*ponteiro)++;
    valor++;
}

int main() {
    int valorEntrada;
    int *ponteiro = nullptr;
    int tamanhoVetor;
    cin >> valorEntrada;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    // Já feito acima
    
    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    cin >> tamanhoVetor;
    int vetor[tamanhoVetor];
    for(int i = 0; i < tamanhoVetor; i++) {
        cin >> vetor[i];
    }
    
    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << &valorEntrada << endl;
    
    // 5) Imprima o VALOR da variável declarada em (1)
    cout << valorEntrada << endl;
    
    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << &ponteiro << endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro << endl;
    
    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << &vetor << endl;
    
    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vetor[0] << endl;
    
    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << vetor[0] << endl;
    
    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ponteiro = &valorEntrada;
    
    cout << ponteiro << endl;
    
    cout << *ponteiro << endl;
    
    *ponteiro = 5;
    
    // 15) Imprima o VALOR da variável declarada em (1)
    cout << valorEntrada << endl;
    
    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    ponteiro = vetor;
    
    // 17) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro << endl;
    
    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro << endl;
    
    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ponteiro = &vetor[0];
    
    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if(ponteiro == vetor) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    // 21) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro << endl;
    
    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro << endl;
    
    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i = 0; i < tamanhoVetor; i++) {
        *(ponteiro + i) *= 10;
    }
    
    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i];
        if(i < tamanhoVetor - 1) cout << " ";
    }
    cout << endl;
    
    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    for(int i = 0; i < tamanhoVetor; i++) {
        cout << *(vetor + i);
        if(i < tamanhoVetor - 1) cout << " ";
    }
    cout << endl;
    
    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    for(int i = 0; i < tamanhoVetor; i++) {
        cout << *(ponteiro + i);
        if(i < tamanhoVetor - 1) cout << " ";
    }
    cout << endl;
    
    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ponteiro = &vetor[tamanhoVetor - 1];
    
    // 28) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro << endl;
    
    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro << endl;
    
    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **ptrParaPtr = &ponteiro;
    
    // 31) Imprima o VALOR da variável declarada em (30)
    cout << ptrParaPtr << endl;
    
    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout << &ptrParaPtr << endl;
    
    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout << *ptrParaPtr << endl;
    
    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout << **ptrParaPtr << endl;
    
    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int var1, var2, var3;
    cin >> var1 >> var2 >> var3;
    
    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro
    incrementarVariaveis(var1, &var2, var3);
    
    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    
    return 0;
}