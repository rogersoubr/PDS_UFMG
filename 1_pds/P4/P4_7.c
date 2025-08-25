float arredonda(float num) {
    int inteiro = (int)num; // parte inteira 
    float fracao = num - inteiro;

    if (num >= 0) {
        if (fracao >= 0.5){
            return (float)(inteiro + 1);//arredonda
        }
        else{
            return (float)inteiro; //mostra sua parte
        }

    }
}