int codigoDEArea(long long unsigned int number){
   float num = number/100000000;
   return (int)num;
}

int parEmimpar(unsigned int number){
    int bit = ((~(number & 1)) & 1);
    return number + bit;
}

int par(unsigned int number){
    return ((~(number & 1)) & 1);
}