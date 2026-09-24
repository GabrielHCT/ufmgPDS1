#include <stdio.h>

int main() {
    double valor;
    char identificador;

    scanf("%lf %c", &valor, &identificador);

    switch(identificador) {
        case 'G': 
            valor *= 1.07;
            printf("O valor em MG seria de R$ %.2lf\n", valor);
            break;
        case 'P': 
            valor *= 1.12;
            printf("O valor em SP seria de R$ %.2lf\n", valor);
            break;
        case 'J':
            valor *= 1.15;
            printf("O valor em RJ seria de R$ %.2lf\n", valor);
            break;
        case 'S': 
            valor *= 1.08;
            printf("O valor em MS seria de R$ %.2lf\n", valor);
            break;
        default:
            printf("Estado invalido\n");
    }

    return 0;
}
 