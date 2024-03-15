#include <iostream>
#include <string>

using namespace std;

// Función para sumar los números de n cifras
int sumaNumeros(const string& cadena, int n) {
    int total = 0;
    int longitud = cadena.length();
    int cantidadNumeros = longitud / n;

    // Rellenamos con ceros a la izquierda si es necesario
    string cadenaCompleta = cadena;
    while (cadenaCompleta.length() % n != 0) {
        cadenaCompleta = "0" + cadenaCompleta;
    }


    for (int i = 0; i < longitud; i += n) {//sumar numeros
        total += stoi(cadenaCompleta.substr(i, n));
    }

    return total;
}

int main() {
    int n;
    string cadenaNumerica;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Ingrese la cadena de caracteres numericos: ";
    cin >> cadenaNumerica;


    cout << "La suma de los numeros de " << n << " cifras es: " << sumaNumeros(cadenaNumerica, n) << endl;

    return 0;
}
