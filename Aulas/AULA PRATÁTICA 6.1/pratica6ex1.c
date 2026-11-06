#include <stdio.h>

int contacarateresalfa(char *a, int A) {
    int qtd = 0;

    for(int i = 0; i < A; i++) {
        if(a[i] >= '0' && a[i] <= '9')
            qtd++;
        else if(a[i] >= 'A' && a[i] <= 'Z')
            qtd++;
        else if(a[i] >= 'a' && a[i] <= 'z')
            qtd++;
    }

    return qtd;
}