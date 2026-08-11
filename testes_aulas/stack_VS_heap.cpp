#include <iostream>
using namespace std;

int main() {
    /* STACK ===================================*/
    int stackMatrixB[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };
    for (int i=0; i < 3; i++){
        for (int j=0; j < 4; j++) cout << stackMatrixB[i][j] << "\t";
        cout << endl;
    }
    cout << endl;


    /* HEAP ===================================*/
    int rows = 3;
    int cols = 4;
    int** heapMatrix = new int*[rows];

    for (int i=0; i < rows; i++) heapMatrix[i] = new int[cols];

    for (int i=0; i < rows; i++){
        for (int j=0; j < cols; j++) heapMatrix[i][j] = (rows*i + i) + j;
    }

    for (int i=0; i < rows; i++){
        for (int j=0; j < cols; j++) cout << heapMatrix[i][j] << "\t";
        cout << endl;
    }
        

    for (int i=0; i < rows; i++) delete[] heapMatrix[i];
    delete[] heapMatrix;
 return 0;
}