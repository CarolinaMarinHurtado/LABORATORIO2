#ifndef ELECTRONICO_H
#define ELECTRONICO_H

#include <string>
#include <iostream>

class Electronico {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int descuento;
    int cantidad;
    int garantia;

public:
    Electronico(std::string nombre, std::string marca, int precio, int descuento, int cantidad, int garantia);

    // Métodos getter y setter para los atributos

    void imprimirInformacion();
};

#endif
