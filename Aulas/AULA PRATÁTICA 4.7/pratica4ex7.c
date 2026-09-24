#include <stdio.h>

float arredonda(float num) {
    int inteiro = (int) num;
    float decimal;

    decimal = num - inteiro;

    if(!(decimal < 0.5))
        inteiro++;
    else if (!(decimal > -0.5) && num < 0)
        inteiro--;

    return inteiro;
}