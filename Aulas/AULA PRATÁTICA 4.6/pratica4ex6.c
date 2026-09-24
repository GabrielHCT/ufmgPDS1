#include <stdio.h>

int main() {
    float A, B, C;
    int negativo = 0, valido = 1;

    scanf("%f %f %f", &A, &B, &C);

    if(!(A < (B + C))) 
        valido = 0;
    else if(!(B < (A + C)))
        valido = 0;
    else if(!(C < (B + A)))
        valido = 0;

    negativo = A < 0 || B < 0 || C < 0 ? 1 : 0;

    if(negativo || A == 0 || B == 0 || C == 0)
        printf("Valores invalidos");
    else if(valido) {
        if(A == B && B == C)
            printf("Triangulo equilatero");
        else if(A == B || A == C || B == C)
            printf("Triangulo isosceles");
        else
            printf("Triangulo escaleno");
    } else
        printf("Triangulo invalido");

    return 0;
}