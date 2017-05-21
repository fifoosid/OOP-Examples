#pragma once
#include "Product.h"
#include "Cigars.h"
#include "Alcohol.h"
class InShop
{
private:
	Product* products[10];
	int size = 10;

public:


	void operator+=( Product& newproduct);
	
	void operator-=( Product& newproduct);
	
	int calculateBenefit() const;

	Cigars* LeastNicotine() const;

	Alcohol* MostAlcohol() const;
};