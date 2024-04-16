#ifndef ASEO_H
#define ASEO_H

#include "producto.h"

class aseo : public producto {
private:
    string material;

public:
    aseo(string nombre, string marca, int precio, int cantidadInventario, int descuento, string material);
    string getMaterial();
};


#endif // ASEO_H
