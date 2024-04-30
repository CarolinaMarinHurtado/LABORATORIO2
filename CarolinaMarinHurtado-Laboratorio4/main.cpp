#include <iostream>
#include "comestibles.h"
#include "electronicos.h"
#include "aseo.h"

Comestibles comestible("Manzana", "MarcaX", 5, 10, 0, "2022-05-01");
Electronico electronico;
Aseo aseo("nombre", "marca", 100, 10, 5, "material");

void mostrarMenu() {
    std::cout << "Menú inicial:" << std::endl;
    std::cout << "1. Agregar productos" << std::endl;
    std::cout << "2. Modificar nombres o precios" << std::endl;
    std::cout << "3. Realizar compra" << std::endl;
    std::cout << "0. Salir" << std::endl;
}

void agregarProducto() {
    std::cout << "Ingrese los detalles del producto:" << std::endl;

    int opcion;
    std::cout << "Seleccione el tipo de producto:" << std::endl;
    std::cout << "1. Comestible" << std::endl;
    std::cout << "2. Electrónico" << std::endl;
    std::cout << "3. Aseo" << std::endl;
    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            std::string nombre;
            double precio;
            int cantidad;
            std::cout << "Nombre: ";
            std::cin >> nombre;
            std::cout << "Precio: ";
            std::cin >> precio;
            std::cout << "Cantidad: ";
            std::cin >> cantidad;

            comestible.setNombre(nombre);
            comestible.setPrecio(precio);
            comestible.setCantidad(cantidad);

            std::cout << "Producto Comestible agregado correctamente." << std::endl;
            break;
        }
        case 2: {
            std::string nombre;
            double precio;
            std::cout << "Nombre: ";
            std::cin >> nombre;
            std::cout << "Precio: ";
            std::cin >> precio;

            electronico.setNombre(nombre);
            electronico.setPrecio(precio);

            std::cout << "Producto Electrónico agregado correctamente." << std::endl;
            break;
        }
        case 3: {
            std::string nombre;
            double precio;
            double porcentajeDescuento;
            std::cout << "Nombre: ";
            std::cin >> nombre;
            std::cout << "Precio: ";
            std::cin >> precio;
            std::cout << "Porcentaje de descuento: ";
            std::cin >> porcentajeDescuento;

            aseo.setNombre(nombre);
            aseo.setPrecio(precio);
            aseo.setDescuento(porcentajeDescuento);

            std::cout << "Producto de Aseo agregado correctamente." << std::endl;
            break;
        }
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }
}

void modificarProductos() {
    std::cout << "Seleccione el tipo de producto a modificar:" << std::endl;
    std::cout << "1. Comestible" << std::endl;
    std::cout << "2. Electrónico" << std::endl;
    std::cout << "3. Aseo" << std::endl;

    int opcion;
    std::cin >> opcion;

    std::string nuevoNombre; // Mover la declaración y la inicialización fuera del switch

    switch (opcion) {
        case 1:
            std::cout << "Ingrese el nuevo nombre del producto Comestible: ";
            std::cin >> nuevoNombre;
            comestible.setNombre(nuevoNombre);
            std::cout << "Nombre modificado correctamente." << std::endl;
            break;
        case 2:
            std::cout << "Ingrese el nuevo nombre del producto Electrónico: ";
            std::cin >> nuevoNombre;
            electronico.setNombre(nuevoNombre);
            std::cout << "Nombre modificado correctamente." << std::endl;
            break;
        case 3:
            std::cout << "Ingrese el nuevo nombre del producto de Aseo: ";
            std::cin >> nuevoNombre;
            aseo.setNombre(nuevoNombre);
            std::cout << "Nombre modificado correctamente." << std::endl;
            break;
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }

}

void realizarCompra() {
    std::cout << "Ingrese la cantidad de productos Comestible que desea comprar: ";
    int cantidad;
    std::cin >> cantidad;

    if (comestible.getCantidad() >= cantidad) {
        double total = cantidad * comestible.getPrecio();
        std::cout << "Total de la compra: $" << total << std::endl;
        std::cout << "Compra realizada correctamente." << std::endl;
    } else {
        std::cout << "No hay suficiente stock de productos Comestible." << std::endl;
    }
}

void manejarOpcion(int opcion) {
    switch (opcion) {
        case 1:
            agregarProducto();
            break;
        case 2:
            modificarProductos();
            break;
        case 3:
            realizarCompra();
            break;
        case 0:
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        std::cout << "Ingrese la opción deseada: ";
        std::cin >> opcion;

        manejarOpcion(opcion);
    } while (opcion != 0);

    return 0;
}
