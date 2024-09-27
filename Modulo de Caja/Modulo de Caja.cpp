#include <iostream>
#include "ModulodeCaja.h"
#include <cstdlib>
#include <vector>

using namespace std;

struct Cajero
{
    int Id;
    int NumCaja;
    string Nombre;
    int ClientesPendientes;
    Cajero* atras;
    Cajero* siguiente;
};

Cajero* inicio = NULL;
Cajero* fin = NULL;

vector<int> Cajas;



void InsertarCajero()
{
    


}




void MostrarCajeros()
{



}



void modificarCajero()
{
  
}




void EliminarCajero()
{
    Cajero* cajero = inicio;

    int _id;
    cout << "Ingrese el ID del cajero que desea eliminar" << endl;
    cin >> _id;

    while (cajero && cajero->Id != _id)     // Buscar el ID del cajero
    {
        cajero = cajero->siguiente;
    }

  
    if (!cajero)  //Si este no existe 
    {
        cout << "El cajero no se encuentra en el sistema" << endl;
        return;
    }

    
    if (cajero->ClientesPendientes > 0) //Si hay clientes pendientes
    {
        cout << "Este cajero no se puede eliminar porque cuenta con pendientes"<<endl;
        return;
    }

   
    if (cajero == inicio) inicio = cajero->siguiente;
    if (cajero == fin) fin = cajero->atras;
    if (cajero->atras) cajero->atras->siguiente = cajero->siguiente;
    if (cajero->siguiente) cajero->siguiente->atras = cajero->atras;

    
    Cajas.erase(remove(Cajas.begin(), Cajas.end(), cajero->NumCaja), Cajas.end()); //Se remueve la caja del vector 
    delete cajero;

    cout << "El cajero se ha eliminado correctammente!!" << endl;
}
