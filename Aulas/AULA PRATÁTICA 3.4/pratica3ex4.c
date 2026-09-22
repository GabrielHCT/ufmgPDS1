#include <stdio.h>
#include "minhas_funcoes.h"

void testaTroca(float x, float y) {
    float *ptr1 = &x, *ptr2 = &y;
    troca(ptr1, ptr2);
    printf("%.4f %.4f", x, y);
}
