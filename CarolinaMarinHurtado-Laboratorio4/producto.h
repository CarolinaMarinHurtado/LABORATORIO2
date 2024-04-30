#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int cantidad;

public:
    Producto(std::string nombre, std::string marca, int precio, int cantidad);

    void setNombre(std::string nombre);
    std::string getNombre();
    void setMarca(std::string marca);
    std::string getMarca();
    void setPrecio(int precio);
    int getPrecio();
    void setCantidad(int cantidad);
    int getCantidad();

};

#endif
