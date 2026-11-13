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
    Ponto p_retangulo;
    int continua = 1;

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

    scanf("%f %f", &p_retangulo.X, &p_retangulo.Y);

    if(p_retangulo.X >= r.p[0].X && p_retangulo.X <= r.p[1].X && p_retangulo.Y <= r.p[0].Y && p_retangulo.X >= r.p[1].Y)
        printf("O ponto pertence ao retangulo");
    else
        printf("O ponto nao pertence ao retangulo");
}