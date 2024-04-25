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
    Comestibles(std::string nombre, std::string marca, int precio, int cantidadInventario, int descuento, std::string fechaVencimiento);
    void mostrarInformacion();
    void disminuirInventario(int cantidad);
};

#endif
