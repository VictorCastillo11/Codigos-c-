#include <stdio.h>

int main() {
    int n[10], i, j, temp;

    // Pedimos 10 números al usuario
    for (i = 0; i < 10; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    // Ordenamos los números usando el método burbuja
    // Repetimos esto varias veces para ordenar todos los números
    for (i = 0; i < 9; i++)
        // Comparamos los números de uno en uno (el actual con el siguiente)
        for (j = 0; j < 9 - i; j++)
            // Si el número de la izquierda es mayor que el de la derecha, los cambiamos
            if (n[j] > n[j + 1]) {
                temp = n[j];           // Guardamos el número actual en una variable temporal
                n[j] = n[j + 1];       // Ponemos el número siguiente en el lugar del actual
                n[j + 1] = temp;       // Ponemos el número guardado en el lugar del siguiente
            }

    // Mostramos los números ya ordenados
    printf("\nNumeros ordenados de menor a mayor:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", n[i]);

    printf("\n");
    return 0;
}

