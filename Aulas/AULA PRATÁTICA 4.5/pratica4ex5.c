#include <stdio.h>

int main() {
    int dia, mes, ano, status = 0, bissesto = 0;

    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
        bissesto = 1;

    if(!(mes < 1) && !(mes > 12) && !(dia < 0) && !(mes < 0) && !(ano < 0)) {
        if(mes == 2 && bissesto) {
            if(!(dia < 1) && !(dia > 29))
                status = 1;
        }
        else if (mes == 2) {
            if(!(dia < 1) && !(dia > 28))
                status = 1;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if(!(dia < 1) && !(dia > 30))
                status = 1;
        }
        else
            if(!(dia < 1) && !(dia > 31))
                status = 1;
    }

    if(status)
        printf("Data Valida");
    else
        printf("Data Invalida");
}