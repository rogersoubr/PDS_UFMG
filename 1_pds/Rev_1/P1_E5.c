void divisao(int* end_var1, int*end_var2){
    float div = *end_var1 / *end_var2;
    *end_var1 = div;
    *end_var2 = *end_var1 % *end_var2;
    
}