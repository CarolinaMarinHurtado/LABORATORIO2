#include<iostream>
#include<cstdlib>
#include<cctype> // Necesario para isdigit

using namespace std;

void separarLetrasNumeros(const char alfanumerico[], string& numeros, string& texto) {
    int i = 0;
    while (alfanumerico[i] != '\0') {
        if (isdigit(alfanumerico[i])) {
            numeros += alfanumerico[i];
        } else {
            texto += alfanumerico[i];
        }
        i++;
    }
}

int Ejercicio8() {
    char alfanumerico[100];
    string numeros;
    string texto;

    cout << "Ingrese una cadena mixta: ";
    cin >> alfanumerico;

    separarLetrasNumeros(alfanumerico, numeros, texto);

    cout << "la cadena original es: " << alfanumerico << endl;
    cout << "El texto es: " << texto << " el numero o numeros son: " << numeros << endl;

    system("pause");
    return 0;
}
