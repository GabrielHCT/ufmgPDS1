#include <stdio.h>

int main() {
    int atual, maior, menor, qtd_div_tres = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &atual);

        if(atual % 3 == 0) {
            qtd_div_tres++;
        }

        if(i == 0) {
            maior = atual;
            menor = atual;
        } else if(atual > maior) {
            maior = atual;
        } else if (atual < menor) {
            menor = atual;
        }
    }

    printf("Maior: %d\nMenor: %d\nQuantidade de divisiveis por 3: %d\n", maior, menor, qtd_div_tres);
}