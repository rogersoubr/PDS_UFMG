unsigned int inverte(unsigned int n){
    unsigned int aux =0;

    while (n>0){
        aux = aux*10 + (n%10);
        //%10 pega o ultimo e o aux*10 move para a primeira casa
        n=n/10;
        //remove o ultimo digito ate chegar a 0
    }
    return aux;
}