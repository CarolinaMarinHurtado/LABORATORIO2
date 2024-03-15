#include<iostream>
#include<vector>
#include <cctype> // Para usar la función isalpha y isdigit
using namespace std;

const int filas = 15;
const int asientos = 20;
vector<vector<bool>> salaCine(filas, vector<bool>(asientos, false)); // Inicializa todos los asientos como no reservados

void mostrarSalaCine(){
    cout<<"----------Pantalla-------\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<asientos; j++){
            if(salaCine[i][j]){
                cout<<"[+]"; // Asiento reservado
            } else {
                cout<<"[-]"; // Asiento disponible
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

bool reservarAsiento(int fila, int asiento){
    if(fila < 0 || fila >= filas || asiento < 0 || asiento >= asientos){
        cout << "La fila o el asiento ingresados son invalidos." << endl;
        return false;
    }
    if(salaCine[fila][asiento]){
        cout << "Este asiento ya esta reservado." << endl;
        return false;
    }
    salaCine[fila][asiento] = true;
    cout << "Reserva exitosa." << endl;
    return true;
}

bool cancelarReserva(int fila, int asiento){
    if(fila < 0 || fila >= filas || asiento < 0 || asiento >= asientos){
        cout << "La fila o el asiento ingresados son invalidos." << endl;
        return false;
    }
    if(!salaCine[fila][asiento]){
        cout << "Este asiento no esta reservado." << endl;
        return false;
    }
    salaCine[fila][asiento] = false;
    cout << "Cancelacion exitosa." << endl;
    return true;
}

int Ejercicio11(){
    string opcion;
    string entrada;
    char filaChar;
    int fila, asiento;

    while(true){
        cout << "Seleccione una opcion:\n";
        cout << "1. Mostrar sala de cine.\n";
        cout << "2. Reservar asiento.\n";
        cout << "3. Cancelar reserva.\n";
        cout << "4. Salir.\n";
        cin >> opcion;

        switch(opcion[0]){
            case '1':
                mostrarSalaCine();
                break;
            case '2':
                cout << "Ingrese la fila y el numero del asiento que desea reservar (por ejemplo, A1): ";
                cin >> entrada;
                filaChar = entrada[0];
                asiento = stoi(entrada.substr(1)) - 1;
                fila = toupper(filaChar) - 'A';
                if (fila < 0 || fila >= filas || asiento < 0 || asiento >= asientos) {
                    cout << "Entrada invalida. Por favor ingrese una fila valida (A-O) y un numero de asiento valido (1-20)." << endl;
                    break;
                }
                reservarAsiento(fila, asiento);
                break;
            case '3':
                cout << "Ingrese la fila y el numero del asiento que desea cancelar la reserva (por ejemplo, A1): ";
                cin >> entrada;
                filaChar = entrada[0];
                asiento = stoi(entrada.substr(1)) - 1;
                fila = toupper(filaChar) - 'A';
                if (fila < 0 || fila >= filas || asiento < 0 || asiento >= asientos) {
                    cout << "Entrada invalida. Por favor ingrese una fila valida (A-O) y un numero de asiento valido (1-20)." << endl;
                    break;
                }
                cancelarReserva(fila, asiento);
                break;
            case '4':
                return 0;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                break;
        }
    }

    return 0;
}
