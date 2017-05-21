#include "stdafx.h"
#include "Cigars.h"

Cigars::Cigars(int newPercentOfNicotin, string newName)
{
	percentOfNicotin = newPercentOfNicotin;
	name = newName;

}

bool Cigars::operator==(const Cigars & cig)
{
	if (name == cig.name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
