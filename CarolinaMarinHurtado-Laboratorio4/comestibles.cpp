#include "comestibles.h"

Comestibles::Comestibles(std::string nombre, std::string marca, int precio, int cantidadInventario, int descuento, std::string fechaVencimiento)
    : nombre(nombre), marca(marca), precio(precio), cantidadInventario(cantidadInventario), descuento(descuento), fechaVencimiento(fechaVencimiento) {}

void Comestibles::mostrarInformacion() {
    // Implementación para mostrar información de comestibles
}

void Comestibles::disminuirInventario(int cantidad) {
    // Implementación para disminuir inventario de comestibles
}
