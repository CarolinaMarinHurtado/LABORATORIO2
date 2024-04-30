#include "producto.h"
using namespace std;

Producto::Producto(string nombre, string marca, int precio, int descuento, int cantidad) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidad = cantidad;
}

string Producto::getNombre() {
    return nombre;
}

string Producto::getMarca() {
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

void Producto::setNombre(string nombre) {
    this->nombre = nombre;
}

void Producto::setMarca(string marca) {
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
