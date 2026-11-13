#include <stdio.h>

int populacao(unsigned long num_hab_A, double taxa_anual_A, unsigned long num_hab_B, double taxa_anual_B) {
    int anos = 0;
    taxa_anual_A /= 100;
    taxa_anual_B /= 100;

    while(1) {
        num_hab_A += num_hab_A * taxa_anual_A;
        num_hab_B += num_hab_B * taxa_anual_B;
        anos++;

        if(num_hab_A >= num_hab_B)
            return anos;
    }
}