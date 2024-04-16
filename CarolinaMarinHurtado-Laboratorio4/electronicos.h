#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H

#include "producto.h"
#include <string>
#include<iostream>

class Electronicos : public producto {
private:
    int garantia;

public:
    Electronicos(string nombre, string marca, int precio, int cantidadInventario, int descuento, int garantia);
        int getGarantia();
};

#endif // ELECTRONICOS_H
