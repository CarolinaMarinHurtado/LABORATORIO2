#include "electronicos.h"

Electronico::Electronico(std::string nombre, std::string marca, int precio, int descuento, int cantidad, int garantia) {
    this->nombre = nombre;
    this->marca = marca;
    this->precio = precio;
    this->descuento = descuento;
    this->cantidad = cantidad;
    this->garantia = garantia;
}



void Electronico::imprimirInformacion() {

}
