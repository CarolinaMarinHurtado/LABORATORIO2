#include<iostream>
#include<string.h>

using namespace std;

void solicitarcadena();
bool comparador (char *, int, char *, int);

char cadena1[50];
char cadena2[50];

int longitud1=0;
int longitud2=0;

int Ejercicio3()
{
 solicitarcadena();
 int res=comparador(cadena1,longitud1,cadena2,longitud2);
 cout<<"El valor logico que entrega la funcion es :"<<res<<endl;

 if (res==1){
     cout<<"Las dos cadenas son iguales "<<endl;
 }
 else{
     cout<<"Las dos cadenas son diferentes "<<endl;
 }

return 0;
}



void solicitarcadena(){ //primera funcion
    cout<<"Ingrese por favor la cadena numero 1"<<endl;
    cin.getline(cadena1,50);

    cout<<"Ingrese por favor la cadena numero 2"<<endl;
    cin.getline(cadena2,50);

    longitud1=strlen(cadena1);
    longitud2=strlen(cadena2);
}


bool comparador(char *c1, int longitud1, char *c2, int longitud2) { //puntero para cadena1
    bool com = true; // Se asume que las cadenas son iguales hasta que se demuestre lo contrario

    if (longitud1 != longitud2) {
        com = false; // Si las longitudes son diferentes, las cadenas son definitivamente diferentes
    } else {
        for (int i = 0; i < longitud1; i++) {
            if (c1[i] != c2[i]) { // Si algún carácter es diferente, se establece com en false y se sale del bucle
                com = false;
                break;
            }
        }
    }

    return com;
}

