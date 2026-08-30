#include <stdio.h>

double calcularJuros(double saldo, double percentual) {
    return saldo * percentual;
}

int main() {
    double saldo = 789.54, percentual = 0.0056;
    
    //primeiro mês
    saldo += calcularJuros(saldo, percentual);

    //segundo mês
    
    saldo += 303.20;
    saldo += calcularJuros(saldo, percentual);

    //terceiro mês
    saldo -= 58.25;
    saldo += calcularJuros(saldo, percentual);

    printf("%.2lf\n", saldo);

    return 0;
}