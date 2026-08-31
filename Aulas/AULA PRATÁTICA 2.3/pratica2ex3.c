#include <stdio.h>
#include <stats.h>

float laplace(float x, float m, float b) {
    return exp(-1 * fabs(x-m) / b) / (2 * b);
}