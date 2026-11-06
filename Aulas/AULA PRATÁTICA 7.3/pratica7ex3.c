#include <stdio.h>

void lerMatriculas(int qtd, int *ptr) {
    scanf("%d", ptr);
    for(int i = 1; i <= qtd; i++)
        scanf("%d", ptr + i);
}

void imprimirMatriculasIguais(int qtd_aeds, int qtd_calc, int aeds[], int calc[]) {
    for(int i = 0; i < qtd_aeds; i++)
        for(int j = 0; j < qtd_calc; j++)
            if(aeds[i] == calc[j])
                printf("%d ", aeds[i]);
}

int main() {
    int qtd_aeds, qtd_calc;

    scanf("%d", &qtd_aeds);
    int aeds[qtd_aeds];
    
    lerMatriculas(qtd_aeds, aeds);

    scanf("%d", &qtd_calc);
    int calc[qtd_calc];

    lerMatriculas(qtd_calc, calc);

    imprimirMatriculasIguais(qtd_aeds, qtd_calc, aeds, calc);
}