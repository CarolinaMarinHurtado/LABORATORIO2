#include "cuentacorriente.h"
#include <iostream>

std::string CuentaCorriente::getNombre() const {
    return nombre;
}

void CuentaCorriente::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string CuentaCorriente::getApellidos() const {
    return apellidos;
}

void CuentaCorriente::setApellidos(const std::string& apellidos) {
    this->apellidos = apellidos;
}

std::string CuentaCorriente::getDireccion() const {
    return direccion;
}

void CuentaCorriente::setDireccion(const std::string& direccion) {
    this->direccion = direccion;
}

std::string CuentaCorriente::getTelefono() const {
    return telefono;
}

void CuentaCorriente::setTelefono(const std::string& telefono) {
    this->telefono = telefono;
}

std::string CuentaCorriente::getNumeroIdentificacion() const {
    return numeroIdentificacion;
}

void CuentaCorriente::setNumeroIdentificacion(const std::string& numeroIdentificacion) {
    this->numeroIdentificacion = numeroIdentificacion;
}

double CuentaCorriente::getSaldo() const {
    return saldo;
}

void CuentaCorriente::setSaldo(double saldo) {
    this->saldo = saldo;
}

bool CuentaCorriente::claveValida() {
    std::string numeroDocumento;
    std::string claveIngresada;

    std::cout << "Ingrese el número de documento: ";
    std::cin >> numeroDocumento;

    if (numeroDocumento == numeroIdentificacion) {
        std::cout << "Ingrese la clave anterior: ";
        std::cin >> claveIngresada;

        if (claveIngresada == clave) {
            return true;
        } else {
            std::cout << "Clave incorrecta." << std::endl;
            return false;
        }
    } else {
        std::cout << "Número de documento incorrecto." << std::endl;
        return false;
    }
}
