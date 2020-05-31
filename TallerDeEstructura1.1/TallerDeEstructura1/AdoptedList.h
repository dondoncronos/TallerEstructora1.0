#pragma once
#include "AdoptedDog.h"
class AdoptedList
{
public:
	AdoptedList();
	AdoptedList(int max);
	~AdoptedList();

	void addAdopted(AdoptedDog newAdopted);
	void expand();
	void print();
	AdoptedDog searchDog(string id);
	bool exists(string id);
	string getText();
	int getSize();
	int getMaleAccount();
	int getFemaleAccount();

private:
	AdoptedDog* list;
	int size;
	int max;
};

