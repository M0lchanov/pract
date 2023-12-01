#include "HouseElect.h"
HouseElect::HouseElect(std::string name, int price)
	: Electronics(name, price) {}

void HouseElect::getInfo()
{
	std::cout <<
		"Name - " << name << "\n" <<
		"Price - " << price << std::endl;
}
