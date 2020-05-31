#include "DogList.h"
#include <iostream>

DogList::DogList()
{
}

DogList::DogList(int max)
{
	list = new Dog[max];
	size = 0;
	this->max = max;
}

DogList::~DogList()
{
}

void DogList::addDog(Dog newDog)
{
	if (size == max) {
		expand();
	}
	list[size] = newDog;
	size++;
}

void DogList::expand()
{
	Dog* copy = new Dog[max];
	for (int i = 0; i < max; i++) {
		copy[i] = list[i];
	}
	delete[] list;

	list = new Dog[max + 1];

	for (int i = 0; i < max; i++) {
		list[i] = copy[i];
	}
	max = max + 1;
	delete[] copy;
}

void DogList::printAll()
{
	cout << "Perros rescatados: " << endl;
	for (int i = 0; i < this->size; i++) {
		cout << "[" << (i + 1) << "] ID: " << list[i].getId() << "\tEdad: " << list[i].getAge() << "\t Sexo: " << list[i].getSex() << "\tTamanio: " << list[i].getSize() << "\tVacunado: " << list[i].getVaccinated() << "\tEsterilizado: " << list[i].getSterilized() << endl;
	}
}

void DogList::printAvailable()
{
}

Dog DogList::searchDog(string id)
{
	for (int i = 0; i < size; i++) {
		if (list[i].getId()._Equal(id)) {
			return list[i];
		}
	}
	return Dog();
}

string DogList::getText()
{
	string text = "";

	for (int i = 0; i < size; i++) {
		text += list[i].getId() + "," + list[i].getSize() + "," + to_string(list[i].getAge()) + "," + list[i].getSex() + "," + list[i].getVaccinated() + "," + list[i].getSterilized() + "\n";
	}
	return text;
}

int DogList::getSize()
{
	return this->size;
}

int DogList::getMalesAccount()
{
	int contador = 0;

	for (int i = 0; i < size; i++) {
		if (list[i].getSex()._Equal("male")) {
			contador++;
		}
	}
	return contador;
}

int DogList::getFemalesAccount()
{
	int contador = 0;

	for (int i = 0; i < size; i++) {
		if (list[i].getSex()._Equal("female")) {
			contador++;
		}
	}

	return contador;
}



