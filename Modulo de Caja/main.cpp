#include <iostream>
#include "ModulodeCaja.h"
#include <cstdlib>

using namespace std;


int menu()
{
	Cajeros caja;

	cout << "-_-_-_-_-_-Bienvenido al menu de Cajeros-_-_-_-_-_-" << endl;
	cout << "1)Para agregar cajeros" << endl;
	cout << "2)Para Mostrar cajeros" << endl;
	cout << "3)Para Eliminar cajeros" << endl;
	cout << "4)Para Modificar cajeros" << endl;
	cout << "5)Para volver al menu principal" << endl;
	cout << "-_-_-_-_-_-_-_-_-_-_-_-" << endl;
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
