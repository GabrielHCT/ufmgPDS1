#include <stdio.h>

int soma_digitos_pares(unsigned int n) {
    int soma = 0;

    while(1) {
        if(n < 10) {
            if(!(n & 1))
                return soma += n;
            else
                return soma;
        }
        if(!((n % 10) & 1))
            soma += n % 10;
        n /= 10;
    }
} 