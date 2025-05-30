#include <stdio.h>

// Definición de la clase Circulo
class Circulo {
public:
    float radio, area, perimetro;     
    const float PI = 3.1416;          

    void solicitarRadio() {           
        printf("Ingresa el radio del circulo: ");
        scanf("%f", &radio);
    }

    void calcularArea() {            
        area = PI * radio * radio;
        printf("El area del circulo es: %.2f\n", area);
    }

    void calcularPerimetro() {       
        perimetro = 2 * PI * radio;
        printf("El perimetro del circulo es: %.2f\n", perimetro);
    }
};

int main() {
    Circulo c;                          // Crear un objeto de la clase Circulo
    int opcion;                         // Variable para la opción del usuario

    c.solicitarRadio();                // Pedir radio al usuario

   
    printf("Que quieres calcular?\n");
    printf("1. El Area\n");
    printf("2. El Perimetro\n");
    printf("Ingresa una opcion: ");
    scanf("%d", &opcion);

    //opción ingresada
    if (opcion == 1) {
        c.calcularArea();             
    } else if (opcion == 2) {
        c.calcularPerimetro();         
    } else {
        printf("Opcion no valida.\n"); 
    }

    return 0;                         
}

