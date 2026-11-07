#include <iostream>
#include <string>
using namespace std;
int main(){
    int* p = nullptr;//iniciando ponterio nulo 
    int v[] = {0} ;//iniciando vetor nulo
    int* p_maloc = new int;//criando ponteiro para int alocado
    int* v_maloc = new int[0];//colocando vetor alocado
    int a = 7;
    int b = 14;

    cout<<"\n \033[1mLOCAIS\033[0m\n"<<"Local de p ... "<<&p<<"\nLocal de v ... "<<&v<<"\nLocal de p_maloc ... "<<&p_maloc<<"\nLocal de v_maloc ... "<<&v_maloc<<"\nLocal de a ... "<<&a<<"\nLocal de b ... "<<&b<<endl;

    cout<<"\n \033[1mVALORES\033[0m\n"<<"valor de p ... "<<p<<"\nvalor de v ... "<<v[0]<<"\nvalor de p_maloc ... "<<p_maloc<<"\nvalor de v_maloc ... "<<v_maloc[0]<<"\nvalor de a ... "<<a<<"\nvalor de b ... "<<b<<endl;

    p_maloc = &a; //VAZAMENTO SE NÃO DESALOCAR p_maloc. p_maloc DEIXA O HEAP E APONTA PARA STACK 
    p = &a;

    v[0] = b;
    v_maloc[0] = b;

    cout<<"\n \033[1mLOCAIS\033[0m\n"<<"Local de p ... "<<&p<<"\nLocal de v ... "<<&v<<"\nLocal de p_maloc ... "<<&p_maloc<<"\nLocal de v_maloc ... "<<&v_maloc<<"\nLocal de a ... "<<&a<<"\nLocal de b ... "<<&b<<endl;

    cout<<"\n \033[1mVALORES\033[0m\n"<<"valor de p ... "<<p<<"\nvalor de v ... "<<v[0]<<"\nvalor de p_maloc ... "<<p_maloc<<"\nvalor de v_maloc ... "<<v_maloc[0]<<"\nvalor de a ... "<<a<<"\nvalor de b ... "<<b<<endl;

    return 0;

    delete p_maloc;
    delete[] v_maloc;//coloco o delete no ponteiro
}