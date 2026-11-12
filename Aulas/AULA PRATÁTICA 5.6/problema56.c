#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fatorial = 1;

    for(int i = 1; i <= n; i++)
        fatorial *= i;

    return fatorial;
}