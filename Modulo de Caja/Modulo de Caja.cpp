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
    if (Cajas.empty())
    {
        cout << "No existe ningun cajero a Eliminar" << endl;
    }
    
    Cajero* cajero = inicio;

    int _id;
    cout << "Ingrese el ID del cajero que desea eliminar" << endl;
    cin >> _id;

    while (cajero && cajero->Id != _id)     // Buscar el ID del cajero
    {
        cajero = cajero->siguiente;
    }

  
    if (!cajero)  //Si el ID de este no existe 
    {
        cout << "El cajero no se encuentra en el sistema" << endl;
        return;


    }

    
   // if (cajero->ClientesPendientes > 0) //Si hay clientes pendientes
   // {
       // cout << "Este cajero no se puede eliminar porque cuenta con pendientes"<<endl;
        //return;
    //}

   //--------Actualizacion de Punteros---------------
    if (cajero == inicio) inicio = cajero->siguiente;
    if (cajero == fin) fin = cajero->atras;
    if (cajero->atras) cajero->atras->siguiente = cajero->siguiente;
    if (cajero->siguiente) cajero->siguiente->atras = cajero->atras;

    
    Cajas.erase(remove(Cajas.begin(), Cajas.end(), cajero->NumCaja), Cajas.end()); //Se remueve la caja del vector 
    delete cajero;

    cout << "El cajero se ha eliminado correctammente!!" << endl;
}

void MenuCajero()
{
    Cajeros caja;

    cout << "-_-_-_-_-_-Bienvenido al menu de Cajeros-_-_-_-_-_-" << endl;
    cout << "1)Para agregar cajeros" << endl;
    cout << "2)Para Mostrar cajeros" << endl;
    cout << "3)Para Eliminar cajeros" << endl;
    cout << "4)Para Modificar cajeros" << endl;
    cout << "5)Para volver al menu principal" << endl;
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    int opcion;
    cin >> opcion;

    switch (opcion)
    {
        case 1:
        {

        }

        case 2:
        {

        }

        case 3:
        {

        }

        case 4:
        {
            caja.EliminarCajero();
            break;
        }
    }
}