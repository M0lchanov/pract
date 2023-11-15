#pragma once
#include"Snack.h"
#include <iostream>
class SnackSlot
{
public:
	SnackSlot();
	SnackSlot(const int size);
	~SnackSlot();

	int getSize() const;
	Snack& getSnack(int index) const;

	void setSize(int size);
	void addSnack(Snack* other);

private:
	int size;
	Snack* snackSlot;
	int iterator;
};
