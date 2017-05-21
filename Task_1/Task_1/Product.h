#pragma once
#include <iostream>
using namespace std;
class Product
{
private:
	int price;

public:
	virtual void PrintCharacteristics()
	{
		cout << "No charachteristics!" << endl;
	}
	virtual int getID()
	{
		return -1;
	}

	virtual string getName()
	{
		return "";
	}

	virtual void Remove()
	{

	}
	void setPrice(int newPrice)
	{
		price = newPrice;
	}

	int getPrice() const
	{
		return price;
	}
	virtual int Percent()
	{
		return -1;
	}
	
	virtual void operator=(const Product& prod)
	{

	}
	
};