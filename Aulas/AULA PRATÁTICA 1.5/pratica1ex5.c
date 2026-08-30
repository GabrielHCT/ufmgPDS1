#include <stdio.h>
#include <math.h>

double calcularPesoIdeal(double peso, double altura) {
    if(peso / pow(altura, 2) > 25)
        return 25 * pow(altura, 2);
    return 18.5 * pow(altura, 2);
}

int main() {
    double pessoa[2][4];
    //Brutus
    pessoa[0][0] = 1.84; //altura
    pessoa[0][1] = 122.0; //peso
    pessoa[0][2] = calcularPesoIdeal(pessoa[0][1], pessoa[0][0]); //peso ideal 
    pessoa[0][3] = pessoa[0][1] - pessoa[0][2]; //quantidade

    //Olivia
    pessoa[1][0] = 1.76; //altura
    pessoa[1][1] = 45.0; //peso
    pessoa[1][2] = calcularPesoIdeal(pessoa[1][1], pessoa[1][0]); //peso ideal 
    pessoa[1][3] = pessoa[1][1] - pessoa[1][2]; //quantidade

    for(int i = 0; i < 2; i++) {
        if(pessoa[i][3] < 0)
            pessoa[i][3] *= -1;
    }
    

    printf("%.1lf %.1lf\n", pessoa[0][3], pessoa[1][3]);

    return 0;
}