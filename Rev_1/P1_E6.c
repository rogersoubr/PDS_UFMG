 float arredonda(float n){
    int parte_inteira = (int)n;
    float fracao = n - parte_inteira;

    if (fracao < 0.25) {
        return (float)parte_inteira;
    } else if (fracao < 0.75) {
        return parte_inteira + 0.5;
    } else {
        return (float)(parte_inteira + 1);
    }
 }

 void arredondaNotas(float *endNota1, float *endNota2, float *endNota3) {
    *endNota1 = arredonda(*endNota1);
    *endNota2 = arredonda(*endNota2);
    *endNota3 = arredonda(*endNota3);
}