#include <stdio.h>
#include <math.h>

int main() {
    double depositoMensual = 1000.0;      // Cantidad que se deposita cada mes
    double tasaInteresMensual = 0.03;     // Tasa de inter�s mensual (3%)
    int totalMeses = 120;                 // 10 a�os * 12 meses
    double ahorroFinal;                   // Resultado final: cantidad ahorrada

    // Calcula el valor futuro con inter�s compuesto de pagos mensuales
    ahorroFinal = depositoMensual * (pow(1 + tasaInteresMensual, totalMeses) - 1) / tasaInteresMensual;

    // Nota: pow(base, exponente) calcula base^exponente, es decir, una potencia.
    // En este caso, (1 + tasa)^meses simula el crecimiento compuesto mes a mes.

    printf("Cantidad ahorrada despu�s de 10 anos: $%.2f\n", ahorroFinal);

    return 0;
}
//problema 13
