#include <stdio.h>
#include "minhas_funcoes.h"

int testeSoma1(int x) {
    int *ptr = &x;
    soma1(ptr);
    return x;
}

int main() {
    int x;
    testeSoma1(x);
    return 0;
}