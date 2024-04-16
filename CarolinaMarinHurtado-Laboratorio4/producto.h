#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class producto
{
  private:
    string nombre;
    string marca;
    int precio;
    int cantidadInventario;
    int descuento;

  public:
    producto(string nombre, string marca, int precio, int cantidadInventario, int descuento);
    string getNombre();
    void setNombre(string nombre);
   };

#endif // PRODUCTO_H
