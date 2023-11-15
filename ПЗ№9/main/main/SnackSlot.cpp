#include "SnackSlot.h"

SnackSlot::SnackSlot()
{
	this->size = 1;
	snackSlot = new Snack[size];
	iterator = 0;
}
SnackSlot::SnackSlot(int size)
{
	this->size = size;
	snackSlot = new Snack[size];
	iterator = 0;
}
SnackSlot::~SnackSlot()
{
	delete[] snackSlot;
}


int SnackSlot::getSize() const
{
	return this->size;
}
Snack& SnackSlot::getSnack(int index) const
{
	return this->snackSlot[index];
}

void SnackSlot::setSize(int size)
{
	this->size = size;
}
void SnackSlot::addSnack(Snack* other)
{
	if (iterator == size)
	{
		std::cout << "Места в слоте не хватает" << std::endl;
	}
	else
	{
		snackSlot[iterator] = *other;
		++iterator;
	}
}
