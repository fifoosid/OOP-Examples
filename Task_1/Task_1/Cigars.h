#pragma once
#include "Product.h"
#include <string>

using namespace std;


class Cigars : public Product
{
private:
	int percentOfNicotin;
	string name;
	int ID = 1;

public:
	Cigars(int newPercentOfNicotin, string newName);
	
	bool operator==(const Cigars& cig);

	string getName()
	{
		return name;
	}

	void Remove()
	{
		Product::setPrice(0);
		percentOfNicotin = -1;
		name = "";
	}

	int Percent()
	{
		return percentOfNicotin;
	}

	int getID()
	{
		return ID;
	}

	void operator=(const Cigars& prod)
	{
		this->ID = prod.ID;
		this->name = prod.name;
		percentOfNicotin = prod.percentOfNicotin;
	}
};