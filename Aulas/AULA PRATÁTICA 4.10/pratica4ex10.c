#include <stdio.h>

int main() {
    float x, y;
    int condicao;
    char operador;

    scanf("%f %c %f", &x,  &operador, &y);

    if(operador == '+')
        condicao = 1;
    else if (operador == '-')
        condicao = 2;
    else if (operador == '*')
        condicao = 3;
    else if (operador == '/')
        condicao = 4;
    else {
        printf("Operador inválido!");
        return 0;
    }

    if(x == 0 || y == 0 && operador == '/') {
        printf("Erro! Divisão por zero não é permitida.");
        return 0;
    }

    switch(condicao) {
        case 1: 
            printf("%.2f + %.2f = %.2f", x, y, x + y);
            break;
        case 2: 
            printf("%.2f - %.2f = %.2f", x, y, x - y);
            break;
        case 3: 
            printf("%.2f * %.2f = %.2f", x, y, x * y);
            break;
        case 4: 
            printf("%.2f / %.2f = %.2f", x, y, x / y);
            break;
    }

    return 0;
}