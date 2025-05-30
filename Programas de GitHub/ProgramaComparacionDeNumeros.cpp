#include <stdio.h>

int main() {
    int n[10], i, j, temp;

    // Pedimos 10 n�meros al usuario
    for (i = 0; i < 10; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    // Ordenamos los n�meros usando el m�todo burbuja
    // Repetimos esto varias veces para ordenar todos los n�meros
    for (i = 0; i < 9; i++)
        // Comparamos los n�meros de uno en uno (el actual con el siguiente)
        for (j = 0; j < 9 - i; j++)
            // Si el n�mero de la izquierda es mayor que el de la derecha, los cambiamos
            if (n[j] > n[j + 1]) {
                temp = n[j];           // Guardamos el n�mero actual en una variable temporal
                n[j] = n[j + 1];       // Ponemos el n�mero siguiente en el lugar del actual
                n[j + 1] = temp;       // Ponemos el n�mero guardado en el lugar del siguiente
            }

    // Mostramos los n�meros ya ordenados
    printf("\nNumeros ordenados de menor a mayor:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", n[i]);

    printf("\n");
    return 0;
}

