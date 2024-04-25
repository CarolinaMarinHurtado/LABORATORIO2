#include "producto.h"

Producto::Producto(std::string nombre, std::string marca, int precio, int descuento, int cantidad) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidad = cantidad;
}

std::string Producto::getNombre() {
    return nombre;
}

std::string Producto::getMarca() {
    return marca;
}

int Producto::getPrecio() {
    return precio;
}

int Producto::getDescuento() {
    return descuento;
}

int Producto::getCantidad() {
    return cantidad;
}

void Producto::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Producto::setMarca(std::string marca) {
    this->marca = marca;
}

void Producto::setPrecio(int precio) {
    this->precio = precio;
}

void Producto::setDescuento(int descuento) {
    this->descuento = descuento;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}
