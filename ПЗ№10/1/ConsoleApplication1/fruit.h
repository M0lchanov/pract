#pragma once
#include <iostream>
class fruit
{
public:
	fruit(int sugar) : _sugar(sugar)
	{}
	void Show()
	{
		std::cout << "Basic fruit sugar: " << _sugar << std::endl;
	}
protected:
	int _sugar;
};