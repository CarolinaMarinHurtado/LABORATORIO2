#include "cuentacorriente.h"

CuentaCorriente::CuentaCorriente(const std::string& nombre, const std::string& apellidos, const std::string& direccion, const std::string& telefono, const std::string& numeroIdentificacion, double saldo, const std::string& clave) {
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->direccion = direccion;
    this->telefono = telefono;
    this->numeroIdentificacion = numeroIdentificacion;
    this->saldo = saldo;
    this->clave = clave;
}

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

std::string CuentaCorriente::getClave() const {
    return clave;
}

void CuentaCorriente::setClave(const std::string& clave) {
    this->clave = clave;
}
