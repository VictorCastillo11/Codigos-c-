#include <stdio.h>

int main() {
    FILE *archivo = fopen("texto.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo 'texto.txt'\n");
        return 1;
    }

    char caracter;

    printf("Contenido del archivo:\n");

    while ((caracter = fgetc(archivo)) != EOF) {
        printf("%c", caracter);
    }

    fclose(archivo);
    return 0;
}

