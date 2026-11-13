#include <stdio.h>

unsigned int inverte(unsigned int n) {
    unsigned int num = 0;

    while(n > 0) {
        num = num * 10 + n % 10;
        n /= 10;
    }

    return num;
}