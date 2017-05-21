#include "stdafx.h"
#include "InShop.h"

void InShop::operator+=(Product & newproduct)
{
	products[size] = &newproduct;
	size++;
}

void InShop::operator-=(Product & newproduct)
{
	for (size_t i = 0; i < size; i++)
	{
		if (!products[i]->getName().compare(newproduct.getName()))
		{
			products[i]->Remove();
		}
	}



}

int InShop::calculateBenefit() const
{
	int result = 0;
	for (size_t i = 0; i < size; i++)
	{
		result += products[i]->getPrice();
	}

	return result;
}

Cigars* InShop::LeastNicotine() const
{
	Cigars* res = nullptr;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (products[i]->getID())
		{
			if (((Cigars*)products[i])->Percent() > ((Cigars*)products[i + 1])->Percent())
			{
				res = ((Cigars*)products[i]);
			}
			else
			{
				res = ((Cigars*)products[i + 1]);
			}
		}
	}
	return res;


	
}

Alcohol* InShop::MostAlcohol() const
{
	Alcohol* res = nullptr;

	for (size_t i = 0; i < size - 1; i++)
	{
		if (products[i]->getID())
		{
			if (((Alcohol*)products[i])->Percent() >((Alcohol*)products[i + 1])->Percent())
			{
				res = ((Alcohol*)products[i]);
			}
			else
			{
				res = ((Alcohol*)products[i + 1]);
			}
		}
	}
	return res;

}