#include <stdio.h>

int soma(int n) {
    int soma = n, i = n;

    if(i == 1)
        return 1;
    else
        do {
            if(n < 0)
                i++;
            else
                i--;
            soma += i;
        } while(i != 1);

    return soma;
}