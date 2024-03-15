#include<iostream>

using namespace std;

int valor(char c)
{
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanosaenteros(string rom) {
    int res = 0;
    int prev = 0; // Valor del símbolo anterior

    for (int i = rom.length() - 1; i >= 0; i--) {
        int val = valor(rom[i]);
        if (val < prev) {
            res -= val;
        } else {
            res += val;
        }
        prev = val;
    }

    return res;
}

int Ejercicio10() {
    string rom;

        cout << "Ingrese un numero romano en letra mayuscula"<<endl;
        cin >> rom;

        cout << "El numero ingresado fue: " << rom << " que corresponde a: " << romanosaenteros(rom) << endl;


    return 0;
}
