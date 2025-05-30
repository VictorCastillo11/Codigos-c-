#include <stdio.h>
#include <string.h>

// Definicion de la clase Animal
class Animal {
public:
    char nombre[30];      
    int tieneConcha;       // 1 si tiene, 0 si nop
    int poneHuevos;        
    int tienePelo;         
    int produceLeche;      
    int acuatico;          

    // Metodo para pedir los datos al usuario
    void pedirDatos() {
        printf(" Como se llama el animal? ");
        scanf("%s", nombre);

        // Preguntas con respuestas de 1 (si) o 0 (no)
        printf("\nEl animal tiene concha?\n");
        printf("Si = 1 / No = 0: ");
        scanf("%d", &tieneConcha);

        printf("\nEl animal pone huevos?\n");
        printf("Si = 1 / No = 0: ");
        scanf("%d", &poneHuevos);

        printf("\nTiene pelo?\n");
        printf("Si = 1 / No = 0: ");
        scanf("%d", &tienePelo);

        printf("\nProduce leche?\n");
        printf("Si = 1 / No = 0: ");
        scanf("%d", &produceLeche);

        printf("\nEs acuatico?\n");
        printf("Si = 1 / No = 0: ");
        scanf("%d", &acuatico);
    }

    
    void mostrarTipo() {
        printf("\nAnalizando al animal: %s\n", nombre);

        int esAlgunTipo = 0;  // si identifica al coso pasa a ser un 1 si no pus asi se queda xdd

        // Si tiene concha y no tiene pelo, es molusco
        if (tieneConcha == 1 && tienePelo == 0) {
            printf("- Parece ser un molusco.\n");
            esAlgunTipo = 1;
        }

        // Si pone huevos y no produce leche, es oviparo
        if (poneHuevos == 1 && produceLeche == 0) {
            printf("- Es un animal oviparo.\n");
            esAlgunTipo = 1;
        }

        // Si tiene pelo y produce leche, es mamifero
        if (tienePelo == 1 && produceLeche == 1) {
            printf("- Es un mamifero.\n");
            esAlgunTipo = 1;
        }

        // Si no se cumple ningun caso
        if (esAlgunTipo == 0) {
            printf("- No se.\n");
        }
    }
};

// Funcion principal del programa
int main() {
    Animal a;           // Crear un objeto de la clase Animal

    a.pedirDatos();     // Pedir datos al usuario
    a.mostrarTipo();    // Mostrar el resultado del analisis

    return 0;
}

