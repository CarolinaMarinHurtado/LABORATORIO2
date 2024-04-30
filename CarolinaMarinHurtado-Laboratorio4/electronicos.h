#ifndef ELECTRONICO_H
#define ELECTRONICO_H

#include <string>

class Electronico {
private:
    std::string nombre;
    std::string marca;
    int precio;
    int cantidad;
    std::string modelo;

public:
    Electronico(std::string nombre, std::string marca, int precio, int cantidad, std::string modelo);

    void setNombre(std::string nombre);
    std::string getNombre();
    void setMarca(std::string marca);
    std::string getMarca();
    void setPrecio(int precio);
    int getPrecio();
    void setCantidad(int cantidad);
    int getCantidad();
    void setModelo(std::string modelo);
    std::string getModelo();

};

#endif
