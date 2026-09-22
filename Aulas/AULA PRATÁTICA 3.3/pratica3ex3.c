#include <stdio.h>

void troca(float *end_valor1, float *end_valor2) {
    float valor = *end_valor1;

    *end_valor1 = *end_valor2;
    *end_valor2 = valor;
}