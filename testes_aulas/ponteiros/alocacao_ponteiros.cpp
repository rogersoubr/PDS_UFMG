int main(){
    int *p = new int[10];//10 posicoes de memoria de inteiro
    p[0] = 99;
    delete[] p;//eh feio assim mesmo

    return 0;
}