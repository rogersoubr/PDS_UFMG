int contacaracteresalfa(char *A, int tamanhoA){
    int aux = 0;
    for(int i= 0; i<tamanhoA; i++){
        if(
            ( A[i]>=48 && A[i]<=57 )||
            (A[i]>=65 && A[i]<=90) || 
            ( A[i]>=97 && A[i]<=120 )
        ){
            aux++;
        }
    }
    return aux;
}

