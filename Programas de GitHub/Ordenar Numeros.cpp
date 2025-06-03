#include <stdio.h>

int main() {
    const int N = 10;
    int numeros[N];

    FILE *archivo = fopen("numeros.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo 'numeros.txt'\n");
        return 1;
    }

    // Leer 10 números del archivo
    for (int i = 0; i < N; i++) {
        fscanf(archivo, "%d", &numeros[i]);
    }

    fclose(archivo);

    // Ordenamiento burbuja
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Mostrar los números ordenados
    printf("Numeros ordenados: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

