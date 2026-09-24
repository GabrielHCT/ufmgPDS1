#include <stdio.h>

int main() {
    int idade, contr_tempo;
    char genero;

    scanf("%d %d %c", &idade, &contr_tempo, &genero);

    if(genero == 'M')
        if(idade > 65 || idade == 65)
            printf("Pode aposentar\n");
        else if(idade > 60 || idade == 60 && contr_tempo > 35 || contr_tempo == 35)
            printf("Pode aposentar\n");
        else
            printf("Nao pode aposentar\n");
    else
        if(idade > 60 || idade == 60)
            printf("Pode aposentar\n");
        else if(idade > 55 || idade == 55 && contr_tempo > 30 || contr_tempo == 30)
            printf("Pode aposentar\n");
        else
            printf("Nao pode aposentar\n");

    return 0;
}

