#include "comestibles.h"
using namespace std;

Comestibles::Comestibles(string nombre, string marca, int precio, int cantidadInventario, int descuento, string fechaVencimiento)
    : nombre(nombre), marca(marca), precio(precio), cantidadInventario(cantidadInventario), descuento(descuento), fechaVencimiento(fechaVencimiento) {}

void Comestibles::mostrarInformacion() {

}

void Comestibles::disminuirInventario(int cantidad) {

}
