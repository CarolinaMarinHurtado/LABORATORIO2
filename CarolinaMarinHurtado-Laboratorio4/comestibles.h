#ifndef COMESTIBLES_H
#define COMESTIBLES_H

#include "producto.h"
#include <string>
#include <iostream>

using namespace std;

class Comestibles : public producto {
private:
    string fechaVencimiento;

public:
    Comestibles(string nombre, string marca, int precio, int cantidadInventario, int descuento, string fechaVencimiento);
    string getFechaVencimiento();
    void setFechaVencimiento(string fechaVencimiento);

};

#endif // COMESTIBLES_H
