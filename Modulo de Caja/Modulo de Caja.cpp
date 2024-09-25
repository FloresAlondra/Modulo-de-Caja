#include <iostream>
#include "ModulodeCaja.h"
#include <cstdlib>

using namespace std;

int menu()
{
	cout << "-_-_-_-_-_-Bienvenido al menu de Cajeros-_-_-_-_-_-" << endl;
	cout << "1)Para agregar cajeros" << endl;
	cout << "2)Para Mostrar cajeros" << endl;
	cout << "3)Para Eliminar cajeros" << endl;
	cout << "4)Para Modificar cajeros" << endl;
	cout << "5)Para volver al menu principal" << endl;
	int opcion;
	cin >> opcion;
}

int main()
{
	node n;
	int x = 0;
	int opcion = 0;
	do
	{
		opcion = menu();

		switch (opcion)
		{
			case 1:

		}

	} while (opcion != 7);

}


