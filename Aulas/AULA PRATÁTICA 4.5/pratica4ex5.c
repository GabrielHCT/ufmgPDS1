#include <stdio.h>

int main() {
    int dia, mes, ano, status = 0, bissesto = 0;

    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano % 400 == 0)
        bissesto = 1;
    if(mes > 1 || ano < 1 && mes < 12 || ano == mes) {
        if(mes == 2 && bissesto)
            if(dia > 1 || dia == 1 && dia < 28 || dia == 28)
                status = 1;
        else if (mes == 2)
            if(dia > 1 || dia == 1 && dia < 28 || dia == 28)
                status = 1;

    }
}