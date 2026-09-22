#include <stdio.h>
#include "minhas_funcoes.h"

void soma1 (int *ptr) {
    *ptr+=1;
}

void troca(float *end_valor1, float *end_valor2) {
    float valor = *end_valor1;

    *end_valor1 = *end_valor2;
    *end_valor2 = valor;
}

int ddd(long long num) {
    return num / 1000000000;
}