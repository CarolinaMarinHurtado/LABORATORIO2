#ifndef COMESTIBLES_H
#define COMESTIBLES_H

#include <string>

class Comestibles {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int cantidadInventario;
    int descuento;
    std::string fechaVencimiento;

public:
    Comestibles(std::string nombre, std::string marca, int precio, int cantidadInventario, int descuento, std::string fechaVencimiento) {
        this->nombre = nombre;
        this->marca = marca;
        this->precio = precio;
        this->cantidadInventario = cantidadInventario;
        this->descuento = descuento;
        this->fechaVencimiento = fechaVencimiento;
    };
    void setNombre(std::string nombre);
        std::string getNombre();
    void setMarca(std::string marca);
        std::string getMarca();
    void setPrecio(int precio);
         int getPrecio();
    void setDescuento(int descuento);
         int getDescuento();
    void setCantidad(int cantidad);
         int getCantidad();
     void setFechaVencimiento(std::string fechaVencimiento);
        std::string getFechaVencimiento();
};

#endif
