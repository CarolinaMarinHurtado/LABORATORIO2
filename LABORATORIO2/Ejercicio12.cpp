#include <iostream>
#include <vector>
using namespace std;

void crearmatriz(const vector<vector<int>>& matriz) { //creo la funcion matriz
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}


bool cuadromagico(const vector<vector<int>>& matriz) { //verificar si es cuadrado magico
    int n = matriz.size();
    int sumaEsperada = 0;

    for (int j = 0; j < n; ++j) { //suma de la primera fila
        sumaEsperada += matriz[0][j];
    }

    for (int i = 1; i < n; ++i) {//sumas de las filas
        int sumaActual = 0;
        for (int j = 0; j < n; ++j) {
            sumaActual += matriz[i][j];
        }
        if (sumaActual != sumaEsperada) {
            return false;
        }
    }

    for (int j = 0; j < n; ++j) { //suma de columnas
        int sumaActual = 0;
        for (int i = 0; i < n; ++i) {
            sumaActual += matriz[i][j];
        }
        if (sumaActual != sumaEsperada) {
            return false;
        }
    }

    int sumaDiagonalPrincipal = 0; //suma de primera diagonal
    for (int i = 0; i < n; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaEsperada) {
        return false;
    }


    int sumaDiagonalSecundaria = 0; //segunda diagonal
    for (int i = 0; i < n; ++i) {
        sumaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    if (sumaDiagonalSecundaria != sumaEsperada) {
        return false;
    }
    return true;
}

int Ejercicio12() {
    int n;
    cout << "Ingrese el tamano de la matriz cuadrada: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n)); //inicializo la matriz

    cout << "Ingrese los elementos de la matriz cuadrada en orden de fila:" << endl; //escribe los elementos en la matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }


    cout << "Matriz ingresada:" << endl;
    crearmatriz(matriz);

    if (cuadromagico(matriz)) {
        cout << "La matriz ingresada es un cuadrado magico." << endl;
    } else {
        cout << "La matriz ingresada no es un cuadrado magico." << endl;
    }

    return 0;
}
