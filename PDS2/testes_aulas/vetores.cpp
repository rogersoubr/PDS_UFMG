#include <iostream>
using namespace std;
int main() {
    int vetorA[5];
    vetorA[3] = 99;

    for(int i=0; i<5; i++) cout << vetorA[i] << "\t";
    cout << endl;//imprime somente o espaço

    int vetorB[5] = {};//todos recebem vetor nulo

    for(int i=0; i<5; i++)cout << vetorB[i] << "\t";
    cout << endl;

    double vetorC[] = {1.1, 2.2, 3.3};
    cout << vetorC[1] << endl;
 return 0;
}
