#include "comestibles.h"

// Implementación del constructor
Comestibles::Comestibles(string nombre, string marca, int precio, int cantidadInventario, int descuento, string fechaVencimiento)
{
    // Implementación del constructor
}

// Implementación del método para obtener la fecha de vencimiento
string Comestibles::getFechaVencimiento(){
    return fechaVencimiento;
}

// Implementación del método para establecer la fecha de vencimiento
void Comestibles::setFechaVencimiento(string nuevaFechaVencimiento){
    fechaVencimiento = nuevaFechaVencimiento;
}
