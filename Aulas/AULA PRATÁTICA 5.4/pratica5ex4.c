#include <stdio.h>

int main() {
    int altura, maior, menor;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &altura);
        if(i == 0) {
            maior = altura;
            menor = maior;
        }

        if(!(altura < maior))
            maior = altura;
        else if(!(altura > menor))
            menor = altura;
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
}