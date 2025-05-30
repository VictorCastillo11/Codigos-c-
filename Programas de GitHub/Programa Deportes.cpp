#include <stdio.h>
#include <string.h>

// Clase base: Deporte
class Deporte {
public:
    char nombre[30];       // Nombre del deporte
    int numJugadores;      // Número de jugadores
    char terreno[30];      // Tipo de terreno
    char contacto[15];     // Tipo de contacto (manos, pies, cuerpo)

    // Método 1: Asigna valores a los atributos
    void asignarDatos(const char* nom, int jugadores, const char* tipoTerreno, const char* tipoContacto) {
        strcpy(nombre, nom);
        numJugadores = jugadores;
        strcpy(terreno, tipoTerreno);
        strcpy(contacto, tipoContacto);
    }

    // Método 2: Muestra toda la información del deporte
    void mostrarInfo() {
        printf("\n--- Información del deporte ---\n");
        printf("Nombre: %s\n", nombre);
        printf("Jugadores: %d\n", numJugadores);
        printf("Terreno: %s\n", terreno);
        printf("Se juega con: %s\n", contacto);
    }

    // Método 3: Muestra solo el nombre del deporte
    void mostrarNombre() {
        printf("Deporte: %s\n", nombre);
    }
};

int main() {
    Deporte balonmano, futbolAmericano, futbolSala;

    balonmano.asignarDatos("Balonmano", 7, "Piso de madera", "manos");
    futbolAmericano.asignarDatos("Futbol Americano", 11, "Césped artificial", "cuerpo");
    futbolSala.asignarDatos("Futbol Sala", 5, "Cancha de cemento", "pies");

    // Mostrar toda la información de cada deporte
    balonmano.mostrarInfo();
    futbolAmericano.mostrarInfo();
    futbolSala.mostrarInfo();

    // Mostrar solo el nombre
    printf("\nSolo nombres de los deportes:\n");
    balonmano.mostrarNombre();
    futbolAmericano.mostrarNombre();
    futbolSala.mostrarNombre();

    return 0;
}

