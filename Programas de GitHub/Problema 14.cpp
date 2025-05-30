#include <stdio.h>
#include <math.h>

int main() {
    double depositoUnico = 15000.0;           // Inversión inicial
    double tasaInteresMensual = 0.037;        // Tasa mensual del 3.7%
    int totalMeses = 180;                     // 15 años * 12 meses
    double montoFinal;                        // Resultado final

    // Fórmula del valor futuro con interés compuesto de una inversión única
    montoFinal = depositoUnico * pow(1 + tasaInteresMensual, totalMeses);

    // pow(base, exponente) calcula base^exponente
    // Aquí (1 + tasa)^meses representa el crecimiento compuesto mensual de la inversión.

    printf("Cantidad ahorrada después de 15 años: $%.2f\n", montoFinal);

    return 0;
}
//Problema 14
