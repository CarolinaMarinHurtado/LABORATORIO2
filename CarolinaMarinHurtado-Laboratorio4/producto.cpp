#include "producto.h"

Producto::Producto(std::string nombre, std::string marca, int precio, int cantidad) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidad = cantidad;
}

void Producto::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Producto::getNombre() {
    return nombre;
}

void Producto::setMarca(std::string marca) {
    this->marca = marca;
}

std::string Producto::getMarca() {
    return marca;
}

void Producto::setPrecio(int precio) {
    this->precio = precio;
}

int Producto::getPrecio() {
    return precio;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Producto::getCantidad() {
    return cantidad;
}
