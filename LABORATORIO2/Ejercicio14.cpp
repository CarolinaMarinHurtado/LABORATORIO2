#include <iostream>
#include <vector>


using namespace std;

void rotarlamatriz(vector<vector<int>>& matrix) {
    int n = matrix.size();

    vector<vector<int>> rotated(n, vector<int>(n));


    for (int i = 0; i < n; ++i) { //roto la matriz
        for (int j = 0; j < n; ++j) {
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }

    matrix = rotated;
}

int Ejercicio14() {
    vector<vector<int>> numeros(5, vector<int>(5));
    int numero = 1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            numeros[i][j] = numero;
            numero++;
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << numeros[i][j] << "\t";
        }
        cout << endl;
    }


    rotarlamatriz(numeros);


    cout << "\n\nMatriz rotada rotada 90 grados:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << numeros[i][j] << "\t";
        }
        cout << endl;
    }


    rotarlamatriz(numeros);


    cout << "\n\nMatriz rotada 180 grados:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << numeros[i][j] << "\t";
        }
        cout << endl;
    }
    rotarlamatriz(numeros);

    cout << "\n\nMatriz rotada 270 grados:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << numeros[i][j] << "\t";
        }
        cout << endl;
}
    return 0;
}
