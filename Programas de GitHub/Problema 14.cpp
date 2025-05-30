#include <stdio.h>
#include <math.h>

int main() {
    double depositoUnico = 15000.0;           // Inversi�n inicial
    double tasaInteresMensual = 0.037;        // Tasa mensual del 3.7%
    int totalMeses = 180;                     // 15 a�os * 12 meses
    double montoFinal;                        // Resultado final

    // F�rmula del valor futuro con inter�s compuesto de una inversi�n �nica
    montoFinal = depositoUnico * pow(1 + tasaInteresMensual, totalMeses);

    // pow(base, exponente) calcula base^exponente
    // Aqu� (1 + tasa)^meses representa el crecimiento compuesto mensual de la inversi�n.

    printf("Cantidad ahorrada despu�s de 15 a�os: $%.2f\n", montoFinal);

    return 0;
}
//Problema 14
