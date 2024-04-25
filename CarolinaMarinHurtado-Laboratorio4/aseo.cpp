#include "aseo.h"

Aseo::Aseo(std::string nombre, std::string marca, int precio, int descuento, int cantidad, std::string material) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidad = cantidad;
    this->material = material;
}

// Implementación de los métodos getter y setter

void Aseo::imprimirInformacion() {
    // Lógica para imprimir la información del producto en la consola
}
