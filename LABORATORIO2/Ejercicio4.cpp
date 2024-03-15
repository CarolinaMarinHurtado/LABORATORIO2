#include<iostream>
#include<cstdlib> //atoi devuelve un valor int que se genera interpretando los caracteres como un número

using namespace std;

int cadenadeEntero(char cadena[]) { //funcion que toma cada valor y lo mutiplica por 10
    int i = 0, n = 0;
    while (cadena[i] != '\0') {
        n = 10 * n + (cadena[i] - '0');
        i++;
    }
    return n;
}

int Ejercicio4() {
    char cadena1[50]; // Define la cadena
    cout << "Ingrese la cadena de caracteres: "<<endl;
    cin.getline(cadena1, 50); // Leer la cadena de caracteres ingresada

    int a = cadenadeEntero(cadena1); // Llamar a la función para convertir la cadena en un número entero
    cout << "El numero representado por la cadena es: " << a << endl;

    return 0;
}
