#include "PortElect.h"
PortElect::PortElect(std::string name, int price)
	: Electronics(name, price) {}

void PortElect::getInfo()
{
	std::cout <<
		"Name - " << name << "\n" <<
		"Price - " << price << std::endl;
}