#include <iostream>
#include <cstring>

using namespace std;

string eliminarRepetidos(const char* palabra) {
    char resultado[27] = "";
    int i = 0, j = 0;

    while (palabra[i]) {
        if (!strchr(resultado, palabra[i]))
            resultado[j++] = palabra[i];
        i++;
    }
    resultado[j] = '\0';

    return resultado;
}

int Ejercicio7() {
    char palabra[50];

    cout << "Ingresa una frase: " << endl;
    cin.getline(palabra, 50);

    string resultado = eliminarRepetidos(palabra);

    cout << "\nEl resultado sería:\n" << resultado << endl;

    return 0;
}
