#include <stdio.h>

int main() {
    float radio, perimetro;          
    const float PI = 3.1416;      

    // Pedir el radio al usuario
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    // Calcular el perímetro
    perimetro = 2 * PI * radio;

    // Mostrar el resultado
    printf("El perimetro del circulo es: %.2f\n", perimetro);

    return 0;                        
}

