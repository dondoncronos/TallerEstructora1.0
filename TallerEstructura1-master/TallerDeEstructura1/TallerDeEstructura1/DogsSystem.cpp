#include "DogsSystem.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

DogsSystem::DogsSystem(int money, int vaccineCost, int sterilizationCostMale, int sterilizationCostFemale)
{
	this->money = money;
	this->vaccineCost = vaccineCost;
	this->sterilizationCostMale = sterilizationCostMale;
	this->sterilizationCostFemale = sterilizationCostFemale;
	srand(time(NULL));
}

Dog DogsSystem::searchDog()
{
	int probabilidad = random(0,100);
	if (probabilidad <= 30) {//Si encuentra al perro

		return Dog();
	}
	else {// Si no encuentra al perro
		return void;
	}
}

Donation DogsSystem::searchDonation()
{
	int probabilidad = random(0,100);
	int monto;
	if (probabilidad <= 50) {
		monto = random(1000,2000);
		receiveDonation();
	}
	return Donation();
}

bool DogsSystem::receiveDonation()
{
	string rut, nombre, apellido;
	int monto;

	cout << "Ingrese Rut:" << endl;
	cin >> rut;
	cout << "Ingrese Nombre:" << endl;
	cin >> nombre;
	cout << "Ingrese Apellido:" << endl;
	cin >> apellido;
	cout << "Ingrese Monto de la donacion:" << endl;
	cin >> monto;
		
	return false;
}

bool DogsSystem::AdoptDog()
{
	return false;
}

string DogsSystem::stadistics()
{
	return string();
}

void DogsSystem::exit()
{
}

int DogsSystem::random(int min, int max)
{
	int num = min + rand() % (max + 1 - min);
	return num;
}




