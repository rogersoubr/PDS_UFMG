int populacao(unsigned long habA, double txA,unsigned long habB, double txB){
    int anos = 0;
    
    //Habitantes de A esta maior que B
    if(habA>habB){
        return anos;
    //Taxa de A esta menor que B
    }else if(txA<txB){
        return anos;
    //Taxa B nao cresce
    }else if(txB<1){
        return anos;
    }else{
        //enquandto em c
        while(habA<habB){
            habA = habA*txA;
            habB = habB*txB;
            anos++;
        }
    }

    return anos;

}