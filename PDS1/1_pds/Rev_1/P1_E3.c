void aumentaOsDiferentes(int* end_var1, int* end_var2){
    if(*end_var1 == *end_var2){
        *end_var1 = 0;
        *end_var2 = 0;
    }else{
        int soma = *end_var1 + *end_var2;
        *end_var1 = soma;
        *end_var2 = soma;
    }
    //rintf("%d , %d",*end_var1, end_var2);
}