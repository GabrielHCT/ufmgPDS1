#include <stdio.h>

void par_ou_impar(int valor) {
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    
    if(!(valor > 0))
        printf("\nERRO: numero invalido.\n");
    else if(valor & 1)
        printf("\n%d e impar.\n", valor);
    else
        printf("\n%d e par.\n", valor);
}