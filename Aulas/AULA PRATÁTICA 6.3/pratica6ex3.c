#include <stdio.h>
#include <string.h>

int main() {
    char linha[50];
    int qtd_palavras = 0;

    fgets(linha, 50, stdin);

    for(int i = 0; i < 50; i++)
        if(linha[i] == ' ')
            qtd_palavras++;

    printf("%d", qtd_palavras);

    return 0;
}