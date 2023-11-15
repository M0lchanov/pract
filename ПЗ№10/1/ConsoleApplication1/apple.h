#pragma once
#include "fruit.h"

class apple : public fruit
{
public:
	apple(int sugar, std::string color) : fruit(sugar), _color(color)
	{

	}
	void ShowColor()
	{
		std::cout << _color << "Apple" << std::endl
			<< "sugar: " << _sugar << std::endl;
	}
private:
	std::string _color;
};