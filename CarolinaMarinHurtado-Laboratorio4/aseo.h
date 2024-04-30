#ifndef ASEO_H
#define ASEO_H

#include <string>

class Aseo {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int cantidad;
    int descuento;
    std::string material;

public:
    Aseo(std::string nombre, std::string marca, int precio, int cantidad, int descuento, std::string material){
        this->nombre = nombre;
        this->marca = marca;
        this->precio = precio;
        this->cantidad= cantidad;
        this->descuento = descuento;
        this->material = material;

    };

    void setNombre(std::string nombre);
    std::string getNombre();
    void setMarca(std::string marca);
    std::string getMarca();
    void setPrecio(int precio);
    int getPrecio();
    void setCantidad(int cantidad);
    int getCantidad();
    void setDescuento(int descuento);
    int getDescuento();
    void setMaterial(std::string material);
    std::string getMaterial();

};

#endif
