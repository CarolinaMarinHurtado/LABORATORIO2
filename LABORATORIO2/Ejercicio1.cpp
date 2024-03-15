#include <iostream>

using namespace std;

void billetes(int dinero)//asi creo la funcion
{
    int denominacion[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};//asi se crea el arreglo
    int b[sizeof(denominacion)/sizeof(denominacion[0])]={0};//inicializando en cero el vector

    //los vectores siempre inicializan en cero

    for (int i=0; i<sizeof(denominacion)/sizeof(denominacion[0]); i++)
    {
        while(dinero>=denominacion[i])//el i recorre el vector y va comparando
            {
            dinero=dinero-denominacion[i];//dinero-=denominacion[i] otra manera de hacerlo
            b[i]++;
        }

        }
    for(int i=0; i<sizeof(denominacion)/sizeof(denominacion[0]); i++)
    {
        cout<< denominacion[i] <<": "<<b[i]<<endl;
    }
    if (dinero>0)
    {
       cout<<"Sobrante: "<<dinero<<endl;
    }
}



int Ejercicio1()
{
    int dinero;

    cout<<"Ingrese el valor que desea cambiar"<<endl;
    cin>>dinero;

    billetes (dinero);//llamar función
    return 0;
}
