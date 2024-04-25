#ifndef ASEO_H
#define ASEO_H


#include <string>
#include <iostream>

class Aseo {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int descuento;
    int cantidad;
    std::string material;

public:
    Aseo(std::string nombre, std::string marca, int precio, int descuento, int cantidad, std::string material);

    // Métodos getter y setter para los atributos

    void imprimirInformacion();
};

#endif
