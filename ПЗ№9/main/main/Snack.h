#pragma once
#include<string>

class Snack
{
public:
	Snack();
	Snack(int price, int callories);
	Snack(std::string name);
	Snack(std::string name, int price, int callories);
	std::string getName() const;
	int getPrice() const;
	int getCallories() const;

	void setName(std::string name);
	void setPrice(int price);
	void setCallories(int callories);

private:
	std::string name;
	int price;
	int callories;
};
