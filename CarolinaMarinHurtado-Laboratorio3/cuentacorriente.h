#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>
#include <iostream>

using namespace std;

class CuentaCorriente
{
private:
    string Nombre;
    string apellidos;
    string direccion;
    string telefono;
    double saldo;
public:
    CuentaCorriente();
    CuentaCorriente(string nom,double sal);

    //Métodos de acceso
    string getNombre();
    double getsaldo();

    //Métodos de modificación
    void setNombre (string nom);
    void setSaldo(double sal);

    //Metodos otros
    void deposita(double cant);
    bool retira(double cant);
    void muestra();
};

//IMPLEMENTACIÓN DE LOS MÉTODOS
CuentaCorriente::CuentaCorriente(){
    Nombre=" ";
    apellidos=" ";
    direccion=" ";
    telefono=" ";
    saldo =0;
}

CuentaCorriente::CuentaCorriente(string nom, double sal){
    Nombre=nom;
    saldo=sal;
}

string CuentaCorriente::getNombre(){
    return Nombre;
}

double CuentaCorriente::getsaldo(){
    return saldo;
}

void CuentaCorriente::setNombre (string nom){
   Nombre=nom;
}

void CuentaCorriente::setSaldo (double sal){
   saldo=sal;
}

void CuentaCorriente::deposita(double cant){
   saldo+=cant;
}

bool CuentaCorriente::retira(double cant){
    if (cant>saldo){
        return false;
    }
    else {
        saldo -=cant;
        return true;
    }
}
void CuentaCorriente::muestra(){
    cout << "Nombre " << Nombre << " saldo " << saldo << endl;
    }


#endif // CUENTACORRIENTE_H


