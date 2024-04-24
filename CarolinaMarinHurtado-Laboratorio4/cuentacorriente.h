#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H

#include <string>

class CuentaCorriente {
private:
    std::string nombre;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    std::string numeroIdentificacion;
    double saldo;
    std::string clave;

public:
    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    std::string getApellidos() const;
    void setApellidos(const std::string& apellidos);

    std::string getDireccion() const;
    void setDireccion(const std::string& direccion);

    std::string getTelefono() const;
    void setTelefono(const std::string& telefono);

    std::string getNumeroIdentificacion() const;
    void setNumeroIdentificacion(const std::string& numeroIdentificacion);

    double getSaldo() const;
    void setSaldo(double saldo);

    bool claveValida();
};

#endif // CUENTACORRIENTE_H
