#include <stdio.h>
#include <string.h>

typedef struct {
    int idade;
    float altura;
    char nome[16], esporte[16];
} Atleta;

void bubbleSort(Atleta *atletas, int tamanho) {
    int i, j;
    Atleta aux;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (atletas[j].idade > atletas[j + 1].idade) {
                aux = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = aux;
            }
        }
    }
}

int main() {
    Atleta atletas[5];
 
    for(int i = 0; i < 5; i++)
        scanf("%s %s %d %f", atletas[i].nome, atletas[i].esporte, &atletas[i].idade, &atletas[i].altura);

    bubbleSort(atletas, 5);

    for(int i = 0; i < 5; i++)
        printf("%d- %s\n", i+1, atletas[i].nome);
    
    return 0;
}

/*Dados Teste
Gabriel Futebol 20 1.92
Pedro Basquete 21 2    
Junior Volei 23 2.67   
Julia Hand 17 1.67
Lari Peteca 15 1.75
*/