#include<iostream>

using namespace std;


void EnteroACadena(int n,char cadena[]){ //la cadena hace la division desde la derecha a la izquierda y termina en la posición cero
    int numdedig=0;
    int aux=n;

    while (aux>0){
        aux= aux/10;
        numdedig++;
    }
    cadena[numdedig]='\0';
    aux=n;

    int posicion=numdedig-1;

    while (posicion>=0){
       int dig =aux%10;
       aux= aux/10;
       cadena[posicion]=dig+'0';
       posicion = posicion-1;
    }
}

int Ejercicio5()
{
    int a=123456;
    char cadena[20];

    EnteroACadena (a,cadena);
    cout<<"La cadena que repesenta al numero es: "<<cadena<<endl;
    return 0;
}
