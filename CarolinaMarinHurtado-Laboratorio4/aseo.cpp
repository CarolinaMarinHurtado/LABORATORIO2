#include "aseo.h"



Aseo::Aseo(std::string nombre, std::string marca, int precio, int cantidad, int descuento, std::string material) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidad = cantidad;
    this->descuento = descuento;
    this->material = material;
}

// Resto de los métodos de la clase


void Aseo::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Aseo::getNombre() {
    return nombre;
}

void Aseo::setMarca(std::string marca) {
    this->marca = marca;
}

std::string Aseo::getMarca() {
    return marca;
}

void Aseo::setPrecio(int precio) {
    this->precio = precio;
}

int Aseo::getPrecio() {
    return precio;
}

void Aseo::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Aseo::getCantidad() {
    return cantidad;
}

void Aseo::setDescuento(int descuento) {
    this->descuento = descuento;
}

int Aseo::getDescuento() {
    return descuento;
}

void Aseo::setMaterial(std::string material) {
    this->material = material;
}

std::string Aseo::getMaterial() {
    return material;
}
