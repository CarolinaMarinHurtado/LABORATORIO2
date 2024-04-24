#include <iostream>
#include "Problemas.h"
#include "cuentacorriente.h"

using namespace std;

// IMPLEMENTAR LA CLASE CUENTA CORRIENTE
int main() {
    CuentaCorriente cuenta("John", "Doe", "123 Main St", "555-1234", "1234567890", "clave123", 1000.0);

    // Ejemplo de uso de los métodos getter y setter
    std::cout << "Nombre: " << cuenta.getNombre() << std::endl;
    cuenta.setNombre("Jane");
    std::cout << "Nuevo nombre: " << cuenta.getNombre() << std::endl;

    return 0;
}




