#include <stdio.h>

// Definición de la clase Triangulo
class Triangulo {
public:
    float base, altura, lado1, lado2, lado3, area, perimetro;  
                                                               
    void solicitarDatos() {           
        printf("Ingresa la base del triangulo: ");
        scanf("%f", &base);
        printf("Ingresa la altura del triangulo: ");
        scanf("%f", &altura);
        printf("Ingresa el lado 1 del triangulo: ");
        scanf("%f", &lado1);
        printf("Ingresa el lado 2 del triangulo: ");
        scanf("%f", &lado2);
        printf("Ingresa el lado 3 del triangulo: ");
        scanf("%f", &lado3);
    }

    void calcularArea() {             
        area = (base * altura) / 2;
        printf("El area del triangulo es: %.2f\n", area);
    }

    void calcularPerimetro() {       
        perimetro = lado1 + lado2 + lado3;
        printf("El perimetro del triangulo es: %.2f\n", perimetro);
    }
};

int main() {
    Triangulo t;                       
    int opcion;                      

    t.solicitarDatos();               

    // Mostrar opciones al usuario
    printf("Que deseas calcular?\n");
    printf("1. Area\n");
    printf("2. Perimetro\n");
    printf("Ingresa una opcion: ");
    scanf("%d", &opcion);

    // Evaluar la opción ingresada
    if (opcion == 1) {
        t.calcularArea();            
    } else if (opcion == 2) {
        t.calcularPerimetro();        
    } else {
        printf("Opcion no valida.\n");
    }

    return 0;                       
}

