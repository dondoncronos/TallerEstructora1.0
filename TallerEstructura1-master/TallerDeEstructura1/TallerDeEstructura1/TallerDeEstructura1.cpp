#include <iostream>
#include "DogsSystem.h"

int insertOption(int options)
{
	int n;
	
	cin >> n;
	if (!cin) // o también if(cin.fail())
	{
		// El usuario no introdujo un número
		cin.clear(); // Borrar la entrada fallida
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Saltar la entrada no válida
		// Aquí poner código para volver a pedirle al usuario que introduzca un número
	}

	if (n > options || n <= 0) {
		cout << "Por favor ingrese una opcion valida" << endl;
		return -1;
	}

	return n;
}

int validacion() {
	string str;
	int dato;

	cout << "Por favor ingrese una opcion valida: \n";

	while (getline(cin,str)) {
		const char *idx = str.c_str();

		while (*idx && *idx >= '0' && *idx < '9') {
			++idx;

			if (!(*idx)) {
				break;
			}
			cout << "Entrada Invalida. \n";
		}

		dato = atoi(str.c_str());
		cout << "El dato es: " << dato << endl;
		return 0;
	}


}

void mainMenu(DogsSystem system)
{
	cout << "\tBienvenido" << endl;
	cout << "[1] Buscar perro\n[2] Buscar donacion\n[3] Recibir donacion\n[4] Dar en adopcion\n[5] Estadisticas\n[6] Salir" << endl;
	
}

void searchDogMenu(DogsSystem system)
{
}

void searchDonationMenu(DogsSystem system)
{
}

void receiveDonationMenu(DogsSystem system)
{
}

void adoptDogMenu(DogsSystem system)
{
}

void stadisticsMenu(DogsSystem system)
{
}

int main()
{
	validacion();
	/*
	DogsSystem dogsSystem = DogsSystem(150000, 5000, 10000, 15000);
	mainMenu(dogsSystem);
	*/
}