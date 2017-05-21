#include "stdafx.h"
#include "Alcohol.h"

Alcohol::Alcohol(string newName, int newPercentOfAlcohol)
{
	name = newName;
	percentOfAlcohol = newPercentOfAlcohol;
}

void Alcohol::PrintCharacteristics()
{
	cout << "Name: " << name << endl;
	cout << "Percent of alcohol: " << percentOfAlcohol << endl;
}

bool Alcohol::operator==(const Alcohol & alc)
{
	if (name == alc.name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
