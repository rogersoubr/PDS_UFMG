int soma_digitos_pares(unsigned int n){
    unsigned int soma = 0;
    for(int i=1; i<=0;i++){
        if(i%2 == 0){
            soma +=i;
        }else{
            return 0;
        }
    }
    return soma;
}