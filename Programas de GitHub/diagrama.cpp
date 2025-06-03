#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string original = "La programacion es genial";
    string ingreso;

    cout << "Escribe exactamente la siguiente frase:\n";
    cout << original << endl << endl;

    cout << "Frase escrita: ";
    getline(cin, ingreso);

    int comparar = strcmp(original.c_str(), ingreso.c_str());

    if (comparar == 0) {
        cout << "\nLas frases son iguales.\n";
    } else {
        cout << "\nLas frases no coinciden.\n";
    }

    return 0;
}

