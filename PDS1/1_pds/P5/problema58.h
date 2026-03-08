int mdc(int a, int b) {
    int aux;
    //tem q ser por 0
    while (b != 0) {
        aux = b;
        b = a % b;
        a = aux;
    }
    return a;
}