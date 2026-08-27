#include <stdio.h>

double calcularJuros(double saldo, double percentual) {
    return saldo + saldo * percentual;
}

int main() {
    double saldo = 0, percentual = 0.0056;
    
    //primeiro mês

    saldo += 789.54;
    saldo = calcularJuros(saldo, percentual);

    //segundo mês
    
    saldo += 303.20;
    saldo = calcularJuros(saldo, percentual);

    //terceiro mês
    saldo -= 58.25;
    calcularJuros(saldo, percentual);

    //quarto mês
    calcularJuros(saldo, percentual);

    return 0;
}