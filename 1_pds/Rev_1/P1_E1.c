#include <stdio.h>
#include <math.h>

float loglcdf(float x,float a, float b){
    if(x>=0){
        float aux = x/a;
        float f = 1/(1/+pow(aux,b));
    }

}