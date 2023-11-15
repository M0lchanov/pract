#include "Snack.h"


Snack::Snack()
{
	this->callories = 0;
	this->name = "";
	this->price = 0;
}
Snack::Snack(int price, int callories)
{
	this->price = price;
	this->callories = callories;
}
Snack::Snack(std::string name)
{
	this->name = name;
}
Snack::Snack(std::string name, int price, int callories)
{
	this->name = name;
	this->price = price;
	this->callories = callories;
}


std::string Snack::getName() const
{
	return this->name;
}
int Snack::getPrice() const
{
	return this->price;
}
int Snack::getCallories() const
{
	return this->callories;
}

void Snack::setName(std::string name)
{
	this->name = name;
}
void Snack::setPrice(int price)
{
	this->price = price;
}
void Snack::setCallories(int callories)
{
	this->callories = callories;
}