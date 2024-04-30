#include "electronicos.h"

Electronico::Electronico(std::string nombre, std::string marca, int precio, int cantidad, std::string modelo) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->cantidad = cantidad;
    this->modelo = modelo;
}

void Electronico::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Electronico::getNombre() {
    return nombre;
}

void Electronico::setMarca(std::string marca) {
    this->marca = marca;
}

std::string Electronico::getMarca() {
    return marca;
}

void Electronico::setPrecio(int precio) {
    this->precio = precio;
}

int Electronico::getPrecio() {
    return precio;
}

void Electronico::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Electronico::getCantidad() {
    return cantidad;
}

void Electronico::setModelo(std::string modelo) {
    this->modelo = modelo;
}

std::string Electronico::getModelo() {
    return modelo;
}
