#include <stdio.h>
#include <string.h>

typedef struct {
    int idade;
    float altura;
    char nome[16], esporte[16];
} Atleta;

int main() {
    char mais_alto[16], mais_velho[16];
    Atleta atletas[5];
 
    for(int i = 0; i < 5; i++) {
        scanf("%s %s %d %f", &atletas[i].nome, &atletas[i].esporte, &atletas[i].idade, &atletas[i].altura);
        if(i == 0)
            continue;
        if(atletas[i].altura > atletas[i-1].altura)
            strcpy(mais_alto, atletas[i].nome);
        if(atletas[i].idade > atletas[i-1].idade)
            strcpy(mais_velo, atletas[i].nome);
    }

    printf("Mais alto: %s\nMais velho: %s", mais_alto[16], mais_velho[16]);
    return 0;
}