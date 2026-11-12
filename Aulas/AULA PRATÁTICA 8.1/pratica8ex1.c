#include <stdio.h>
#include <math.h>

typedef struct {
    double X, Y;
} Ponto;

double distanciaEntrePontos(Ponto p[]) {
    return sqrt(pow(p[1].X - p[0].X, 2) + pow(p[1].Y - p[0].Y, 2));
}

int main() {
    Ponto p[2];
    scanf("%lf %lf %lf %lf", &p[0].X, &p[0].Y, &p[1].X, &p[1].Y);
    
    printf("%.2lf\n", distanciaEntrePontos(p));
    return 0;
}