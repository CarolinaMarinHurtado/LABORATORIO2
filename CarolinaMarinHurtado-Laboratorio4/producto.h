#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

class Producto {
protected:
    std::string nombre;
    std::string marca;
    int precio;
    int descuento;
    int cantidad;

public:
    Producto(std::string nombre, std::string marca, int precio, int descuento, int cantidad);

    std::string getNombre();
    std::string getMarca();
    int getPrecio();
    int getDescuento();
    int getCantidad();

    void setNombre(std::string nombre);
    void setMarca(std::string marca);
    void setPrecio(int precio);
    void setDescuento(int descuento);
    void setCantidad(int cantidad);

    virtual void imprimirInformacion() = 0;
};

#endif
