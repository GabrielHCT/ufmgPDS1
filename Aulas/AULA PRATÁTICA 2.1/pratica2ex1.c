#include <stdio.h>
#include <math.h>

float cauchy(float x) {
    return 1 / (3.141592 * (1 + pow(x, 2)));
}