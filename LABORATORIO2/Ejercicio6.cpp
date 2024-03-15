#include<iostream>

using namespace std;

void PasarAMayuscula (char cadena[]){
    int i=0;
    while(cadena[i]!='\0'){
        if(cadena[i]>='a' and cadena[i]<='z'){
            cadena[i]=cadena[i]-('a'-'A');
        }
        i++;
    }
}

int Ejercicio6 ()
{
    char cadena1[50];
    cout<<"Ingrese la cadena de caracteres: "<<endl;
    cin.getline(cadena1, 50);

    PasarAMayuscula (cadena1);
    cout<<"La cadena en mayusculas es:  "<<cadena1<<endl;

    return 0;

}
