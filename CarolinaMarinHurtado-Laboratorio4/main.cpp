#include <iostream>
using namespace std;

class CuentaCorriente {
private:
    string numeroIdentificacion;
    string clave;
    double saldo;

public:
    CuentaCorriente(string numeroIdentificacion, string clave, double saldo = 0.0)
        : numeroIdentificacion(numeroIdentificacion), clave(clave), saldo(saldo) {
        if (clave.empty()) {
            this->clave = "12345";
        }
    }

    bool validarCuenta(string numeroIdentificacion, string clave) {

    }

    void modificarClave(string numeroIdentificacion, string claveAnterior, string nuevaClave) {

    }


};

class Tienda {
public:
    void realizarCompra(CuentaCorriente& cuenta) {

    }

    void agregarProducto(Producto* producto) {

    }

    void modificarProducto(/* tengo que hacer los parámetros */) {

    }
};

int main() {

    CuentaCorriente cuenta(/* parámetros del constructor */);




    // Menú principal
    int opcion;
    do {
        cout << "Menú principal:" <<endl;
        cout << "1. Agregar productos" <<endl;
        cout << "2. Modificar nombres, precios o % descuento" <<endl;
        cout << "3. Realizar compra" << std::endl;
        cout << "4. Modificar clave de cuenta" << std::endl;
        cout << "5. Salir" << std::endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar productos
                // Solicitar datos del producto y crear una instancia de la clase correspondiente
                // Agregar el producto a la tienda
                break;
            }
            case 2: {
                // Modificar nombres, precios o % descuento
                // Solicitar el índice del producto a modificar
                // Solicitar los nuevos datos del producto y actualizarlos
                break;
            }
            case 3: {
                // Realizar compra
                tienda.realizarCompra(cuenta);
                break;
            }
            case 4: {
                // Modificar clave de cuenta
                // Solicitar el número de identificación y la clave anterior
                // Solicitar la nueva clave y modificarla
                break;
            }
            case 5:
                cout << "Saliendo del programa..." endl;
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

