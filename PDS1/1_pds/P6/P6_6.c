int contaocorrencias(char *A, int tamanhoA, char c) {
    int aux = 0;
    for (int i = 0; i < tamanhoA; i++)
    {
        if(A[i] == c){
           aux++;
        }

    }
    return aux;
    
}