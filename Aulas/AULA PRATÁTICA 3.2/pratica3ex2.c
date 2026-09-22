#include <stdio.h>
#include "minhas_funcoes.h"

int testaSoma1(int x) {
    int *ptr = &x;
    soma1(ptr);
    return x;
}