#include <iostream>
#include "ModulodeCaja.h"
#include <cstdlib>
#include <vector>

using namespace std;

struct Cajero
{
    int id=0;
    int NumCaja=0;
    string Nombre=0;
    int ClientesPendientes=0;
    Cajero* atras;
    Cajero* siguiente;
};

Cajero* lista = NULL;
Cajero* inicio = NULL;
Cajero* fin = NULL;
int cantCa = 0;
vector<int> Cajas;


Cajero* actual = lista;

bool buscarCaje(int id)
{
    Cajero* actual = lista;
    while (actual)
    {
        if (actual->id == id)
        {
            return true;
        }//if
        actual = actual->siguiente;
    }//while
        return false;
}//metodo

int contCaje() 
{
    int cont = 0;
    Cajero* actual = actual;

    while (actual)
    {
        cont++;
        actual = actual->siguiente;

    }//while

    return cont;
}//int 

void InsertarCajero()
{
   


}


void MostrarCajeros(Cajero*& lista, int id, string nombre)
{
    if (buscarCaje(id)) {
        cout << "El cajero Ya esta ingresado " << endl;
    }
    if (cantCa >= 6) {
        cout << "No se pueden ingresar mas cajeros" << endl;
    }

    Cajero* nuevo = new Cajero();
    nuevo->id = id;
    nuevo->Nombre = nombre;
    nuevo->siguiente; 

    if (lista != NULL) {
        nuevo->siguiente = lista;
        lista->atras = nuevo;

    }
    lista = nuevo;
    cantCa++;
    cout << "ID Cajero:" << id << endl;
    cout << "Nombre de cajeros:" << nombre << endl;
    cout << "El cajero ha sido ingresado" << endl;
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

    while (cajero && cajero->id != _id)     // Buscar el ID del cajero
    {
        cajero = cajero->siguiente;
    }

  
    if (!cajero)  //Si el ID de este no existe 
    {
        cout << "El cajero no se encuentra en el sistema" << endl;
        return;

    }

    if (cajero->ClientesPendientes > 0) //Si hay clientes pendientes
    {
        cout << "Este cajero no se puede eliminar porque cuenta con pendientes"<<endl;
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