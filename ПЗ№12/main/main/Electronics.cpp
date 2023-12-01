#include "Electronics.h"
Electronics::Electronics(std::string name, int price)
{
	this->name = name;
	this->price = price;
}

bool Electronics::operator == (const Electronics& other) const
{
	return (this->name == other.name) ? true : false;
}