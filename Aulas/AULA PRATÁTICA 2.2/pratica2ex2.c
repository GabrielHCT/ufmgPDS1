#include <stdio.h>
#include <math.h>

float gumbel(float x, float m, float b) {
    float z = (x - m) / b;
    
    return exp(-(z + exp(-z))) / b;
}