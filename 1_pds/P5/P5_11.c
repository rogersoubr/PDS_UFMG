float raiz(float x){
    float y = 1.0;

    while ((y * y - x > 0.01) || (x - y * y > 0.01)) {
        if (y * y < x) {
            y *= 1.01;  // aumenta um pouco se estiver baixo
        } else {
            y *= 0.99;  // diminui um pouco se estiver alto
        }
    }

    return y;
}