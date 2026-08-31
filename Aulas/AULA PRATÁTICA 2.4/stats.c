#include <stdio.h>
#include <math.h>
#include "stats.h"

float laplace(float x, float m, float b) {
    return exp(-1 * fabs(x-m) / b) / (2 * b);
}

float gumbel(float x, float m, float b) {
    float z = (x - m) / b;
    
    return exp(-(z + exp(-z))) / b;
}

float cauchy(float x) {
    return 1 / (3.141592 * (1 + pow(x, 2)));
}