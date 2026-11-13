#include <stdio.h>
#include <math.h>

typedef struct {
    Ponto p[2];
} Retangulo;

typedef struct {
    float X, Y;
} Ponto;

int main() {
    Retangulo r;
    int continua = 1;
    double area, perimetro, diagonal;


    for(int i = 0; i < 2; i++)
        scanf("%f %f", &r.p[i].X, &r.p[i].Y);

    do {
        if(r.p[1].X > r.p[0].X && r.p[1].Y < r.p[0].Y)
            continua = 0;
        else {
            scanf("%f %f", &r.p[1].X, &r.p[1].Y);
            printf("Coordenada Invalida ");
        }
    } while(continua);

    area = r.p[1].X * r.p[0].Y;
    perimetro = 2 * (r.p[1].X - r.p[0].X) + 2 * (r.p[0].Y - r.p[1].Y);
    diagonal = sqrt(pow(r.p[1].X - r.p[0].X, 2) + pow(r.p[1].Y - r.p[0].Y, 2));

    printf("Area = %.2lf Perimetro = %.2lf Diagonal = %.2lf", area, perimetro, diagonal);
}