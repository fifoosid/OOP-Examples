#pragma once
#include <string>
#include <iostream>
#include "Product.h"
using namespace std;


class Alcohol : public Product
{
private:
	string name;
	int percentOfAlcohol;
	int ID = 0;

public:
	Alcohol(string newName, int newPercentOfAlcohol);
	void PrintCharacteristics();

	bool operator==(const Alcohol& alc);

	string getName()
	{
		return name;
	}
	
	int Percent()
	{
		return percentOfAlcohol;
	}

	int getID()
	{
		return ID;
	}

	void operator=(const Alcohol& prod)
	{
		this->ID = prod.ID;
		this->name = prod.name;
		this->percentOfAlcohol = prod.percentOfAlcohol;
	}
};