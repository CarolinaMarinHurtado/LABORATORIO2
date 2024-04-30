#include "comestibles.h"

Comestibles::Comestibles(std::string nombre, std::string marca, int precio, int descuento, int cantidad, std::string fechaVencimiento) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidadInventario = cantidad;
    this->fechaVencimiento = fechaVencimiento;
}

void Comestibles::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Comestibles::getNombre() {
    return nombre;
}

void Comestibles::setMarca(std::string marca) {
    this->marca = marca;
}

std::string Comestibles::getMarca() {
    return marca;
}

void Comestibles::setPrecio(int precio) {
    this->precio = precio;
}

int Comestibles::getPrecio() {
    return precio;
}

void Comestibles::setDescuento(int descuento) {
    this->descuento = descuento;
}

int Comestibles::getDescuento() {
    return descuento;
}

void Comestibles::setCantidad(int cantidad) {
    this->cantidadInventario = cantidad;
}

int Comestibles::getCantidad() {
    return cantidadInventario;
}

void Comestibles::setFechaVencimiento(std::string fechaVencimiento) {
    this->fechaVencimiento = fechaVencimiento;
}

std::string Comestibles::getFechaVencimiento() {
    return fechaVencimiento;
}
